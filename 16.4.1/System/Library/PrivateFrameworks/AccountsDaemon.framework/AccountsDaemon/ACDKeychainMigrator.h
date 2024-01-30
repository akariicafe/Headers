@class ACAccountStore;

@interface ACDKeychainMigrator : NSObject {
    ACAccountStore *_accountStore;
}

+ (id)sharedInstance;

- (id)_keychainItemFromAttributes:(id)a0;
- (id)keychainItemsForAccounts:(id)a0;
- (void)_validateKeychainItemClass:(id)a0;
- (void)migrateAllKeychainItems;
- (id)_keychainItemFromAttributesArray:(id)a0;
- (void)_migrateUUIDKeychainItems:(id)a0;
- (id)allKeychainItems;
- (id)init;
- (BOOL)migrateKeychainItem:(id)a0 toKeybag:(BOOL)a1;
- (id)_keychainItemsForAccount:(id)a0 accountTypeIdentifiers:(id)a1;
- (void).cxx_destruct;

@end
