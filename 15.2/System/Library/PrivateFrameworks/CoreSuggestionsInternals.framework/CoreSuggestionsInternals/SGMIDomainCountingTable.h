@class NSString, _PASSqliteDatabase, _PASLock;

@interface SGMIDomainCountingTable : NSObject {
    _PASSqliteDatabase *_db;
    NSString *_tableName;
    NSString *_tableNameEscaped;
    _PASLock *_lock;
}

+ (id)_escapedSQLIdentifier:(id)a0;
+ (id)domainForStringTokens:(id)a0;
+ (id)stringTokensFromDomain:(id)a0;
+ (id)domainByAppendingToken:(id)a0 toDomain:(id)a1;
+ (void)createTableNamed:(id)a0 inDatabase:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (void)addColumn:(id)a0;
- (id)currentColumns;
- (id)_currentColumns;
- (id)initWithDatabase:(id)a0 tableName:(id)a1;
- (void)_updateSchemaVersion;
- (BOOL)_hasColumn:(id)a0;
- (id)_readCurrentColumnsUncached;
- (void)_addColumn:(id)a0;
- (void)_mergeColumn:(id)a0 intoColumn:(id)a1;
- (BOOL)_removeColumnFromTotal:(id)a0;
- (void)_dropColumn:(id)a0;
- (BOOL)_zeroColumn:(id)a0;
- (void)_recycleColumn:(id)a0 asColumn:(id)a1;
- (void)_deleteZeroRows;
- (id)_parentDomainsForDomain:(id)a0;
- (void)_commitDomainsAndCounts:(id)a0 toColumn:(id)a1;
- (id)totalsForDomains:(id)a0;
- (long long)totalForDomain:(id)a0;
- (long long)countForColumn:(id)a0 domain:(id)a1;
- (unsigned long long)_domainSegmentCount:(id)a0;
- (id)nonZeroColumnsForDomains:(id)a0 withColumns:(id)a1;
- (id)nonZeroColumnsForDomain:(id)a0 withColumns:(id)a1;
- (id)firstNonZeroColumnForDomains:(id)a0 withColumns:(id)a1;
- (id)firstNonZeroColumnForDomain:(id)a0 withColumns:(id)a1;
- (void)enumerateChildrenOfDomain:(id)a0 depth:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateChildrenOfDomain:(id)a0 greaterThan:(id)a1 depth:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (unsigned long long)numberOfRowsAssociatedWithDomain:(id)a0;
- (BOOL)hasColumn:(id)a0;
- (void)zeroColumn:(id)a0;
- (void)dropColumn:(id)a0;
- (void)recycleColumn:(id)a0 asColumn:(id)a1;
- (void)mergeColumn:(id)a0 intoColumn:(id)a1;
- (void)commitDomainsCountedSet:(id)a0 toColumn:(id)a1;
- (void)commitDomainsAndCounts:(id)a0 toColumn:(id)a1;
- (void)deleteDomainSelection:(id)a0 keepingDomainsPassingTest:(id /* block */)a1;
- (void)deleteDomainSelection:(id)a0;
- (void)deleteDomain:(id)a0;
- (void)deleteAllRows;

@end
