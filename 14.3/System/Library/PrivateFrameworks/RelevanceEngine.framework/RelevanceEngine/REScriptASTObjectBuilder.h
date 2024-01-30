@class REScriptSymbolTable;

@interface REScriptASTObjectBuilder : NSObject

@property (readonly, nonatomic) REScriptSymbolTable *table;

- (void).cxx_destruct;
- (id)initWithTable:(id)a0;
- (id)buildObjectWithNode:(id)a0 error:(id *)a1;
- (id)objectTypeErrorDescription;
- (id)buildObjectWithIdentifierNode:(id)a0 error:(id *)a1;
- (id)buildObjectWithBinaryExpressionNode:(id)a0 previousExpression:(id)a1 error:(id *)a2;
- (id)buildObjectWithFunctionNode:(id)a0 error:(id *)a1;
- (id)buildObjectWithSubscriptExpressionNode:(id)a0 error:(id *)a1;
- (id)buildObjectWithLiteralNode:(id)a0 error:(id *)a1;
- (id)buildObjectWithExpressionNode:(id)a0 error:(id *)a1;
- (id)buildObjectWithPrefixExpressionNode:(id)a0 error:(id *)a1;
- (id)buildObjectWithMemberExpressionNode:(id)a0 error:(id *)a1;
- (id)buildObjectWithTopLevelBinaryExpression:(id)a0 error:(id *)a1;
- (id)buildObjectWithTopLevelBinaryExpressionListNode:(id)a0 error:(id *)a1;
- (id)_errorForUnsupportedNode:(id)a0;
- (id)buildObjectWithBinaryExpressionListNode:(id)a0 previousExpression:(id)a1 error:(id *)a2;

@end
