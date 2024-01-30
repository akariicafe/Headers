@interface CKVDatabaseSelect : CKVDatabaseCommand

+ (id)builderWithTableName:(id)a0;

- (void)replaceOffset:(unsigned long long)a0;
- (void)addLimit:(unsigned long long)a0 offset:(unsigned long long)a1;

@end
