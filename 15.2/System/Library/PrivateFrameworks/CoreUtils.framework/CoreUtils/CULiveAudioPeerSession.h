@class NSObject, RPCompanionLinkClient, RPCompanionLinkDevice;
@protocol OS_dispatch_queue;

@interface CULiveAudioPeerSession : NSObject <CUActivatable> {
    RPCompanionLinkClient *_clinkClient;
}

@property (retain, nonatomic) RPCompanionLinkDevice *destinationDevice;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)sendAudioDataEvent:(id)a0;
- (void)_activateCompleted:(id /* block */)a0;

@end
