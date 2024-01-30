@class EDReferenceCollection, EDWorkbook;

@interface CHDFormula : EDFormula {
    EDReferenceCollection *mReferences;
    EDWorkbook *mWorkbook;
}

+ (id)formulaWithReferences:(id)a0;
+ (id)formulaWithReference:(id)a0;

- (id)initWithReference:(id)a0;
- (id)references;
- (void)setReferences:(id)a0;
- (void).cxx_destruct;
- (void)setWorkbook:(id)a0;
- (unsigned long long)countOfCellsBeingReferenced;
- (id)initWithReferences:(id)a0;
- (id)referencesFromFormula;
- (BOOL)isConstantStringFormula;
- (id)constantValuesFromConstantStringFormula;
- (void)prepareTokens;
- (id)initWithWorkbook:(id)a0;

@end
