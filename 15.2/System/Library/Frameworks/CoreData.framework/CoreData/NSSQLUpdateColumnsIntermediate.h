@class NSArray;

@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate {
    NSArray *_propertiesToUpdate;
    NSArray *_valuesToUpdateTo;
}

- (id)initWithProperties:(id)a0 values:(id)a1 inScope:(id)a2;
- (BOOL)isUpdateColumnsScoped;
- (id)governingAliasForKeypathExpression:(id)a0;
- (id)generateSQLStringInContext:(id)a0;
- (void)dealloc;

@end
