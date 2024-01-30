@interface CKDThrottleTableGroup : CKSQLiteTableGroup

+ (BOOL)rebootShouldClearData;
+ (id)groupName;

- (id)createTables;

@end
