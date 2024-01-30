@class NSArray;

@interface EFSQLOrderByExpressionGenerator : NSObject

@property (readonly, nonatomic) NSArray *generators;
@property (readonly, nonatomic) BOOL ascending;

- (void).cxx_destruct;
- (BOOL)isEqualToEFSQLOrderByExpressionGenerator:(id)a0;
- (id)orderByExpression;
- (id)initWithGenerators:(id)a0 ascending:(BOOL)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
