@class NSString;

@interface RTKeychainManager : NSObject <RTDiagnosticProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)sendDiagnosticsToURL:(id)a0 handler:(id /* block */)a1;
- (id)encryptionKeyWithSize:(long long)a0 identifier:(id)a1 error:(id *)a2;
- (BOOL)removeEncryptionKeyWithIdentifier:(id)a0 error:(id *)a1;
- (id)createSymmetricKeyWithSize:(long long)a0 identifier:(id)a1 storeInKeychain:(BOOL)a2 error:(id *)a3;
- (id)_keySpecifierWithBitSize:(long long)a0;
- (id)_randomKeyWithSpecifier:(id)a0 error:(id *)a1;
- (BOOL)_setKey:(id)a0 forIdentifier:(id)a1 error:(id *)a2;
- (BOOL)_removeItemWithIdentifier:(id)a0 error:(id *)a1;
- (id)_keyForIdentifier:(id)a0 error:(id *)a1;
- (BOOL)_updateKey:(id)a0 forIdentifier:(id)a1 error:(id *)a2;
- (BOOL)updateKeyWithIdentifier:(id)a0 keyData:(id)a1 keySize:(long long)a2 error:(id *)a3;
- (int)_copySecItemMatchingQuery:(id)a0 result:(id *)a1;
- (int)_addSecItemWithAttributes:(id)a0 result:(id *)a1;
- (int)_deleteSecItemMatchingQuery:(id)a0;
- (int)_updateSecItemMatchingQuery:(id)a0 attributes:(id)a1;

@end
