@interface CKSQLiteKeyValueStore : CKSQLiteDatabaseTable

+ (Class)entryClass;
+ (id)dbProperties;

- (id)finishInitializing:(BOOL)a0;
- (id)UUIDValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2;
- (id)dataValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2;
- (id)dateValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2;
- (id)numberValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2;
- (id)objectValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2;
- (void)purgeOrphanedKeys;
- (void)purgeOrphanedTableGroupKeys;
- (void)purgeOrphanedTableKeys;
- (void)setDataValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (void)setDateValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (void)setNumberValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (void)setObjectValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (void)setStringValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (void)setUUIDValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (id)stringValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2;

@end
