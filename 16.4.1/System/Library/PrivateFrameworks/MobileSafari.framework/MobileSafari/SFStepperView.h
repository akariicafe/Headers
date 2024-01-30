@class NSMapTable, _SFDimmingButton, MTShadowView, UIView;

@interface SFStepperView : UIView {
    UIView *_controlsContainer;
    MTShadowView *_shadowView;
    NSMapTable *_buttonToLongestStringMap;
}

@property (readonly, nonatomic) _SFDimmingButton *incrementButton;
@property (readonly, nonatomic) _SFDimmingButton *decrementButton;
@property (readonly, nonatomic) _SFDimmingButton *resetButton;
@property (readonly, nonatomic) _SFDimmingButton *doneButton;

+ (id)_buttonsFont;

- (id)initWithCoder:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 includingResetButton:(BOOL)a1;
- (void)setLongestTitle:(id)a0 forButton:(id)a1;

@end
