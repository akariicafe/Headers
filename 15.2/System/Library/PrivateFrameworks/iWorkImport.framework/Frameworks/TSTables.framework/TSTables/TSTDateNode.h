@class NSString, NSDate;

@interface TSTDateNode : TSTExpressionNode

@property (retain, nonatomic) NSDate *value;
@property (nonatomic) BOOL isBlank;
@property (retain, nonatomic) NSString *dateFormat;

- (int)tokenType;
- (id)string;
- (id)description;
- (id)date;
- (void).cxx_destruct;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)isEqualToExpressionNode:(id)a0;
- (void)insertFormulaText:(id)a0 includeWhitespace:(BOOL)a1;
- (id)initWithContext:(id)a0 children:(id)a1 firstIndex:(unsigned long long)a2 lastIndex:(unsigned long long)a3;
- (id)initAsCopyOf:(id)a0 intoContext:(id)a1 children:(id)a2;
- (struct TSTCSENodeData { unsigned long long x0; unsigned long long x1; })recordHashesForSubexpressions:(id)a0;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 hostCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 symbolTable:(void *)a2;
- (id)exportString;
- (id)initWithContext:(id)a0 dateValue:(id)a1 firstIndex:(unsigned long long)a2 lastIndex:(unsigned long long)a3;
- (id)initWithContext:(id)a0 asBlank:(BOOL)a1 firstIndex:(unsigned long long)a2 lastIndex:(unsigned long long)a3;

@end
