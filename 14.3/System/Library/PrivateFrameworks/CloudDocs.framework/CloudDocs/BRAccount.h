@class NSData, NSString;

@interface BRAccount : NSObject {
    NSString *_accountID;
}

@property (copy, nonatomic) NSData *perAppAccountIdentifier;

+ (id)currentCachedLoggedInAccountWithError:(id *)a0;
+ (id)currentLoggedInAccountWithError:(id *)a0;
+ (BOOL)refreshCurrentLoggedInAccount;
+ (void)startAccountTokenChangeObserverIfNeeded;
+ (BOOL)_refreshCurrentLoggedInAccountForcingRefresh:(BOOL)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0;
- (BOOL)loginWithError:(id *)a0;
- (BOOL)logoutWithError:(id *)a0;
- (id)containerWithPendingChanges;
- (BOOL)iCloudDesktopSettingsChangedWithAttributes:(id)a0 error:(id *)a1;
- (BOOL)hasOptimizeStorageWithError:(id *)a0;
- (BOOL)setOptimizeStorageEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)getEvictableSpace:(id *)a0 error:(id *)a1;
- (void)evictOldDocumentsWithHandler:(id /* block */)a0;

@end
