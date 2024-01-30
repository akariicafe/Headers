@class NSMutableArray;

@interface CKVDatabaseUpdateBuilder : CKVDatabaseCommandBuilder {
    NSMutableArray *_columnNames;
    NSMutableArray *_columnValues;
}

- (id)build;
- (void).cxx_destruct;
- (void)setCommandCriterion:(id)a0;
- (void)setValue:(id)a0 forColumn:(id)a1;
- (id)initWithTableName:(id)a0;

@end
