@class RemoteUIController, NSString, SUDescriptor, UINavigationController, RUIStyle, UIViewController;

@interface SUSSoftwareUpdateTermsManager : NSObject <RemoteUIControllerDelegate> {
    RemoteUIController *_termsRemoteUI;
    id /* block */ _termsCompletion;
    SUDescriptor *_update;
    BOOL _overrideNextRUIAction;
    BOOL _agreeToCombinedTOSInProgress;
    UINavigationController *_showProgressViewController;
    UIViewController *_hostController;
    UIViewController *_presentedViewController;
}

@property (retain, nonatomic) RUIStyle *serverFlowStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteUIController:(id)a0 willPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (void).cxx_destruct;
- (void)remoteUIController:(id)a0 didFinishLoadWithError:(id)a1 forRequest:(id)a2;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (void)remoteUIControllerDidDismiss:(id)a0;
- (void)_acceptedTermsFromAsset;
- (void)_acceptedTermsVersion:(id)a0;
- (void)_finishTermsWithAcceptance:(BOOL)a0 error:(id)a1;
- (void)_handleAgreeFromObjectModel:(id)a0;
- (void)_loadRemoteUITermsWithCloudAtURL:(id)a0;
- (void)_loadTermsFromUpdateAsset;
- (void)_loadTermsRemoteUIFailureWithError:(id)a0;
- (void)_presentModalController:(id)a0;
- (void)_termsDisagree;
- (void)cancelLoadingTerms:(id)a0;
- (void)presentTermsIfNecessaryForUpdate:(id)a0 overController:(id)a1 showLoadSpinner:(BOOL)a2 completion:(id /* block */)a3;
- (void)showLoadingSpinnerViewController;

@end
