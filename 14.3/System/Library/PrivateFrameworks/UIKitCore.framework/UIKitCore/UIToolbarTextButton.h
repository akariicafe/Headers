@class NSString, NSSet;

@interface UIToolbarTextButton : UIToolbarButton {
    NSString *_title;
    NSString *_pressedTitle;
    NSSet *_possibleTitles;
}

- (void)_setTitleTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (void)_UIAppearance_setTitleTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (id)initWithTitle:(id)a0 pressedTitle:(id)a1 withFont:(id)a2 withBarStyle:(long long)a3 withStyle:(long long)a4 withTitleWidth:(double)a5 possibleTitles:(id)a6 withToolbarTintColor:(id)a7;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_setPressed:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
