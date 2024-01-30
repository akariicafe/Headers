@interface _CNAtomFieldEditor : UITextView

- (id)selectionRectsForRange:(id)a0;
- (void)cut:(id)a0;
- (id)_hostView;
- (id)_textInputTraits;
- (void)paste:(id)a0;
- (id)textInputTraits;
- (void)_define:(id)a0;
- (void)_lookup:(id)a0;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)copy:(id)a0;
- (void)_share:(id)a0;
- (id)undoManager;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForScrollToVisible:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (id)_enclosingScrollView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertGlyphRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
