@class NSArray, NSNumber, CKVSQLCommandOrder;

@interface CKVDatabaseSelectBuilder : CKVDatabaseCommandBuilder {
    CKVSQLCommandOrder *_order;
    NSArray *_columns;
    BOOL _count;
    NSNumber *_limit;
    NSNumber *_offset;
}

- (void)setColumns:(id)a0;
- (void)setOffset:(id)a0;
- (void)setLimit:(id)a0;
- (id)build;
- (void)setCount:(BOOL)a0;
- (id)initWithTableName:(id)a0;
- (void)setCommandCriterion:(id)a0;
- (void)setCommandOrder:(id)a0;
- (void).cxx_destruct;

@end
