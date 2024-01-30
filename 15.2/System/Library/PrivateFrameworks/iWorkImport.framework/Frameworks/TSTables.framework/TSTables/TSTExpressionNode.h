@class NSArray, NSString, TSTWPTokenAttachment, UIViewController;

@interface TSTExpressionNode : TSPObject <TSTFormulaToken> {
    NSArray *_children;
    void *_argumentSpec;
}

@property (retain, nonatomic) NSArray *children;
@property (nonatomic) void *argumentSpec;
@property (readonly, nonatomic) BOOL isOptional;
@property (nonatomic) TSTWPTokenAttachment *tokenAttachment;
@property (nonatomic) unsigned long long firstIndex;
@property (nonatomic) unsigned long long lastIndex;
@property (retain, nonatomic) NSString *whitespaceBefore;
@property (retain, nonatomic) NSString *whitespaceAfter;
@property (readonly, retain, nonatomic) UIViewController *popover;
@property (readonly, nonatomic) int tokenType;
@property (readonly, nonatomic) NSString *string;

- (unsigned int)symbol;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithContext:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)deepCopyIntoContext:(id)a0 bakeModes:(BOOL)a1 withTokenDict:(id)a2;
- (BOOL)isEqualToExpressionNode:(id)a0;
- (id)detokenizedText;
- (id)formulaPlainText;
- (void)insertFormulaText:(id)a0 includeWhitespace:(BOOL)a1;
- (id)initWithContext:(id)a0 children:(id)a1 firstIndex:(unsigned long long)a2 lastIndex:(unsigned long long)a3;
- (id)initAsCopyOf:(id)a0 intoContext:(id)a1 children:(id)a2;
- (struct TSTCSENodeData { unsigned long long x0; unsigned long long x1; })recordHashesForSubexpressions:(id)a0;
- (id)copyByResolvingIdentifiers:(id)a0 hostTable:(id)a1 baseHostCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2 forceReferenceInterpretation:(BOOL)a3 symbolTable:(void *)a4 oldToNewNodeMap:(id)a5;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 hostCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 symbolTable:(void *)a2;
- (id)exportString;
- (id)copyIntoContext:(id)a0 bakeModes:(BOOL)a1 children:(id)a2;
- (BOOL)forceReferenceInterpretationOfChildren;
- (void)fixStorageLanguage:(id)a0;
- (void)addTSTCanvasReferencesToSet:(id)a0 inRangeContext:(unsigned char)a1 withColorHelper:(id)a2 preferringNodesFromStorage:(id)a3 allVisitedNodes:(id)a4;
- (unsigned long long)firstIndexOfSubtree;
- (unsigned long long)lastIndexOfSubtree;
- (id)mostSpecificNodeContainingIndex:(unsigned long long)a0 correspondingIndex:(unsigned long long)a1;
- (BOOL)subtreeContainsIndex:(unsigned long long)a0;
- (void)addVariablesMatchingPrefix:(id)a0 forFormulaIndex:(unsigned long long)a1 toDictionary:(id)a2 symbolTable:(void *)a3;
- (id)largestCommonSubexpressionExcludingExisting:(id)a0 cseData:(id)a1;
- (void)addAllIdentifiersToSymbolTable:(void *)a0;
- (void)replaceOccurrencesOfChildrenInSet:(id)a0 withIdentifier:(id)a1 symbol:(unsigned int)a2;
- (id)largestCommonSubexpression;
- (id)eliminateLargestCommonSubexpression:(id)a0 withSymbolTable:(void *)a1 newIdentifierOut:(id *)a2;
- (id)lowestCommonAncestor:(id)a0;
- (id)p_eliminateLargestCommonSubexpressionWithLCA:(id)a0 expressions:(id)a1 withSymbolTable:(void *)a2 newIdentifierOut:(id *)a3;
- (id)initWithContext:(id)a0 firstIndex:(unsigned long long)a1 lastIndex:(unsigned long long)a2;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 hostCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (BOOL)hasMenu;
- (void)enumerateExpressionNodesUsingBlock:(id /* block */)a0;
- (long long)compareFirstLastIndices:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeEncompassingExpressionNodesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isFunctionNode;
- (BOOL)canEliminateLargestCommonSubexpressionWithSymbolTable:(void *)a0;
- (id)eliminateLargestCommonSubexpressionWithSymbolTable:(void *)a0 newIdentifierOut:(id *)a1;

@end
