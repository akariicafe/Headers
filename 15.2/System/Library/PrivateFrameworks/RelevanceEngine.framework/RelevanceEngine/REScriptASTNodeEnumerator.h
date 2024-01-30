@class NSArray, REScriptSymbolTable;

@interface REScriptASTNodeEnumerator : NSObject {
    NSArray *_nodes;
    REScriptSymbolTable *_table;
}

- (void).cxx_destruct;
- (id)initWithRootNodes:(id)a0 symbolTable:(id)a1;
- (BOOL)buildSymbolTableWithError:(id *)a0;

@end
