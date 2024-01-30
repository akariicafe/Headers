@class VSAccountSerializationCenter, NSString, NSArray, VSDevice, NSOperationQueue, VSRemoteNotifier, VSPersistentStorage, VSAppDescription, VSPreferences, VSIdentityProviderRequestManager;
@protocol VSSetupFlowControllerDelegate;

@interface VSSetupFlowController : NSObject <VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderViewControllerDelegate, VSRemoteNotifierDelegate, VSSupportedAppsViewControllerDelegate, VSIdentityProviderRequestManagerDelegate>

@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) VSPersistentStorage *storage;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (copy, nonatomic) NSArray *freeOnBoardingBundleIDs;
@property (nonatomic, getter=isSigningIn) BOOL signingIn;
@property (retain, nonatomic) VSAppDescription *appDescription;
@property (retain, nonatomic) NSString *providerAccountUsername;
@property (nonatomic) BOOL isInSTBMode;
@property (retain, nonatomic) VSIdentityProviderRequestManager *requestManager;
@property (nonatomic) BOOL notifyDelegateFromActivation;
@property (copy, nonatomic) id /* block */ goingBackActivationCompletionBlock;
@property (retain, nonatomic) VSDevice *currentDevice;
@property (retain, nonatomic) VSAccountSerializationCenter *serializationCenter;
@property (retain, nonatomic) NSArray *supportedApps;
@property (weak, nonatomic) id<VSSetupFlowControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (void)notNow;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_didStartLoading;
- (void)_dismissViewController:(id)a0 completion:(id /* block */)a1;
- (void)_presentError:(id)a0;
- (void)dismissIdentityProviderViewController:(id)a0;
- (void)identityProviderViewControllerDidCancel:(id)a0;
- (void)identityProviderViewController:(id)a0 didFinishRequest:(id)a1 withResult:(id)a2;
- (void)identityProviderViewController:(id)a0 didAuthenticateAccount:(id)a1 forRequest:(id)a2;
- (void)identityProviderRequestManager:(id)a0 finishedRequest:(id)a1 withResult:(id)a2;
- (void)_appleAccountDidChange:(id)a0;
- (void)_startLoadingAfterOfferingOptions:(BOOL)a0 endingUndoGrouping:(BOOL)a1 arrivedViaNotNowButton:(BOOL)a2 arrivedAfterSigningIn:(BOOL)a3 goingBack:(BOOL)a4;
- (void)_presentViewController:(id)a0 completion:(id /* block */)a1;
- (void)_finishAfterOfferingOptions:(BOOL)a0 endingUndoGrouping:(BOOL)a1;
- (void)_requestAccessWithViewController:(id)a0;
- (void)startSilentSigningInForSTBFromActivation:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_offerAuthenticationForSTBProvider:(id)a0 msoAppDescription:(id)a1 providerAccountUsername:(id)a2;
- (void)_offerAuthenticationForProvider:(id)a0 withSupportedAppsButton:(BOOL)a1 msoAppDescription:(id)a2;
- (void)_offerAuthenticationWithSupportedAppsButton:(BOOL)a0;
- (void)_obtainConsentForBundleIDs:(id)a0 vouchers:(id)a1 withAppleAccountName:(id)a2 identityProvider:(id)a3 endingUndoGrouping:(BOOL)a4 arrivedViaNotNowButton:(BOOL)a5 arrivedAfterSigningIn:(BOOL)a6 goingBack:(BOOL)a7;
- (void)_pickProviderWithViewController:(id)a0;
- (void)markSTBProviderAppForInstallation:(id)a0 withAppPlacementPosition:(id)a1;
- (void)finishSTBSuccessFlowForProvider:(id)a0;
- (void)notNowWithIdentityProvider:(id)a0;
- (void)signOutForNotNowFlowWithIdentityProvider:(id)a0;
- (void)forceSignOutWithAccount:(id)a0;
- (id)_getProviderWithUserTokenFromAllProviders:(id)a0;
- (void)_offerFreeOnBoardingIfNeededAfterOfferingOptions:(BOOL)a0 endingUndoGrouping:(BOOL)a1 arrivedViaNotNowButton:(BOOL)a2 arrivedAfterSigningIn:(BOOL)a3 goingBack:(BOOL)a4;
- (void)performDismissalOfIdentityProviderViewController:(id)a0;
- (void)identityProviderPickerViewController:(id)a0 didPickIdentityProvider:(id)a1;
- (void)supportedAppsViewControllerDidFinish:(id)a0;
- (void)startLoadingWhenGoingBack:(BOOL)a0 serializedAccountDataToImport:(id)a1;
- (void)startSigningIn;
- (void)startSigningInForIdentityProvider:(id)a0;
- (void)showSupportedApps;

@end
