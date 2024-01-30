@class TSTFunctionNode;

@interface TSTFunctionEndNode : TSTExpressionNode

@property (nonatomic) TSTFunctionNode *functionNode;

- (unsigned long long)lastIndex;
- (id)string;
- (unsigned long long)firstIndex;
- (int)tokenType;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { } *)a0 hostCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 symbolTable:(void *)a2;
- (id)exportString;
- (id)initWithContext:(id)a0 children:(id)a1 firstIndex:(unsigned long long)a2 lastIndex:(unsigned long long)a3;
- (id)initWithContext:(id)a0 functionNode:(id)a1 firstIndex:(unsigned long long)a2 lastIndex:(unsigned long long)a3;
- (void)insertFormulaText:(id)a0 includeWhitespace:(BOOL)a1;

@end
