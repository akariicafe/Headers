@interface CKSQLiteKeyValueStore : CKSQLiteTable

+ (Class)entryClass;
+ (id)dbProperties;

- (id)wakeFromDatabase;
- (id)UUIDValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2 error:(id *)a3;
- (id)dataValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2 error:(id *)a3;
- (id)dateValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2 error:(id *)a3;
- (id)numberValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2 error:(id *)a3;
- (id)objectValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2 error:(id *)a3;
- (void)purgeOrphanedKeys;
- (void)purgeOrphanedTableGroupKeys;
- (void)purgeOrphanedTableKeys;
- (id)setDataValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (id)setDateValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (id)setNumberValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (id)setObjectValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (id)setStringValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (id)setUUIDValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (id)stringValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2 error:(id *)a3;

@end
