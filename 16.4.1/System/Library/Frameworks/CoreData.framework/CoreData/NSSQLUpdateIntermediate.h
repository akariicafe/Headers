@class NSSQLUpdateColumnsIntermediate;

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate {
    NSSQLUpdateColumnsIntermediate *_updateColumns;
}

- (BOOL)isUpdateScoped;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (id)initWithEntity:(id)a0 alias:(id)a1 inScope:(id)a2;

@end
