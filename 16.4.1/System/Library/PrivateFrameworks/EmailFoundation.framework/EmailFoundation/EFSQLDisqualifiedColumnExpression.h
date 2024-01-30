@class NSString, EFSQLColumnExpression;

@interface EFSQLDisqualifiedColumnExpression : EFSQLColumnExpression <EFCacheable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) EFSQLColumnExpression *columnExpression;

- (id)cachedSelf;
- (BOOL)isEqual:(id)a0;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (void).cxx_destruct;

@end
