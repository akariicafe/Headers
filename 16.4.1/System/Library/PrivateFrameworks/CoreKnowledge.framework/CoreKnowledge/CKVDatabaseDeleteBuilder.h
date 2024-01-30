@class NSArray;

@interface CKVDatabaseDeleteBuilder : CKVDatabaseCommandBuilder {
    NSArray *_returningColumns;
}

- (id)build;
- (void)setCommandCriterion:(id)a0;
- (void)setReturningColumns:(id)a0;
- (void).cxx_destruct;

@end
