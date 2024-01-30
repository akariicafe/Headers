@interface GuidedAccessManager : NSObject

@property (retain, nonatomic) id notificationToken;

+ (void)initializeMonitoring;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_loadRequiredBundles;
- (BOOL)applicationIsEntitledForUnmanagedASAM;
- (void)loadRequiredBundlesForUnmanagedASAM;
- (BOOL)_isValidClientApp;
- (void)_loadSpringboardServerBundle;
- (void)_loadClientBundle;

@end
