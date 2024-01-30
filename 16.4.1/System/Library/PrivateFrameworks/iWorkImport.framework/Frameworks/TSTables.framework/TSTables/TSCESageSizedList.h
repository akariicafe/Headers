@class NSString;

@interface TSCESageSizedList : NSObject {
    struct vector<TSCEASTNodeArray *, std::allocator<TSCEASTNodeArray *>> { struct TSCEASTNodeArray **__begin_; struct TSCEASTNodeArray **__end_; struct __compressed_pair<TSCEASTNodeArray **, std::allocator<TSCEASTNodeArray *>> { struct TSCEASTNodeArray **__value_; } __end_cap_; } _nodeArrays;
}

@property (retain, nonatomic) NSString *trailingWhitespace;
@property (readonly, nonatomic) BOOL isArray;
@property (readonly, nonatomic) unsigned int numberOfItems;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithParser:(struct TSCEParser { id x0; struct TSCELexer *x1; struct TSCEASTNodeArray *x2; void *x3; id x4; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x5; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x6; BOOL x7; BOOL x8; id x9; } *)a0;
- (void)appendNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0;
- (struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)arrayOrListNode:(struct TSCEParser { id x0; struct TSCELexer *x1; struct TSCEASTNodeArray *x2; void *x3; id x4; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x5; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x6; BOOL x7; BOOL x8; id x9; } *)a0;
- (struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)functionNode:(struct TSCEParser { id x0; struct TSCELexer *x1; struct TSCEASTNodeArray *x2; void *x3; id x4; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x5; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x6; BOOL x7; BOOL x8; id x9; } *)a0 functionName:(id)a1 whitespaceAfterLabel:(id)a2;
- (id)makeListWithFirstElem:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 trailingWhitespace:(id)a1 isArray:(BOOL)a2 parser:(struct TSCEParser { id x0; struct TSCELexer *x1; struct TSCEASTNodeArray *x2; void *x3; id x4; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x5; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x6; BOOL x7; BOOL x8; id x9; } *)a3;

@end
