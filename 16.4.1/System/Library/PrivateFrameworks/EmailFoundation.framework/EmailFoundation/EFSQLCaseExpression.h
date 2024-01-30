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
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)init;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (void).cxx_destruct;
- (id)initWithBaseExpression:(id)a0;

@end
