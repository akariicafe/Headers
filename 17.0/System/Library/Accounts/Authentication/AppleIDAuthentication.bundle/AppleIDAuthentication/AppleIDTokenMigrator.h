@interface AppleIDTokenMigrator : NSObject

- (id)_mostRecentTokenWithServiceName:(id)a0 matchingAccountNames:(id)a1;
- (struct __CFDictionary { } *)_newKeychainQueryForAllItemsMatchingAccountName:(id)a0 serviceName:(id)a1;
- (id)_potentialServiceNamesForTokenOfAccount:(id)a0;
- (void)_removeKeychainItemForUsernames:(id)a0 services:(id)a1;
- (id)migrateAppleIDBasedCredentialForAccount:(id)a0;

@end
