@interface GuidedAccessManager : NSObject

@property (retain, nonatomic) id notificationToken;

+ (void)initializeMonitoring;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_loadRequiredBundles;
- (BOOL)applicationIsEntitledForUnmanagedASAM;
- (void)loadRequiredBundlesForUnmanagedASAM;
- (BOOL)_isValidClientApp;
- (void)_loadSpringboardServerBundle;
- (void)_loadClientBundle;

@end
