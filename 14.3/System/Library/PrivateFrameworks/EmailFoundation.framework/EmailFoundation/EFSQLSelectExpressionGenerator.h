@class NSArray, NSSet;

@interface EFSQLSelectExpressionGenerator : NSObject

@property (readonly, nonatomic) NSArray *columnExpressionGenerators;
@property (readonly, nonatomic) NSSet *tableExpressionGenerators;

- (void).cxx_destruct;
- (BOOL)isEqualToSelectExpressionGenerator:(id)a0;
- (id)initExpressionGeneratorWithColumns:(id)a0 tables:(id)a1;
- (id)selectExpression;
- (id)columnAliases;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
