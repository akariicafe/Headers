@interface PBTextBlock : NSObject

+ (void)readClientTextBox:(id)a0 textBody:(id)a1 state:(id)a2;
+ (void)applyTextRuler:(struct PptTextRulerAtom { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; void /* function */ **x3; int x4; BOOL x5; struct ChVector<PptTab> *x6; unsigned short x7[5]; unsigned short x8[5]; unsigned short x9; } *)a0 toTextBlock:(id)a1;
+ (void)readFromTextBlock:(id)a0 toStyledText:(struct __CFAttributedString { } *)a1;
+ (void)readFromStyledText:(struct __CFAttributedString { } *)a0 toStyledPargraphs:(struct __CFArray { } *)a1;
+ (void)readParagraph:(id)a0 paragraph:(struct __CFAttributedString { } *)a1 textType:(int)a2 state:(id)a3;

@end
