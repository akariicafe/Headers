@class AVConferenceXPCClient, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface AVCAudioPowerSpectrumMeter : NSObject {
    AVConferenceXPCClient *_connection;
    double _audioSpectrumRefreshRate;
    unsigned short _audioSpectrumBinCount;
    NSSet *_whiteListedXPCObjects;
}

@property (readonly, nonatomic) id delegate;
@property (readonly, nonatomic) unsigned int sessionToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

- (void)dealloc;
- (void)deregisterBlocksForService;
- (id)initWithConfig:(struct _AVCAudioPowerSpectrumMeterConfig { long long x0; unsigned int x1; unsigned short x2; double x3; })a0 delegate:(id)a1 queue:(id)a2;
- (void)registerPowerSpectrumForStreamToken:(long long)a0;
- (void)unregisterPowerSpectrumForStreamToken:(long long)a0;
- (void)registerBlocksForNotifications;

@end
