@class NSString, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface VCTestMonitorManager : NSObject {
    NSNumber *_initialMemoryUsage;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
}

@property BOOL toneInjectionEnabled;
@property BOOL forceNetworkCellular;
@property (nonatomic) BOOL enableLoopbackInterface;
@property (nonatomic) BOOL enableOneToOneMode;
@property (nonatomic) double emulatedRxPLR;
@property (nonatomic) int forcedTargetBitrate;
@property (nonatomic) int forcedCapBitrate;
@property (retain, nonatomic) NSString *cannedReplayPath;
@property (retain, nonatomic) NSString *emulatedNetworkConfigPath;

+ (id)sharedManager;

- (id)init;
- (void)registerBlocksForService;
- (void)reportMemoryUsage;
- (void)dealloc;

@end
