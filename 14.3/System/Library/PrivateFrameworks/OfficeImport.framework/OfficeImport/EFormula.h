@class NSString, EDFormula, EFTableData;
@protocol EFHelper;

@interface EFormula : NSObject {
    id<EFHelper> mHelper;
    struct EFLexer { void /* function */ **x0; char *x1; unsigned long long x2; int x3; int x4; int x5; int x6; int *x7; struct basic_istream<char, std::__1::char_traits<char> > *x8; struct basic_ostream<char, std::__1::char_traits<char> > *x9; char x10; unsigned long long x11; char *x12; int x13; int x14; int x15; unsigned long long x16; unsigned long long x17; struct yy_buffer_state **x18; int x19; char *x20; int *x21; int *x22; char *x23; int *x24; int x25; int x26; int x27; int x28; int x29; int x30; int x31; union YYSTYPE { struct EFRefTok { int x0; unsigned int x1; unsigned char x2[12]; } x0; id x1; unsigned long long x2; int x3; double x4; id x5; struct EFStrTok { id x0; int x1; union EFData { struct { unsigned long long x0; unsigned long long x1; BOOL x2; } x0; struct { unsigned long long x0; void *x1; } x1; struct { unsigned int x0; unsigned int x1; BOOL x2; BOOL x3; } x2; } x2; } x6; } x32; id x33; BOOL x34; char *x35; struct basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x36; struct basic_istream<char, std::__1::char_traits<char> > *x37; struct basic_ostream<char, std::__1::char_traits<char> > *x38; struct yy_buffer_state *x39; } *mYylex;
    Class mFormulaClass;
    EDFormula *mFormula;
    EFTableData *mTableData;
    NSString *mErrMsg;
}

+ (id)singletonEFormula;
+ (id)stringToFormula:(id)a0 formulaHelper:(id)a1 formulaClass:(Class)a2;

- (id)tableData;
- (void)setTableData:(id)a0;
- (void)dealloc;
- (unsigned long long)resolveName:(const char *)a0;
- (unsigned long long)resolveFirstSheet:(id)a0 lastSheet:(id)a1;
- (void)setFormula:(id)a0;
- (void)setFormulaClass:(Class)a0;
- (void)setFormulaHelper:(id)a0;
- (id)stringToTokens:(id)a0;
- (id)formulaHelper;
- (Class)formulaClass;
- (unsigned long long)resolveSheet:(const char *)a0 isCurrentSheet:(BOOL *)a1;
- (id)resolveTable:(const char *)a0 sheetIndex:(unsigned long long *)a1;

@end
