@interface MTFrontendSimple : NSEnumerator

@property struct MTFEBuilder { void /* function */ **x0; struct SLLexer *x1; struct MTFESentence *x2; struct MTFEIntonationalPhrase *x3; struct MTFEIntermediatePhrase *x4; struct MTFEWord *x5; struct MTFEHomograph *x6; struct MTFEPhoneme *x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; float x15; float x16; float x17; unsigned int x18; struct SLToken *x19; short x20; } *builder;
@property struct SLLexer { void /* function */ **x0; } *fLexer;
@property struct SLDictLookup { void /* function */ **x0; struct SLDictionary *x1; struct SLDictionary *x2; struct SLDictionary *x3; struct SLAgglomerate *x4; } *fDictLookup;
@property struct SLPronouncer { void /* function */ **x0; } *fPronouncer;
@property struct SLCFStringTextSource { void /* function */ **x0; BOOL x1; long long x2; struct __CFString *x3; unsigned short x4[129]; } *fTextSource;

- (id)nextObject;
- (id)initWithString:(id)a0;
- (void)dealloc;
- (id)initWithStringAndLocale:(id)a0 locale:(id)a1;

@end
