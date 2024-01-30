@class EDReferenceCollection, EDWorkbook;

@interface CHDFormula : EDFormula {
    EDReferenceCollection *mReferences;
    EDWorkbook *mWorkbook;
}

+ (id)formulaWithReference:(id)a0;
+ (id)formulaWithReferences:(id)a0;

- (void)setReferences:(id)a0;
- (id)references;
- (void).cxx_destruct;
- (id)initWithReference:(id)a0;
- (id)initWithReferences:(id)a0;
- (id)constantValuesFromConstantStringFormula;
- (unsigned long long)countOfCellsBeingReferenced;
- (id)initWithWorkbook:(id)a0;
- (BOOL)isConstantStringFormula;
- (void)prepareTokens;
- (id)referencesFromFormula;
- (void)setWorkbook:(id)a0;

@end
