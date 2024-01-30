@class NSString, NSMapTable;
@protocol EFSQLValueExpressable;

@interface EFSQLCaseExpression : NSObject <EFSQLValueExpressable>

@property (readonly, nonatomic) id<EFSQLValueExpressable> baseExpression;
@property (readonly, nonatomic) NSMapTable *whenExpressions;
@property (retain, nonatomic) id<EFSQLValueExpressable> elseExpression;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)ef_SQLIsolatedExpression;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithBaseExpression:(id)a0;

@end
