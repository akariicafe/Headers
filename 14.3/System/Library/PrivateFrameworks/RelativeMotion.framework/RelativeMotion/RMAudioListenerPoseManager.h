@class NSDictionary, RMConnectionClient, NSObject;
@protocol OS_dispatch_queue;

@interface RMAudioListenerPoseManager : NSObject {
    BOOL _isReceivingRelatveData;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _relativeDataCallback;
    RMConnectionClient *_connectionClient;
}

@property (retain, nonatomic) NSDictionary *tempestOptions;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_startReceivingAudioListenerPoseUpdatesInternal:(id /* block */)a0;
- (void)stopReceivingAudioListenerPoseUpdates;
- (void)startReceivingAudioListenerPoseUpdates:(id /* block */)a0;

@end
