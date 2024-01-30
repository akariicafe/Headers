@class NSSQLWhereIntermediate;

@interface NSSQLHavingIntermediate : NSSQLIntermediate {
    NSSQLWhereIntermediate *_whereClause;
}

- (id)initWithPredicate:(id)a0 inScope:(id)a1 inContext:(id)a2;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (BOOL)isHavingScoped;

@end
