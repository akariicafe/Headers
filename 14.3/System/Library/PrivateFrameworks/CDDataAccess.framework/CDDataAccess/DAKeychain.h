@interface DAKeychain : NSObject

+ (id)sharedKeychain;

- (void)migratePasswordForAccount:(id)a0;
- (int)_daKeychainAccessibilityForSecAccessibility:(void *)a0;
- (BOOL)canAccessCredentialsWithAccessibility:(int)a0;
- (struct __CFDictionary { } *)_DACopyMutableQueryForAccountWithPersistentUUID:(id)a0;
- (void *)_secAccessibilityForDAKeychainAccessibility:(int)a0;
- (struct __CFDictionary { } *)_DACopyMutableAttributesForAccountWithPersistentUUID:(id)a0 accessibility:(int)a1;
- (BOOL)removePasswordForAccount:(id)a0 withPersistentUUID:(id)a1;
- (id)guessPasswordForURL:(id)a0;
- (id)passwordForAccountWithPersistentUUID:(id)a0 expectedAccessibility:(int)a1 shouldSetAccessibility:(BOOL)a2 passwordExpected:(BOOL)a3;
- (void)removeKeychainInformationsForURL:(id)a0;
- (BOOL)setPassword:(id)a0 forAccount:(id)a1 withPersistentUUID:(id)a2 withAccessibility:(int)a3;
- (id)loadKeychainInformationsForURL:(id)a0;
- (BOOL)saveKeychainInformationsForURL:(id)a0 andPassword:(id)a1 withAccessibility:(int)a2;

@end
