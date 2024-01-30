@class NSOperationQueue;

@interface VSViewControllerFactory : NSObject

@property (retain, nonatomic) NSOperationQueue *privateQueue;

+ (id)sharedFactory;

- (void).cxx_destruct;
- (id)init;
- (id)loadingViewController;
- (void)viewServiceRemoteViewControllerWithCompletion:(id /* block */)a0;
- (id)authenticationViewControllerForViewModel:(id)a0;
- (id)identityProviderPickerViewControllerWithIdentityProviders:(id)a0;
- (id)viewControllerToConfirmAccountDeletionForIdentityProviderDisplayName:(id)a0 preferredStyle:(long long)a1 confirmationHandler:(id /* block */)a2;
- (id)viewControllerToConfirmDeveloperIdentityProviderDeletionWithConfirmationHandler:(id /* block */)a0;
- (id)viewControllerForUnsupportedProvider:(id)a0 withRequestingAppDisplayName:(id)a1 storage:(id)a2 acknowledgementHandler:(id /* block */)a3;
- (id)viewControllerForAppsSupportedByIdentityProvider:(id)a0 supportedApps:(id)a1 delegate:(id)a2;
- (id)viewControllerForPlaybackActivityReportingFromAppsWithBundleIDs:(id)a0 grantingVouchers:(BOOL)a1 appleAccountName:(id)a2 identityProvider:(id)a3 completionHandler:(id /* block */)a4;

@end
