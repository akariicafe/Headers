@class NSString, NSArray;

@interface TSTArrayNode : TSTExpressionNode

@property (readonly) struct TSCEGridDimensions { unsigned int width; unsigned int height; } dimensions;
@property (retain) NSString *whitespaceBeforeFirstChild;
@property (retain) NSArray *whitespaceAfterDelimiters;

- (int)tokenType;
- (id)string;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (struct TSCEFunctionArgSpec { } *)argumentSpec;
- (void)insertFormulaText:(id)a0 includeWhitespace:(BOOL)a1;
- (id)initWithContext:(id)a0 children:(id)a1 firstIndex:(unsigned long long)a2 lastIndex:(unsigned long long)a3;
- (id)initAsCopyOf:(id)a0 intoContext:(id)a1 children:(id)a2;
- (struct TSTCSENodeData { unsigned long long x0; unsigned long long x1; })recordHashesForSubexpressions:(id)a0;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 hostCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 symbolTable:(void *)a2;
- (id)initWithContext:(id)a0 firstIndex:(unsigned long long)a1 lastIndex:(unsigned long long)a2;
- (id)initWithContext:(id)a0 children:(id)a1 columns:(unsigned int)a2 rows:(unsigned int)a3 firstIndex:(unsigned long long)a4 lastIndex:(unsigned long long)a5;

@end
