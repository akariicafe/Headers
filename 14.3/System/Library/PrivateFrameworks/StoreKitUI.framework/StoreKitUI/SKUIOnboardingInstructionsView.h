@class UILabel, NSMutableArray;

@interface SKUIOnboardingInstructionsView : UIView {
    NSMutableArray *_labelsStack;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic) UILabel *explanationLabel;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long contentPosition;

+ (id)titleAttributedStringWithString:(id)a0;
+ (id)explanationAttributedStringWithString:(id)a0;

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (id)_newTitleLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_newExplanationLabel;
- (void)pushLabelState;
- (void)popLabelState;
- (void)setContentPosition:(long long)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;

@end
