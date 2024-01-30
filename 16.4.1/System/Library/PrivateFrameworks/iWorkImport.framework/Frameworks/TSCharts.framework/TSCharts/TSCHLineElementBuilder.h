@interface TSCHLineElementBuilder : TSCHScatterElementBuilder

- (struct CGPoint { double x0; double x1; })labelPointForPosition:(unsigned int)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 stringSize:(struct CGSize { double x0; double x1; })a2 symbolType:(int)a3;
- (BOOL)needsSeparateHitTestingPaths;
- (void)p_addKnobsForPoint:(struct CGPoint { double x0; double x1; })a0 strokedUnitSymbolRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toKnobSet:(id)a2 symbolsShowing:(BOOL)a3 includePoint:(BOOL)a4;

@end
