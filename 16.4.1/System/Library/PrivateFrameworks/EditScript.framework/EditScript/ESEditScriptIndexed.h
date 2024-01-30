@class ESAtomIndexed;

@interface ESEditScriptIndexed : ESEditScript {
    ESAtomIndexed *_currentScriptAtom;
}

+ (id)editScriptFromArray:(id)a0 toArray:(id)a1;
+ (id)editScriptFromArray:(id)a0 toArray:(id)a1 orderAtomsAscending:(BOOL)a2 operationPrecedence:(long long)a3;

- (void).cxx_destruct;
- (void)addToCurrentScriptAtomEditOperation:(long long)a0 editIndex:(unsigned long long)a1 newText:(id)a2 indexInArrayB:(unsigned long long)a3;
- (id)applyToArray:(id)a0;
- (void)finalizeCurrentScriptAtom;
- (id)initWithOperationPrecedence:(long long)a0 dataClass:(Class)a1 fromArray:(id)a2 toArray:(id)a3 orderAtomsAscending:(BOOL)a4;
- (void)initializeCurrentScriptAtom;

@end
