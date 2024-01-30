@class NSString, EFSQLColumnExpression;

@interface EFSQLDisqualifiedColumnExpression : EFSQLColumnExpression <EFCacheable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) EFSQLColumnExpression *columnExpression;

- (id)cachedSelf;
- (void).cxx_destruct;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
