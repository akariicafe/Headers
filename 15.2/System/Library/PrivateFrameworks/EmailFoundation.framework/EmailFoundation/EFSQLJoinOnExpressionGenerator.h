@class NSString;

@interface EFSQLJoinOnExpressionGenerator : NSObject

@property (readonly, nonatomic) NSString *table;
@property (readonly, nonatomic) NSString *tableAlias;
@property (readonly, nonatomic) NSString *columns;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTable:(id)a0 tableAlias:(id)a1 columns:(id)a2;
- (BOOL)isEqualToJoinOnExpressonGenerator:(id)a0;
- (id)joinOnExpression;

@end
