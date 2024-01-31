@class NSSQLUpdateColumnsIntermediate;

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate {
    NSSQLUpdateColumnsIntermediate *_updateColumns;
}

- (BOOL)isUpdateScoped;
- (void)dealloc;
- (id)initWithEntity:(id)a0 alias:(id)a1 inScope:(id)a2;
- (id)generateSQLStringInContext:(id)a0;

@end
