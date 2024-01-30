@class NPSManager, NSArray, NPSDomainAccessor, NSMutableSet, NSNumber;
@protocol NMCUIAccountDataSource;

@interface NMCUICloudNotificationAccountDataSource : NSObject

@property (retain, nonatomic) id<NMCUIAccountDataSource> accountDataSource;
@property (retain, nonatomic) NSMutableSet *pendingAccountIds;
@property (retain, nonatomic) NPSDomainAccessor *domainAccessor;
@property (retain, nonatomic) NPSManager *syncManager;
@property (retain, nonatomic) NSNumber *deviceSupportsPCC;
@property (nonatomic) BOOL cloudNotificationsEnabled;
@property (nonatomic) BOOL showsAlerts;
@property (retain) NSArray *notificationSubsections;

+ (BOOL)accountHasCredentials:(id)a0;
+ (BOOL)accountSupportsNotifications:(id)a0;
+ (BOOL)accountSupportsNotifications:(id)a0 forceEnabled:(BOOL)a1;

- (id)accounts;
- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_handleDidUnpair;
- (void)_setValue:(id)a0 forKey:(id)a1;
- (id)_getValueForKey:(id)a0;
- (void).cxx_destruct;
- (void)_displayFailedToSaveAlertShouldDismiss:(BOOL)a0 viewController:(id)a1;
- (id)_emailAddressFromJWTToken:(id)a0 error:(id *)a1;
- (id)_ensureValidBase64String:(id)a0;
- (void)_handlePairedDeviceChanged;
- (BOOL)accountIsPending:(id)a0;
- (BOOL)accountShowsAlerts:(id)a0;
- (id)accountsRequiringCredentials;
- (BOOL)deviceSupportsCloudNotifications;
- (void)handleAccountAuthenication:(id)a0 viewController:(id)a1 stateUpdateHandler:(id /* block */)a2;
- (id)initWithAccountDataSource:(id)a0;
- (void)saveCredential:(id)a0 emailAddress:(id)a1 forAccount:(id)a2 completion:(id /* block */)a3;
- (void)savePCCCredentialForAccount:(id)a0 identity:(id)a1 viewController:(id)a2 stateUpdateHandler:(id /* block */)a3;
- (BOOL)shouldPromptToEnableNotifications:(id)a0;

@end
