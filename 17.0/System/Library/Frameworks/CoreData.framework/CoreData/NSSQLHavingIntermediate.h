@class NSSQLWhereIntermediate;

@interface NSSQLHavingIntermediate : NSSQLIntermediate {
    NSSQLWhereIntermediate *_whereClause;
}

- (void)dealloc;
- (id)initWithPredicate:(id)a0 inScope:(id)a1 inContext:(id)a2;
- (id)generateSQLStringInContext:(id)a0;
- (BOOL)isHavingScoped;

@end
