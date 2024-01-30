@class NSString;

@interface ICFileContentKeyStore : NSObject <ICContentKeyStoreProtocol>

@property (readonly, copy, nonatomic) NSString *filePath;

- (id)initWithPath:(id)a0;
- (id)removeAllKeys;
- (void).cxx_destruct;
- (void)enumerateKeyEntriesUsingBlock:(id /* block */)a0;
- (id)saveKeyEntry:(id)a0;
- (BOOL)containsKeyForIdentifier:(id)a0 error:(id *)a1;
- (id)_filePathForKeyIdentifier:(id)a0;
- (id)_keyEntryForIdentifier:(id)a0 error:(id *)a1;
- (id)incrementFailureCountForKeyWithIdentifier:(id)a0;
- (id)loadKeyForIdentifier:(id)a0 error:(id *)a1;
- (id)removeKeyForIdentifier:(id)a0;
- (id)saveKey:(id)a0 forIdentifier:(id)a1 adamID:(id)a2 withRenewalDate:(id)a3 accountDSID:(id)a4 keyServerProtocolType:(long long)a5;

@end
