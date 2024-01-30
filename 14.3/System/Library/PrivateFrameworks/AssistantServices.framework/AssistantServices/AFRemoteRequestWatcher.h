@class NSString, AFSiriActivationListener, NSObject;
@protocol OS_dispatch_queue;

@interface AFRemoteRequestWatcher : NSObject <AFSiriActivationListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _prewarmHandler;
    id /* block */ _requestHandler;
    id /* block */ _dismissalHandler;
    id /* block */ _intentHandler;
    id /* block */ _intentForwardingActionHandler;
    int _speechRequestToken;
    id /* block */ _speechRequestHandler;
    AFSiriActivationListener *_siriActivationListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setupRequestListener;
- (void)_dispatchSpeechRequestOptions:(id)a0;
- (void)_setupSpeechRequestListener;
- (void)siriActivationListener:(id)a0 handleIntent:(id)a1 inBackgroundAppWithBundleId:(id)a2 reply:(id /* block */)a3;
- (void)setIntentForwardingActionHandler:(id /* block */)a0;
- (void)siriActivationListener:(id)a0 handleIntentForwardingAction:(id)a1 inBackgroundApplicationWithBundleIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)setNewRequestHandler:(id /* block */)a0;
- (void)setIntentHandler:(id /* block */)a0;
- (void)siriActivationListener:(id)a0 prewarmWithRequestInfo:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)siriActivationListener:(id)a0 activateWithRequestInfo:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)setPrewarmHandler:(id /* block */)a0;
- (void)siriActivationListener:(id)a0 deactivateForReason:(long long)a1 options:(unsigned long long)a2 context:(id)a3 completion:(id /* block */)a4;
- (void)setNewSpeechRequestHandler:(id /* block */)a0;
- (void)setDismissalHandler:(id /* block */)a0;
- (void)setRequestHandler:(id /* block */)a0;

@end
