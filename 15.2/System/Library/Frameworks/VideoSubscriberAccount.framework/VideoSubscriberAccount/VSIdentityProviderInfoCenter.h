@class NSError, NSString, VSRemoteNotifier, NSOperationQueue, VSIdentityProvider, NSObject, VSPreferences;
@protocol OS_dispatch_queue;

@interface VSIdentityProviderInfoCenter : NSObject <VSRemoteNotifierDelegate>

@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSIdentityProvider *cachedIdentityProvider;
@property (retain, nonatomic) NSString *cachedDesignatedAppBundleIdentifier;
@property (nonatomic) BOOL cachedIsSetTopBox;
@property (nonatomic) BOOL setupCompleted;
@property (nonatomic) BOOL ignoredFirstNotification;
@property (retain, nonatomic) NSError *currentError;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCenter;

- (id)accountStore;
- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (void)_accountStoreDidChange;
- (void).cxx_destruct;
- (id)init;
- (id)device;
- (void)dealloc;
- (void)_refresh:(id /* block */)a0;
- (id)identityProviderFetchAllOperation;
- (void)_postdentityProviderInfoDidChangeNotification;
- (void)fetchIdentityProviderAppBundleIdFromDeveloperSettings:(id /* block */)a0;
- (void)fetchAccountAndIdentityProvider:(id /* block */)a0;
- (void)_developerSettingsDidChange;
- (void)enqueueInfoQueryWithCompletion:(id /* block */)a0;
- (void)enqueueSetTopBoxProfileProviderQueryWithCompletion:(id /* block */)a0;
- (void)enqueueIdentityProviderAppsQueryWithCompletion:(id /* block */)a0;
- (id)_value:(id)a0 withDefault:(id)a1;

@end
