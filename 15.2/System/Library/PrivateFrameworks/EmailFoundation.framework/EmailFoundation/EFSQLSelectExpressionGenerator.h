@class NSArray, NSSet;

@interface EFSQLSelectExpressionGenerator : NSObject

@property (readonly, nonatomic) NSArray *columnExpressionGenerators;
@property (readonly, nonatomic) NSSet *tableExpressionGenerators;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToSelectExpressionGenerator:(id)a0;
- (id)initExpressionGeneratorWithColumns:(id)a0 tables:(id)a1;
- (id)selectExpression;
- (id)columnAliases;

@end
