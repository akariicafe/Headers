@class UILabel, NSMutableArray, UIImageView;

@interface SetupView : UIView {
    UILabel *_title;
    NSMutableArray *_setupSteps;
    UIImageView *_icon;
    long long _layoutDirection;
}

- (id)icon;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setIcon:(id)a0;
- (id)title;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)addStep:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 shouldSetSize:(BOOL)a1;
- (id)_preferenceLabelWithText:(id)a0;

@end
