@interface CKDPCSSQLCacheTableGroup : CKSQLiteTableGroup

+ (id)groupIdentifierForContainerID:(id)a0 accountOverrideInfo:(id)a1;
+ (BOOL)rebootShouldClearData;
+ (id)cacheTableGroupInDatabase:(id)a0 containerID:(id)a1 accountOverrideInfo:(id)a2;

- (id)createTables;
- (id)cacheTable;

@end
