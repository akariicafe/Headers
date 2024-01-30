@class NSHTTPURLResponse, NSString, UINavigationController, AKAppleIDServerUIContextController, AKAppleIDAuthenticationInAppContext, UIViewController, RUIObjectModel, AAUICDPStingrayRemoteUIController;

@interface AKInAppAuthenticationRemoteUIDelegate : NSObject <RemoteUIControllerDelegate> {
    AKAppleIDAuthenticationInAppContext *_context;
    UIViewController *_topViewControllerOnLoadStart;
    NSHTTPURLResponse *_deferredResponse;
    BOOL _navBarButtonOverridden;
}

@property (retain, nonatomic) AKAppleIDServerUIContextController *serverUIContextController;
@property (readonly, nonatomic) RUIObjectModel *currentRemoteOM;
@property (readonly, nonatomic) UINavigationController *modalRemoteUINavController;
@property (nonatomic) BOOL overrideFirstActionSignal;
@property (retain, nonatomic) AAUICDPStingrayRemoteUIController *stingrayController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteUIController:(id)a0 shouldLoadRequest:(id)a1 redirectResponse:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)remoteUIController:(id)a0 didFinishLoadWithError:(id)a1 forRequest:(id)a2;
- (void)remoteUIController:(id)a0 didReceiveHTTPResponse:(id)a1 forRequest:(id)a2;
- (void)remoteUIController:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)remoteUIController:(id)a0 willPresentModalNavigationController:(id)a1;
- (void)remoteUIController:(id)a0 didDismissModalNavigationWithObjectModels:(id)a1;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (id)initWithContext:(id)a0;
- (void)_showAlert:(id)a0;
- (void)remoteUIController:(id)a0 willPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (void).cxx_destruct;
- (void)clearObjectModel;
- (BOOL)_isDeferrableFinalResponseHarvested;
- (void)_processAndHandleConflictErrorFromResponse:(id)a0;
- (void)_handleBackButtonTap:(id)a0;

@end
