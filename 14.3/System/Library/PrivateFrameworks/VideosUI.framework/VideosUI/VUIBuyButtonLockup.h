@class UIButton, UILabel, NSLayoutConstraint;

@interface VUIBuyButtonLockup : VUIUIStackView {
    UILabel *_iAPLabel;
    NSLayoutConstraint *_buttonHeightConstraint;
    long long _lastOrientation;
}

@property (retain, nonatomic) UIButton *button;
@property (nonatomic) BOOL hasIAP;

- (void)_contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateForPreferredContentSize;
- (BOOL)_isLargeContentSize;

@end
