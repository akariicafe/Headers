@interface CLKUICurvedLayoutManager : NSLayoutManager

- (id)init;
- (void)showCGGlyphs:(const unsigned short *)a0 positions:(const struct CGPoint { double x0; double x1; } *)a1 count:(long long)a2 font:(id)a3 textMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 attributes:(id)a5 inContext:(struct CGContext { } *)a6;

@end
