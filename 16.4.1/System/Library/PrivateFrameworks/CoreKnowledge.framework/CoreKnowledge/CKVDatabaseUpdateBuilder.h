@class NSMutableArray;

@interface CKVDatabaseUpdateBuilder : CKVDatabaseCommandBuilder {
    NSMutableArray *_columnNames;
    NSMutableArray *_columnValues;
}

- (id)build;
- (id)initWithTableName:(id)a0;
- (void)setCommandCriterion:(id)a0;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forColumn:(id)a1;

@end
