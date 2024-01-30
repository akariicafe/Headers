@interface PBHeadersFooters : NSObject

+ (void)addCopyOfHeaderFooterPlaceholderOfType:(int)a0 toDrawables:(id)a1 slideBase:(id)a2 headersFootersContainer:(id)a3 state:(id)a4;
+ (struct PptHeadersFootersAtom { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; void /* function */ **x3; int x4; BOOL x5; int x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; } *)headersFootersAtomWithHeadersFootersContainer:(id)a0;
+ (id)headersFootersContainerWithSlideContainer:(id)a0 state:(id)a1;
+ (void)readHeaderFooterTextFromHeadersFootersContainer:(id)a0 toPlaceholderShape:(id)a1;
+ (void)readHeadersFootersFromSlideContainer:(id)a0 toMasterSlide:(id)a1 drawables:(id)a2 state:(id)a3;
+ (void)readHeadersFootersFromSlideContainer:(id)a0 toSlide:(id)a1 drawables:(id)a2 state:(id)a3;
+ (void)readHeadersFootersToSlideLayout:(id)a0 drawables:(id)a1 state:(id)a2;

@end
