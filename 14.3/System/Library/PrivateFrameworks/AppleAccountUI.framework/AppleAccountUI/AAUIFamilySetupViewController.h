@class ACAccountStore, NSString, NSArray, UINavigationItem, AAGrandSlamSigner, ACAccount, RemoteUIController, NSMutableURLRequest, UIActivityIndicatorView;
@protocol AAUIFamilySetupDelegate;

@interface AAUIFamilySetupViewController : AAUIBleachedNavigationController <FAFamilySetupPageDelegate, RemoteUIControllerDelegate> {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    RemoteUIController *_remoteUIController;
    NSMutableURLRequest *_startRemoteUIRequest;
    NSMutableURLRequest *_currentRemoteUIRequest;
    BOOL _isShowingSpinner;
    UIActivityIndicatorView *_spinnerView;
    NSArray *_originalRightBarButtonItems;
    UINavigationItem *_navigationItemShowingSpinner;
}

@property (weak, nonatomic) id<AAUIFamilySetupDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)remoteUIControllerDidDismiss:(id)a0;
- (void)remoteUIController:(id)a0 didReceiveHTTPResponse:(id)a1;
- (BOOL)shouldAutorotate;
- (void)remoteUIController:(id)a0 willPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (BOOL)remoteUIController:(id)a0 shouldLoadRequest:(id)a1 redirectResponse:(id)a2;
- (void)viewDidLoad;
- (id)initWithAccount:(id)a0 store:(id)a1;
- (id)initWithAccount:(id)a0 grandSlamSigner:(id)a1 familyEligibilityResponse:(id)a2;
- (id)_initWithAccount:(id)a0 grandSlamSigner:(id)a1 rootViewController:(id)a2;
- (id)_createCloseButton;
- (BOOL)_isRunningInSettings;
- (id)_urlForLaunchingSettings;
- (void)_loadRemoteUIPages;
- (void)_closeButtonWasTapped:(id)a0;
- (void)familySetupPage:(id)a0 didCompleteWithSuccess:(BOOL)a1;
- (void)_showActivitySpinnerInNavigationBar;
- (void)_sendUserToiTunesSettings;
- (void)_remoteUIDidCancel;
- (void)_hideActivitySpinnerInNavigationBar;
- (id)initTrimmedFlowWithAccount:(id)a0 grandSlamSigner:(id)a1;

@end
