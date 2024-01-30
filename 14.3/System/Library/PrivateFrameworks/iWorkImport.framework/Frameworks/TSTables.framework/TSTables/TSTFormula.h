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

+ (id)formulaForCell:(id)a0 atCellID:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a1 inTable:(id)a2;
+ (BOOL)storageExceedsMaxFormulaLength:(id)a0;
+ (id)singleQuoteCharacters;
+ (id)doubleQuoteCharacters;
+ (int)quoteContextAtCharIndex:(unsigned long long)a0 previousContext:(int)a1 inStorage:(id)a2;
+ (unsigned long long)parenCountAtCharIndex:(unsigned long long)a0 unmatchedParenCount:(unsigned long long)a1 quoteContext:(int)a2 inStorage:(id)a3;
+ (id)leftParenCharacters;
+ (id)rightParenCharacters;
+ (id)p_charactersToTemporarilyChopOffEndToFixSyntaxError;
+ (id)leadingSingleQuoteEscapeCharacters;
+ (BOOL)isFormulaEqualsCharacter:(unsigned short)a0;
+ (int)formulaQuoteContextAtCharIndex:(unsigned long long)a0 inStorage:(id)a1;
+ (unsigned long long)parenCountAtCharIndex:(unsigned long long)a0 inStorage:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (id)description;
- (id)initWithCalculationEngine:(id)a0 expressionTree:(id)a1 baseHostCell:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a2 hostTable:(id)a3;
- (id)initWithContext:(id)a0 calculationEngine:(id)a1 baseHostCell:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a2 formula:(id)a3 ownerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a4;
- (id)formulaPlainText;
- (void)insertFormulaText:(id)a0 includeWhitespace:(BOOL)a1;
- (id)initWithContext:(id)a0 calculationEngine:(id)a1 viewHostCell:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a2 formula:(id)a3 ownerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a4;
- (id)initWithContext:(id)a0 calculationEngine:(id)a1 baseHostCell:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a2 formula:(id)a3 ownerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a4 suppressAutomaticNamedReferenceInvalidation:(BOOL)a5;
- (id)initWithContext:(id)a0 calculationEngine:(id)a1 viewHostCell:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a2 formula:(id)a3 ownerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a4 suppressAutomaticNamedReferenceInvalidation:(BOOL)a5;
- (id)initWithCalculationEngine:(id)a0 baseHostCell:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a1 hostTable:(id)a2;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (void)reparseWithStorage:(id)a0 adjustExpressionTree:(id /* block */)a1;
- (id)p_fixFormula:(id)a0;
- (void)fixPreserveFlagsForCategoryRefInNode:(id)a0;
- (id)p_formulaAsTextReturningTokenValues:(BOOL)a0;
- (id)initWithCalculationEngine:(id)a0 viewHostCell:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a1 hostTable:(id)a2;
- (BOOL)hasBareArgumentPlaceholders;
- (void)reparseWithStorage:(id)a0;
- (id)formulaDetokenizedText;
- (BOOL)canSimplify;
- (id)simplify;

@end
