@class NSString, _SUICAtomRanged;

@interface _SUICEditScriptRanged : _SUICEditScript {
    long long _options;
    _SUICAtomRanged *_currentScriptAtom;
}

@property (readonly, weak, nonatomic) NSString *stringA;
@property (readonly, weak, nonatomic) NSString *stringB;

+ (id)editScriptFromString:(id)a0 toString:(id)a1 chunkSize:(long long)a2 orderAtomsAscending:(BOOL)a3 operationPrecedence:(long long)a4 options:(long long)a5;
+ (id)editScriptFromString:(id)a0 toString:(id)a1;
+ (id)editScriptForSmallestSingleEditFromString:(id)a0 toString:(id)a1;
+ (id)editScriptForSmallestSingleEditFromString:(id)a0 toString:(id)a1 chunkSize:(long long)a2;

- (void)removeAnyOverlapBetweenIndexOfFirstDifference:(long long *)a0 andReverseIndexOfLastDifference:(long long *)a1 shouldShortenFirstDifference:(BOOL)a2;
- (id)initWithOperationPrecedence:(long long)a0 dataClass:(Class)a1 chunkSize:(long long)a2 stringA:(id)a3 stringB:(id)a4 orderAtomsAscending:(BOOL)a5 options:(long long)a6;
- (void)addToCurrentScriptAtomEditOperation:(long long)a0 editIndex:(unsigned long long)a1 newText:(id)a2 indexInArrayB:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)initializeCurrentScriptAtom;
- (void)finalizeCurrentScriptAtom;
- (id)applyToString:(id)a0;
- (void)computeSmallestSingleEdit;

@end
