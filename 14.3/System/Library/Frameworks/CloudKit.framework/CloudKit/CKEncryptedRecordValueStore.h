@interface CKEncryptedRecordValueStore : CKRecordValueStore

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)_validatePlainTextSizeOnEncryptedData:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setCompatibilityModeObjectNoValidate:(id)a0 forKey:(id)a1;

@end
