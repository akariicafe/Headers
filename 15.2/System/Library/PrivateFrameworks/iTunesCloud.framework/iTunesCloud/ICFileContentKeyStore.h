@class NSString;

@interface ICFileContentKeyStore : NSObject <ICContentKeyStoreProtocol> {
    NSString *_filePath;
}

- (id)removeAllKeys;
- (id)initWithPath:(id)a0;
- (void)enumerateKeysUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)containsKeyForIdentifier:(id)a0 error:(id *)a1;
- (id)loadKeyForIdentifier:(id)a0 renewalDate:(id *)a1 error:(id *)a2;
- (id)saveKey:(id)a0 forIdentifier:(id)a1 withRenewalDate:(id)a2;
- (id)incrementFailureCountForKeyWithIdentifier:(id)a0;
- (id)removeKeyForIdentifier:(id)a0;
- (id)_keyEntryForIdentifier:(id)a0 error:(id *)a1;
- (id)_saveKeyEntry:(id)a0;
- (id)_filePathForKeyIdentifier:(id)a0;

@end
