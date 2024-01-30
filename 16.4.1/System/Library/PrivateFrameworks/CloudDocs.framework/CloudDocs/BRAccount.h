@class NSData, NSString;

@interface BRAccount : NSObject {
    NSString *_accountID;
    NSString *_personaID;
}

@property (copy, nonatomic) NSData *perAppAccountIdentifier;

+ (void)startAccountTokenChangeObserverIfNeeded;
+ (BOOL)refreshCurrentLoggedInAccount;
+ (id)currentLoggedInAccountWithError:(id *)a0;
+ (BOOL)refreshCurrentLoggedInAccountWithError:(id *)a0;
+ (BOOL)_refreshCurrentLoggedInAccountForcingRefresh:(BOOL)a0 error:(id *)a1;
+ (id)currentCachedLoggedInAccountWithError:(id *)a0;

- (BOOL)setOptimizeStorageEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)getEvictableSpace:(id *)a0 error:(id *)a1;
- (BOOL)iCloudDesktopSettingsChangedWithAttributes:(id)a0 error:(id *)a1;
- (id)initWithAccountID:(id)a0;
- (void)evictOldDocumentsWithHandler:(id /* block */)a0;
- (id)containerWithPendingChanges;
- (BOOL)hasOptimizeStorageWithError:(id *)a0;
- (id)init;
- (void).cxx_destruct;

@end
