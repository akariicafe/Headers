@interface IMDWhitetailToCoralDowngradeHelper : IMDDatabaseDowngradeHelper

+ (id)arrayOfTableNames;
+ (id)arrayOfCreateTablesSQL;
+ (id)arrayOfCreateIndexesSQL;
+ (id)arrayOfCreateTriggersSQL;

- (id)initWithPath:(id)a0;

@end
