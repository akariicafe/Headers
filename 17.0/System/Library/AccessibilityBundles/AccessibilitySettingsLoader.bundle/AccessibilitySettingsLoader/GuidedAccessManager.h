@interface GuidedAccessManager : NSObject

@property (retain, nonatomic) id notificationToken;

+ (void)initializeMonitoring;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_isValidClientApp;
- (void)_loadClientBundle;
- (void)_loadRequiredBundles;
- (void)_loadSpringboardServerBundle;
- (BOOL)applicationIsEntitledForUnmanagedASAM;
- (void)loadRequiredBundlesForUnmanagedASAM;

@end
