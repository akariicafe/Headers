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

- (BOOL)shouldAutorotate;
- (id)initWithAccount:(id)a0 store:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)remoteUIController:(id)a0 shouldLoadRequest:(id)a1 redirectResponse:(id)a2;
- (void)remoteUIController:(id)a0 willPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (void).cxx_destruct;
- (void)remoteUIController:(id)a0 didReceiveHTTPResponse:(id)a1;
- (void)remoteUIControllerDidDismiss:(id)a0;
- (void)_closeButtonWasTapped:(id)a0;
- (id)_createCloseButton;
- (void)_hideActivitySpinnerInNavigationBar;
- (id)_initWithAccount:(id)a0 grandSlamSigner:(id)a1 rootViewController:(id)a2;
- (BOOL)_isRunningInSettings;
- (void)_loadRemoteUIPages;
- (void)_remoteUIDidCancel;
- (void)_sendUserToiTunesSettings;
- (void)_showActivitySpinnerInNavigationBar;
- (id)_urlForLaunchingSettings;
- (void)familySetupPage:(id)a0 didCompleteWithSuccess:(BOOL)a1;
- (id)initTrimmedFlowWithAccount:(id)a0 grandSlamSigner:(id)a1;
- (id)initWithAccount:(id)a0 grandSlamSigner:(id)a1 familyEligibilityResponse:(id)a2;

@end
