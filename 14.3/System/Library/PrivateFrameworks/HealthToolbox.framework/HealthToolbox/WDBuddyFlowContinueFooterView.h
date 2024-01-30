@class UIButton, NSLayoutConstraint;

@interface WDBuddyFlowContinueFooterView : UIView {
    double _width;
    double _bottomInset;
    NSLayoutConstraint *_continueButtonBaselineConstraint;
    NSLayoutConstraint *_continueButtonBaselineToBottomConstraint;
}

@property (retain, nonatomic) UIButton *continueButton;

- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1 bottomInset:(double)a2 width:(double)a3;
- (void)traitCollectionDidChange:(id)a0;

@end
