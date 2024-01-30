@class NSString;

@interface EDFormula : NSObject <EDFormulaBuilding> {
    struct __CFData { } *mPackedData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formula;

- (BOOL)removeTokenAtIndex:(unsigned int)a0;
- (id)init;
- (id)warning;
- (void)dealloc;
- (struct EDToken { unsigned short x0; unsigned int x1; } *)tokenAtIndex:(unsigned int)a0;
- (struct ChVector<XlPtg *> { struct XlPtg **x0; struct XlPtg **x1; struct __compressed_pair<XlPtg **, ChAllocator<XlPtg *> > { struct XlPtg **x0; } x2; } *)xlPtgs;
- (unsigned int)tokenCount;
- (void)setWarning:(int)a0;
- (char *)lastExtendedDataForTokenAtIndex:(unsigned int)a0 length:(unsigned int *)a1;
- (int)tokenTypeAtIndex:(unsigned int)a0;
- (BOOL)isSupportedFormula;
- (void)setCleaned:(BOOL)a0;
- (id)originalFormulaString;
- (void)populateXlPtg:(struct XlPtg { char *x0; int x1; unsigned int x2; unsigned short x3; } *)a0 index:(unsigned int)a1;
- (BOOL)setupTokensWithTokensCount:(unsigned int)a0 tokensWithDataCount:(unsigned int)a1 extendedDataLength:(unsigned int)a2 extendedDataCount:(unsigned int)a3;
- (void)removeAllTokens;
- (BOOL)copyTokenFromXlPtg:(struct XlPtg { char *x0; int x1; unsigned int x2; unsigned short x3; } *)a0;
- (char *)addToken:(int)a0 extendedDataLength:(unsigned int)a1;
- (BOOL)addToken:(int)a0 extendedDataLength:(unsigned int)a1 extendedDataCount:(unsigned int)a2;
- (char *)setExtendedDataAtIndex:(unsigned int)a0 extendedDataIndex:(unsigned int)a1 length:(unsigned int)a2;
- (void)setupExtendedDataForTokenAtIndex:(unsigned int)a0 extendedDataLength:(unsigned int)a1 extendedDataCount:(unsigned int)a2;
- (BOOL)copyTokenAtIndex:(unsigned int)a0 fromFormula:(id)a1;
- (int)warningType;
- (unsigned int)firstTokenIndexForArgAtIndex:(unsigned int)a0;
- (id)saveArgs:(unsigned int)a0 andDelete:(BOOL)a1;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)a0 length:(unsigned int)a1;
- (BOOL)convertToList:(unsigned int)a0 withFinalParen:(BOOL)a1;
- (char *)extendedDataForTokenAtIndex:(unsigned int)a0 extendedDataIndex:(unsigned int)a1 length:(unsigned int *)a2;
- (char *)addToken:(int)a0 extendedDataLength:(unsigned int)a1 numArgs:(int)a2;
- (BOOL)insertName:(unsigned long long)a0 atIndex:(unsigned int)a1;
- (BOOL)insertExternalName:(unsigned long long)a0 withLink:(unsigned long long)a1 atIndex:(unsigned int)a2;
- (BOOL)addArrayWithCol:(int)a0 andRow:(int)a1;
- (BOOL)convertToList:(unsigned int)a0;
- (BOOL)convertToIntersect:(unsigned int)a0;
- (BOOL)convertLastRefsToArea;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL *)a0 withEDLinks:(id)a1;
- (void)markLastTokenAsDuration;
- (void)markLastTokenAsSpanningRefVertically:(BOOL)a0 withMin:(unsigned short)a1 andMax:(unsigned short)a2;
- (BOOL)shrinkSpanningRefAtArgIndex:(unsigned int)a0;
- (BOOL)addInfixOperator:(int)a0 atIndex:(unsigned int)a1 factor:(double)a2;
- (BOOL)wrapArgumentsWithOperator:(int)a0 argumentCount:(unsigned int)a1 atIndex:(unsigned int)a2;
- (BOOL)fixTableOfConstantsRefs;
- (BOOL)uppercaseArgAtIndex:(unsigned int)a0;
- (id)initWithFormula:(id)a0;
- (void)replaceTokenTypeAtIndex:(unsigned int)a0 withType:(int)a1;
- (unsigned int)countExtendedDataForTokenAtIndex:(unsigned int)a0;
- (BOOL)replaceTokenAtIndex:(unsigned int)a0 withFormula:(id)a1;
- (BOOL)replaceTokenAtIndex:(unsigned int)a0 withFormula:(id)a1 formulaTokenIndex:(unsigned int)a2;
- (BOOL)convertTokensToSharedAtRow:(unsigned int)a0 column:(unsigned int)a1;
- (void)setOriginalFormulaString:(id)a0;
- (id)warningParameter;
- (void)setWarningParameter:(id)a0;
- (BOOL)isCleaned;
- (BOOL)isContainsRelativeReferences;
- (void)updateContainsRelativeReferences:(BOOL)a0;
- (BOOL)isCleanedWithEvaluationStack;
- (void)updateCleanedWithEvaluationStack:(BOOL)a0;
- (BOOL)isSharedFormula;
- (BOOL)isBaseFormula;
- (void)unarchiveFromData:(struct __CFData { } *)a0 offset:(unsigned long long *)a1;
- (void)archiveByAppendingToMutableData:(struct __CFData { } *)a0;

@end
