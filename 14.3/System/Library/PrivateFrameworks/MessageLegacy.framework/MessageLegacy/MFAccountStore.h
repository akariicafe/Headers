@class ACAccountStore;

@interface MFAccountStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accountStoreLock;
    ACAccountStore *_accountStore;
}

@property (readonly) ACAccountStore *persistentStore;

+ (BOOL)_shouldUpdateAccountsInPlace;
+ (id)_accountWithAccountClass:(Class)a0 persistentAccount:(id)a1 useExisting:(BOOL)a2;
+ (id)sharedAccountStore;

- (void)setPersistentStore:(id)a0;
- (id)init;
- (id)existingAccountWithPersistentAccount:(id)a0;
- (id)newPersistentAccountWithAccountTypeIdentifier:(id)a0;
- (id)supportedDataclassesWithAccountTypeIdentifier:(id)a0;
- (void)savePersistentAccountWithAccount:(id)a0;
- (void)removePersistentAccountWithAccount:(id)a0;
- (void)_accountsStoreChanged:(id)a0;
- (id)_accountWithPersistentAccount:(id)a0 useExisting:(BOOL)a1;
- (void)dealloc;
- (id)accountsWithTypeIdentifiers:(id)a0 error:(id *)a1;

@end
