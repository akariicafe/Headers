@class NSString;

@interface TSTArgumentPlaceholderNode : TSTExpressionNode {
    NSString *_detokenizedText;
}

@property (nonatomic) short mode;

+ (void *)argumentSpecForFunctionIndex:(unsigned short)a0 argumentIndex:(int)a1;

- (id)string;
- (void).cxx_destruct;
- (int)tokenType;
- (id)modes;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)detokenizedText;
- (BOOL)hasMenu;
- (id)argumentName;
- (id)bakedValue;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 hostCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 symbolTable:(void *)a2;
- (id)copyIntoContext:(id)a0 bakeModes:(BOOL)a1 children:(id)a2;
- (id)exportString;
- (id)formulaPlainText;
- (id)initAsCopyOf:(id)a0 intoContext:(id)a1 children:(id)a2;
- (id)initWithContext:(id)a0 argumentSpec:(void *)a1 firstIndex:(unsigned long long)a2 lastIndex:(unsigned long long)a3;
- (id)initWithContext:(id)a0 children:(id)a1 firstIndex:(unsigned long long)a2 lastIndex:(unsigned long long)a3;
- (id)initWithContext:(id)a0 firstIndex:(unsigned long long)a1 lastIndex:(unsigned long long)a2;
- (void)insertFormulaText:(id)a0 includeWhitespace:(BOOL)a1;
- (BOOL)isEqualToExpressionNode:(id)a0;
- (void)p_invalidate;
- (struct TSTCSENodeData { unsigned long long x0; unsigned long long x1; })recordHashesForSubexpressions:(id)a0;
- (void)setArgumentSpec:(void *)a0;

@end
