@class NSSQLUpdateColumnsIntermediate;

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate {
    NSSQLUpdateColumnsIntermediate *_updateColumns;
}

- (id)initWithEntity:(id)a0 alias:(id)a1 inScope:(id)a2;
- (id)generateSQLStringInContext:(id)a0;
- (void)dealloc;
- (BOOL)isUpdateScoped;

@end
