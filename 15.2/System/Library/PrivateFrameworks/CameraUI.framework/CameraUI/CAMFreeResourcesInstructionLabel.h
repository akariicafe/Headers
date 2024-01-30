@interface CAMFreeResourcesInstructionLabel : CAMInstructionLabel

@property (nonatomic) unsigned long long freeResourceInstructionState;

- (void)_updateText;
- (id)_textColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)_backgroundAlpha;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_textInsets;
- (id)_symbolSuffixName;
- (BOOL)_wantsPrefixActivityIndicatorView;

@end
