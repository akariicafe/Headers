@class AVConferenceXPCClient, NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCAudioPowerSpectrumManager : NSObject <VCAudioPowerSpectrumMeterDelegate> {
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

@property (readonly, nonatomic) NSMutableArray *meters;
@property (readonly, nonatomic) NSMutableDictionary *sources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerAudioPowerMeterSource:(id)a0;
- (void)deregisterBlocksForService;
- (void)unregisterAudioPowerSpectrumSourceForStreamToken:(id)a0;
- (void)audioPowerSpectrumMeter:(id)a0 didUpdateAudioPowerSpectrums:(id)a1;
- (id)init;
- (void)registerBlocksForService;
- (void)dealloc;

@end
