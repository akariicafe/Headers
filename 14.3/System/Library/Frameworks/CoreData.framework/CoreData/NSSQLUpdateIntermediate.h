@class NSSQLUpdateColumnsIntermediate;

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate {
    NSSQLUpdateColumnsIntermediate *_updateColumns;
}

- (id)initWithEntity:(id)a0 alias:(id)a1 inScope:(id)a2;
- (void)setUpdateColumnsIntermediate:(id)a0;
- (id)updateColumnsIntermediate;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (BOOL)isUpdateScoped;

@end
