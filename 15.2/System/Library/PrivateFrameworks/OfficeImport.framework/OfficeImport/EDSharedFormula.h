@class EDReference;

@interface EDSharedFormula : EDFormula

@property (nonatomic) unsigned long long baseFormulaIndex;
@property (nonatomic) BOOL forceNonBaseFormula;
@property (nonatomic) int rowBaseOrOffset;
@property (nonatomic) int columnBaseOrOffset;
@property (readonly, nonatomic) EDReference *baseFormulaRange;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFormula:(id)a0;
- (BOOL)isSharedFormula;
- (BOOL)isBaseFormula;
- (void)unarchiveFromData:(struct __CFData { } *)a0 offset:(unsigned long long *)a1;
- (void)archiveByAppendingToMutableData:(struct __CFData { } *)a0;
- (id)baseFormulaWithRowBlocks:(id)a0;
- (BOOL)convertTokensToShared;
- (id)warningWithRowBlocks:(id)a0;
- (void)updateBaseFormulaRangeWithRow:(int)a0 column:(int)a1;

@end
