@class TSCECalculationEngine, NSString, TSCEFormulaObject, TSTExpressionNode, TSTTableInfo;

@interface TSTFormula : NSObject <NSCopying> {
    TSTTableInfo *_hostInfo;
    struct TSUModelCellCoord { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _coord; } _hostCell;
}

@property (weak, nonatomic) TSCECalculationEngine *calculationEngine;
@property (nonatomic, getter=isSyntaxError) BOOL syntaxError;
@property (copy, nonatomic) NSString *initialWhitespace;
@property (readonly, nonatomic) TSCEFormulaObject *formula;
@property (readonly, nonatomic) TSCEFormulaObject *geometricFormula;
@property (nonatomic) BOOL fixupFormulas;
@property (readonly, nonatomic) BOOL formulaWasFixable;
@property (readonly, nonatomic) BOOL formulaFixupsShouldStick;
@property (retain, nonatomic) TSTExpressionNode *expressionTree;
@property (nonatomic, getter=isEmpty) BOOL empty;

+ (BOOL)storageExceedsMaxFormulaLength:(id)a0;
+ (id)doubleQuoteCharacters;
+ (id)formulaForCell:(id)a0 atCellID:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a1 inTable:(id)a2;
+ (int)formulaQuoteContextAtCharIndex:(unsigned long long)a0 inStorage:(id)a1;
+ (BOOL)isFormulaEqualsCharacter:(unsigned short)a0;
+ (id)leadingSingleQuoteEscapeCharacters;
+ (id)leftParenCharacters;
+ (id)p_charactersToTemporarilyChopOffEndToFixSyntaxError;
+ (unsigned long long)parenCountAtCharIndex:(unsigned long long)a0 inStorage:(id)a1;
+ (unsigned long long)parenCountAtCharIndex:(unsigned long long)a0 unmatchedParenCount:(unsigned long long)a1 quoteContext:(int)a2 inStorage:(id)a3;
+ (int)quoteContextAtCharIndex:(unsigned long long)a0 previousContext:(int)a1 inStorage:(id)a2;
+ (id)rightParenCharacters;
+ (id)singleQuoteCharacters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithCalculationEngine:(id)a0 expressionTree:(id)a1 baseHostCell:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a2 hostTable:(id)a3;
- (id)initWithContext:(id)a0 calculationEngine:(id)a1 baseHostCell:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a2 formula:(id)a3 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a4;
- (BOOL)canSimplify;
- (void)fixPreserveFlagsForCategoryRefInNode:(id)a0;
- (id)formulaDetokenizedText;
- (id)formulaPlainText;
- (BOOL)hasBareArgumentPlaceholders;
- (id)initWithCalculationEngine:(id)a0 baseHostCell:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a1 hostTable:(id)a2;
- (id)initWithCalculationEngine:(id)a0 viewHostCell:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a1 hostTable:(id)a2;
- (id)initWithContext:(id)a0 calculationEngine:(id)a1 baseHostCell:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a2 formula:(id)a3 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a4 suppressAutomaticNamedReferenceInvalidation:(BOOL)a5;
- (id)initWithContext:(id)a0 calculationEngine:(id)a1 viewHostCell:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a2 formula:(id)a3 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a4;
- (id)initWithContext:(id)a0 calculationEngine:(id)a1 viewHostCell:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a2 formula:(id)a3 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a4 suppressAutomaticNamedReferenceInvalidation:(BOOL)a5;
- (void)insertFormulaText:(id)a0 includeWhitespace:(BOOL)a1;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (id)p_fixFormula:(id)a0;
- (id)p_formulaAsTextReturningTokenValues:(BOOL)a0;
- (void)reparseWithStorage:(id)a0;
- (void)reparseWithStorage:(id)a0 adjustExpressionTree:(id /* block */)a1;
- (id)simplify;

@end
