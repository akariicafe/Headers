@class NSArray, REScriptSymbolTable;

@interface REScriptASTNodeEnumerator : NSObject {
    NSArray *_nodes;
    REScriptSymbolTable *_table;
}

- (void).cxx_destruct;
- (BOOL)buildSymbolTableWithError:(id *)a0;
- (id)initWithRootNodes:(id)a0 symbolTable:(id)a1;

@end
