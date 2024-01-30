@class AFAnalytics, NSString, NSUUID, NSMutableArray, SVXActivationContext;
@protocol SVXClientActivationServiceDelegate, SVXPerforming, SVXClientServiceProviding;

@interface SVXClientActivationService : NSObject <SVXClientActivationServicing, SVXClientServiceConsuming> {
    id<SVXPerforming> _performer;
    id<SVXClientServiceProviding> _clientServiceProvider;
    AFAnalytics *_analytics;
    NSMutableArray *_queuedButtonEvents;
    SVXActivationContext *_lastButtonActivationContext;
    NSUUID *_preheatToken;
}

@property (weak, nonatomic) id<SVXClientActivationServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleButtonEvent:(id)a0;
- (void).cxx_destruct;
- (void)activateWithSystemEvent:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)prewarmForSystemEvent:(id)a0 completion:(id /* block */)a1;
- (void)_prewarmWithContext:(id)a0 completion:(id /* block */)a1;
- (void)handleDidDeactivateWithContext:(id)a0;
- (void)_activateWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_deactivateWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_enqueueButtonEvent:(id)a0;
- (void)_performManualEndpointing;
- (void)_preheatTimerArrivedWithToken:(id)a0;
- (void)_preheatWithActivationSource:(long long)a0;
- (void)_processLastButtonActivationContext;
- (BOOL)_requestPermissionToActivateWithContext:(id)a0;
- (void)_startPreheatTimer;
- (void)_stopPreheatTimer;
- (void)_transitToAutomaticEndpointingWithTimestamp:(unsigned long long)a0;
- (void)activateWithButtonEvent:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)activateWithText:(id)a0 completion:(id /* block */)a1;
- (void)activateWithUserInfo:(id)a0 completion:(id /* block */)a1;
- (void)clientServiceDidChange:(BOOL)a0;
- (void)deactivateWithButtonEvent:(id)a0 userInfo:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)deactivateWithUserInfo:(id)a0 completion:(id /* block */)a1;
- (void)deactivateWithUserInfo:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)enqueueButtonEvent:(id)a0;
- (void)handleDidActivateWithContext:(id)a0;
- (void)handleDidNotActivateWithContext:(id)a0 error:(id)a1;
- (void)handleRequestPermissionToActivateWithContext:(id)a0 completion:(id /* block */)a1;
- (void)handleWillActivateWithContext:(id)a0;
- (void)handleWillDeactivateWithContext:(id)a0;
- (id)initWithClientServiceProvider:(id)a0 analytics:(id)a1 performer:(id)a2;

@end
