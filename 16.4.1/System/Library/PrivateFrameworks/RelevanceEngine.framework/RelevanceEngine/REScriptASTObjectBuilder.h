@class REScriptSymbolTable;

@interface REScriptASTObjectBuilder : NSObject

@property (readonly, nonatomic) REScriptSymbolTable *table;

- (id)initWithTable:(id)a0;
- (void).cxx_destruct;
- (id)_errorForUnsupportedNode:(id)a0;
- (id)buildObjectWithBinaryExpressionListNode:(id)a0 previousExpression:(id)a1 error:(id *)a2;
- (id)buildObjectWithBinaryExpressionNode:(id)a0 previousExpression:(id)a1 error:(id *)a2;
- (id)buildObjectWithExpressionNode:(id)a0 error:(id *)a1;
- (id)buildObjectWithFunctionNode:(id)a0 error:(id *)a1;
- (id)buildObjectWithIdentifierNode:(id)a0 error:(id *)a1;
- (id)buildObjectWithLiteralNode:(id)a0 error:(id *)a1;
- (id)buildObjectWithMemberExpressionNode:(id)a0 error:(id *)a1;
- (id)buildObjectWithNode:(id)a0 error:(id *)a1;
- (id)buildObjectWithPrefixExpressionNode:(id)a0 error:(id *)a1;
- (id)buildObjectWithSubscriptExpressionNode:(id)a0 error:(id *)a1;
- (id)buildObjectWithTopLevelBinaryExpression:(id)a0 error:(id *)a1;
- (id)buildObjectWithTopLevelBinaryExpressionListNode:(id)a0 error:(id *)a1;
- (id)objectTypeErrorDescription;

@end
