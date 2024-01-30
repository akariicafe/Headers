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
@property (nonatomic) BOOL enableAudioPowerSpectrumReport;
@property (nonatomic) double emulatedRxPLR;
@property (nonatomic) int forcedTargetBitrate;
@property (nonatomic) int forcedCapBitrate;
@property (retain, nonatomic) NSString *emulatedNetworkConfigPath;
@property (nonatomic) BOOL enableOneToOneMode;

+ (id)sharedManager;

- (void)registerBlocksForService;
- (void)dealloc;
- (id)init;
- (void)reportSessionMediaDaemonStats:(id)a0;

@end
