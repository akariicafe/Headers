@class AAUIGenericTermsRemoteUI, NSArray, NSString, PSCloudStorageOffersManager;

@interface PXCloudPhotoWelcomeViewController : OBWelcomeController <PSCloudStorageOffersManagerDelegate, AAUIGenericTermsRemoteUIDelegate, PXCloudPhotoWelcomeNavigationControllerDismissDelegate>

@property (retain, nonatomic, setter=_setButtons:) NSArray *_buttons;
@property (retain, nonatomic, setter=_setOffersManager:) PSCloudStorageOffersManager *_offersManager;
@property (retain, nonatomic, setter=_setTermsManager:) AAUIGenericTermsRemoteUI *_termsManager;
@property (nonatomic, setter=_setRequireStorageUpgrade:) BOOL _requireStorageUpgrade;
@property (nonatomic, setter=_setEnableOnAppear:) BOOL _enableOnAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_applicationWillEnterForeground:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (void)genericTermsRemoteUI:(id)a0 didFinishWithSuccess:(BOOL)a1;
- (void)manager:(id)a0 loadDidFailWithError:(id)a1;
- (void)manager:(id)a0 willPresentViewController:(id)a1;
- (void)managerDidCancel:(id)a0;
- (void)_cloudPhotoWelcomeViewGoButtonTapped:(id)a0;
- (void)_cloudPhotoWelcomeViewLearnMoreTapped:(id)a0;
- (void)_cloudPhotoWelcomeViewNotNowButtonTapped:(id)a0;
- (void)_continueWithoutStoragePurchase:(id)a0;
- (void)_enableCloudPhotoLibrary;
- (void)_enableCloudPhotoLibraryWithoutCheck;
- (void)_handleEnableError:(id)a0;
- (void)_setButtonsEnabled:(BOOL)a0;
- (void)_updateCurrentActivity;
- (id)initWithDefaultTitle;
- (void)navigationControllerDidDismissViewController:(id)a0;

@end
