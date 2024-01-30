@class NSOperation, NSArray, VSIdentityProvider, VSAccountChannelsCenter, NSOperationQueue, VSPersistentStorage, VSAppSettingsViewModel, UIViewController, VSAccountChannels, VSRestrictionsCenter;

@interface VSAppSettingsFacade : NSObject

@property (copy, nonatomic) NSArray *appSections;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSOperation *currentPresentationOperation;
@property (retain, nonatomic) VSPersistentStorage *storage;
@property (retain, nonatomic) VSRestrictionsCenter *restrictionsCenter;
@property (retain, nonatomic) VSAccountChannels *accountChannels;
@property (copy, nonatomic) NSArray *knownAppBundles;
@property (copy, nonatomic) NSArray *unredeemedVouchers;
@property (nonatomic) BOOL needsUpdateApps;
@property (nonatomic) int registrationToken;
@property (retain, nonatomic) VSAppSettingsViewModel *mvpdAppSettingsViewModel;
@property (nonatomic) BOOL needsPresentationOfMVPDAppInstallPromptIfAvailable;
@property (retain, nonatomic) UIViewController *mvpdInstallPromptPresentingViewController;
@property (retain, nonatomic) Class channelAppsOperationClass;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;
@property (nonatomic) BOOL hasChannelApps;
@property (retain, nonatomic) VSAccountChannelsCenter *accountChannelsCenter;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_setNeedsUpdateApps;
- (void)_updateApps;
- (id)initWithStorage:(id)a0 restrictionsCenter:(id)a1;
- (id)initWithStorage:(id)a0 restrictionsCenter:(id)a1 accountChannelsCenter:(id)a2 channelAppsOperationClass:(Class)a3;
- (void)presentMVPDAppInstallPromptFromViewController:(id)a0;
- (BOOL)shouldShowMVPDAppInstallPrompt;
- (BOOL)shouldShowMVPDAppInstallPromptFromViewController:(id)a0;
- (id)viewModelsForAppDescriptions:(id)a0 bundleByBundleID:(id)a1 vouchersForProvider:(id)a2 restrictionsCenter:(id)a3 privacyFacade:(id)a4;
- (id)viewModelsForAvailableAppDescriptions:(id)a0 subscribedAppDescriptions:(id)a1 andNonChannelAppDescriptions:(id)a2;

@end
