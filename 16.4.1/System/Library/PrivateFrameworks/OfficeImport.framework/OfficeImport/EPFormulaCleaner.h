@class EDRowBlocks, NSMutableDictionary, EDFormula, EDName, EDSheet;

@interface EPFormulaCleaner : EDProcessor {
    EDSheet *mCurrentSheet;
    EDFormula *mFormula;
    EDFormula *mTokensToClean;
    EDName *mParentName;
    int mRowOffset;
    int mColumnOffset;
    EDRowBlocks *mBaseFormulaRowBlocks;
    NSMutableDictionary *mNameArrayedTestCache;
    NSMutableDictionary *mNameCircularReferenceTestCache;
}

- (void).cxx_destruct;
- (void)reset;
- (void)addOffsetsToRow:(int *)a0 rowRelative:(BOOL)a1 column:(int *)a2 columnRelative:(BOOL)a3;
- (void)applyMaxCellsInName:(id)a0;
- (void)applyProcessorToObject:(id)a0 sheet:(id)a1;
- (BOOL)checkCustomFunction:(unsigned int)a0;
- (BOOL)checkFunctionId:(int)a0 tokenIndex:(unsigned int)a1;
- (BOOL)checkSupportedAddInName:(id)a0 externalLink:(BOOL)a1;
- (BOOL)cleanArea3D:(unsigned int)a0;
- (BOOL)cleanArea:(unsigned int)a0 updateSheet:(BOOL)a1;
- (BOOL)cleanArray:(unsigned int)a0;
- (void)cleanFormula:(id)a0 name:(id)a1;
- (void)cleanFormula:(id)a0 sheet:(id)a1;
- (void)cleanFormula:(id)a0 sheet:(id)a1 name:(id)a2;
- (BOOL)cleanFunc:(unsigned int)a0;
- (BOOL)cleanFuncVar:(unsigned int)a0;
- (BOOL)cleanName:(unsigned int)a0 nameIndex:(unsigned int)a1 sheetIndex:(unsigned long long)a2 tokenOffset:(int *)a3;
- (BOOL)cleanName:(unsigned int)a0 tokenOffset:(int *)a1;
- (BOOL)cleanNameX:(unsigned int)a0 tokenOffset:(int *)a1;
- (BOOL)cleanRange:(unsigned int)a0 tokenOffset:(int *)a1;
- (BOOL)cleanRef3D:(unsigned int)a0;
- (BOOL)cleanRef:(unsigned int)a0 updateSheet:(BOOL)a1;
- (BOOL)cleanTokenAtIndex:(unsigned int)a0 tokenOffset:(int *)a1;
- (BOOL)cleanUnion:(unsigned int)a0;
- (BOOL)combineCellReferences:(unsigned int)a0 tokenOffset:(int *)a1;
- (BOOL)doesNameIndexContainCircularReferences:(unsigned int)a0 sheetIndex:(unsigned long long)a1 previousNameIndexes:(void *)a2;
- (BOOL)isArrayedFormulaSupported:(id)a0 allowSimpleRanges:(BOOL)a1 formulasBeingEvaluated:(id)a2;
- (BOOL)isLinkReferenceIndexSupported:(unsigned int)a0 allowExternal:(BOOL)a1;
- (BOOL)isObjectSupported:(id)a0;
- (BOOL)isReferenceValidInLassoForRow:(int)a0 rowRelative:(BOOL)a1 column:(int)a2 columnRelative:(BOOL)a3;
- (BOOL)isReferenceValidInLassoForSheet:(id)a0 rowMin:(int)a1 rowMinRelative:(BOOL)a2 rowMax:(int)a3 rowMaxRelative:(BOOL)a4 columnMin:(int)a5 columnMinRelative:(BOOL)a6 columnMax:(int)a7 columnMaxRelative:(BOOL)a8;
- (BOOL)isThereContentOutsideOfLassoBoundsForSheet:(id)a0 rowMin:(int)a1 rowMax:(int)a2 columnMin:(int)a3 columnMax:(int)a4;
- (id)newFormulaToCleanFromSharedFormula:(id)a0;
- (void)prepareToProcessFormula:(id)a0 sheet:(id)a1 name:(id)a2;
- (void)reportWarning:(int)a0;
- (void)reportWarning:(int)a0 parameter:(id)a1;
- (void)updateSheet:(id)a0 row:(int)a1 rowRelative:(BOOL)a2 column:(int)a3 columnRelative:(BOOL)a4;
- (void)updateSheet:(id)a0 rowMin:(int)a1 rowMinRelative:(BOOL)a2 rowMax:(int)a3 rowMaxRelative:(BOOL)a4 columnMin:(int)a5 columnMinRelative:(BOOL)a6 columnMax:(int)a7 columnMaxRelative:(BOOL)a8;
- (void)updateWorksheet:(id)a0 row:(int)a1 column:(int)a2 inDictionary:(id)a3;
- (BOOL)useEvaluationStackToCheckFunctionId:(int)a0 functionName:(id)a1 tokenIndex:(unsigned int)a2;
- (unsigned int)useEvaluationStackToGetParameter:(unsigned int)a0 tokenIndex:(unsigned int)a1;
- (id)useEvaluationStackToGetParameter:(unsigned int)a0 tokenIndex:(unsigned int)a1 allReferencesAllowed:(BOOL)a2 success:(BOOL *)a3;
- (int)useEvaluationStackToGetParameterTokenType:(unsigned int)a0 tokenIndex:(unsigned int)a1 success:(BOOL *)a2;
- (id)worksheetFromLinkReferenceIndex:(unsigned int)a0;
- (id)worksheetsFromLinkReferenceIndex:(unsigned int)a0;

@end
