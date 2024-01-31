@class NSDictionary;

@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate

@property (retain, nonatomic) NSDictionary *propertiesToUpdate;

- (id)initWithPropertiesToUpdate:(id)a0 inScope:(id)a1;
- (void)dealloc;
- (id)governingAliasForKeypathExpression:(id)a0;
- (id)generateSQLStringInContext:(id)a0;
- (BOOL)isUpdateColumnsScoped;

@end
