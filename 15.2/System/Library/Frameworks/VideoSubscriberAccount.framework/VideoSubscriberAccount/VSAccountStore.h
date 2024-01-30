@class NSString, NSArray, VSAccount, VSKeychainEditingContext, NSOperationQueue, VSRemoteNotifier, NSUndoManager;

@interface VSAccountStore : NSObject <VSRemoteNotifierDelegate>

@property (retain) VSAccount *cachedFirstAccount;
@property BOOL needsUpdateCachedFirstAccount;
@property (retain, nonatomic) VSKeychainEditingContext *keychainEditingContext;
@property (retain, nonatomic) NSOperationQueue *keychainQueue;
@property (weak, nonatomic) id changeObserver;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (readonly, copy, nonatomic) NSArray *accounts;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedAccountStore;
+ (Class)accountClass;

- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (void)_sendRemoteNotification;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)firstAccount;
- (BOOL)isFirstAccountLoaded;
- (BOOL)_updateCachedFirstAccount;
- (void)_sendLocalNotification;
- (id)_keychainItemsWithLimit:(unsigned long long)a0;
- (id)_accountForKeychainItem:(id)a0 simulateExpiredToken:(BOOL)a1 developerProviderIDs:(id)a2;
- (void)fetchAccountsWithCompletionHandler:(id /* block */)a0;
- (void)_insertAccount:(id)a0 inContext:(id)a1;
- (id)firstAccountIfLoaded;
- (void)saveAccounts:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removeAccounts:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
