@class NSError, NSString, VSIdentityProvider, VSAccountStore, NSOperationQueue, VSPreferences, VSRemoteNotifier, NSObject;
@protocol OS_dispatch_queue;

@interface VSIdentityProviderInfoCenter : NSObject <VSRemoteNotifierDelegate>

@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSAccountStore *accountStore;
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

- (id)init;
- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (void).cxx_destruct;
- (void)_accountStoreDidChange;
- (void)dealloc;
- (void)_refresh:(id /* block */)a0;
- (void)_postdentityProviderInfoDidChangeNotification;
- (void)fetchIdentityProviderAppBundleIdFromDeveloperSettings:(id /* block */)a0;
- (void)fetchIdentityProviderAppBundleIdFromStore:(id)a0 preferredAppID:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchAccountAndIdentityProvider:(id /* block */)a0;
- (void)_developerSettingsDidChange;
- (void)enqueueInfoQueryWithCompletion:(id /* block */)a0;
- (void)enqueueSetTopBoxProfileProviderQueryWithCompletion:(id /* block */)a0;
- (void)enqueueIdentityProviderAppsQueryWithCompletion:(id /* block */)a0;
- (id)_value:(id)a0 withDefault:(id)a1;

@end
