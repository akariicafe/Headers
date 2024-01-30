@interface IMDWhitetailToCoralDowngradeHelper : IMDDatabaseDowngradeHelper

+ (id)arrayOfCreateIndexesSQL;
+ (id)arrayOfCreateTablesSQL;
+ (id)arrayOfCreateTriggersSQL;
+ (id)arrayOfTableNames;

- (id)initWithPath:(id)a0;

@end
