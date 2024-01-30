@class NSObject, RPCompanionLinkClient, RPCompanionLinkDevice;
@protocol OS_dispatch_queue;

@interface CULiveAudioPeerSession : NSObject <CUActivatable> {
    RPCompanionLinkClient *_clinkClient;
}

@property (retain, nonatomic) RPCompanionLinkDevice *destinationDevice;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)activateWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_activateCompleted:(id /* block */)a0;
- (void)sendAudioDataEvent:(id)a0;

@end
