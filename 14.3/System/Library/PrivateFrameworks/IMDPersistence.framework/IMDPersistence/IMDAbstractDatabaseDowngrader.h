@interface IMDAbstractDatabaseDowngrader : IMAbstractDatabaseArchiver

- (BOOL)copyDatabase:(id /* block */)a0;
- (id)createDowngradeHelper;

@end
