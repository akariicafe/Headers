@class NSOperation, NSArray, VSIdentityProvider, NSOperationQueue, VSPersistentStorage, VSAppSettingsViewModel, UIViewController, VSOptional, VSRestrictionsCenter;

@interface VSAppSettingsFacade : NSObject

@property (copy, nonatomic) NSArray *decidedApps;
@property (copy, nonatomic) NSArray *availableApps;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSOperation *currentPresentationOperation;
@property (retain, nonatomic) VSPersistentStorage *storage;
@property (retain, nonatomic) VSRestrictionsCenter *restrictionsCenter;
@property (copy, nonatomic) VSOptional *identityProviderID;
@property (copy, nonatomic) NSArray *featuredAdamIDs;
@property (copy, nonatomic) NSArray *knownAppBundles;
@property (copy, nonatomic) NSArray *unredeemedVouchers;
@property (nonatomic) BOOL needsUpdateApps;
@property (nonatomic) int registrationToken;
@property (retain, nonatomic) VSAppSettingsViewModel *mvpdAppSettingsViewModel;
@property (nonatomic) BOOL needsPresentationOfMVPDAppInstallPromptIfAvailable;
@property (retain, nonatomic) UIViewController *mvpdInstallPromptPresentingViewController;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;
@property (nonatomic) BOOL hasChannelApps;

- (id)init;
- (id)autorelease;
- (void).cxx_destruct;
- (oneway void)release;
- (void)dealloc;
- (id)retain;
- (id)_fetchOperationForAdamIDs:(id)a0;
- (void)_updateApps;
- (void)_setNeedsUpdateApps;
- (BOOL)shouldShowMVPDAppInstallPrompt;
- (void)presentMVPDAppInstallPromptFromViewController:(id)a0;
- (id)initWithStorage:(id)a0 restrictionsCenter:(id)a1;
- (BOOL)shouldShowMVPDAppInstallPromptFromViewController:(id)a0;

@end
