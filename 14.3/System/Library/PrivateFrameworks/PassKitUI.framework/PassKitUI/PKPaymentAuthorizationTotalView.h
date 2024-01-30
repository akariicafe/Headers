@class PKPaymentAuthorizationLayout, UIActivityIndicatorView, UILabel, UIView, NSLayoutConstraint;

@interface PKPaymentAuthorizationTotalView : UIView {
    UILabel *_labelView;
    UILabel *_valueView;
    UIActivityIndicatorView *_processingIndicator;
    UIView *_separatorView;
    NSLayoutConstraint *_leftMarginConstraint;
    NSLayoutConstraint *_rightMarginConstraint;
    NSLayoutConstraint *_labelBaselineConstraint;
    NSLayoutConstraint *_valueBaselineConstraint;
    NSLayoutConstraint *_labelValueRelationConstraint;
    NSLayoutConstraint *_valueBaselineLargeTextConstraint;
    NSLayoutConstraint *_labelValueRelationLargeTextConstraint;
    NSLayoutConstraint *_rightMarginLargeTextConstraint;
}

@property (retain, nonatomic) PKPaymentAuthorizationLayout *layout;
@property (nonatomic) long long style;
@property (nonatomic) BOOL isPendingTotal;
@property (nonatomic, getter=isProcessing) BOOL processing;
@property (nonatomic) long long labelNumberOfLines;
@property (nonatomic) BOOL showsBoldValueText;

- (void)_prepareConstraints;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateConstraints;
- (void)_createSubviews;
- (BOOL)_shouldUseLargeTextLayout;
- (id)_labelAttributedStringWithString:(id)a0;
- (id)_valueAttributedStringWithString:(id)a0;
- (double)_initialLeading;
- (void)setLabel:(id)a0 value:(id)a1;

@end
