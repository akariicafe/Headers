@interface KNSlideNumberPlaceholderRep : KNPlaceholderRep

+ (id)mixableObjectClasses;

- (BOOL)canBeginEditingChildRepOnDoubleTap:(id)a0;
- (BOOL)canMakePathEditable;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint { double x0; double x1; })a0 withRecognizer:(id)a1;
- (BOOL)shouldBeginEditingOnSingleClick;
- (BOOL)wantsContextMenuWhenEditingDisabledAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
