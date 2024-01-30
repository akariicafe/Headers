@class NSMutableDictionary;

@interface REScriptSymbolTable : NSObject {
    REScriptSymbolTable *_parentTable;
    NSMutableDictionary *_definitions;
}

- (void).cxx_destruct;
- (void)enumerateRules:(id /* block */)a0;
- (void)_enumerateObjectsOfType:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)define:(id)a0 type:(unsigned long long)a1 options:(id)a2 error:(id *)a3;
- (void)enumerateFeatures:(id /* block */)a0;
- (id)initWithParentScope:(id)a0;
- (id)nodeValueForDefinition:(id)a0;
- (id)objectValueForDefinition:(id)a0;
- (BOOL)setNodeValue:(id)a0 forDefinition:(id)a1 error:(id *)a2;
- (BOOL)setObjectValue:(id)a0 forDefinition:(id)a1 error:(id *)a2;
- (BOOL)typeForDefinition:(id)a0 type:(unsigned long long *)a1;

@end
