@class CAGradientLayer;

@interface NCGradientView : UIView {
    CAGradientLayer *_gradient;
    BOOL _isVertical;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithVerticalStartColor:(id)a0 verticalEndColor:(id)a1;
- (id)initWithHorizontalStartColor:(id)a0 horizontalEndColor:(id)a1;

@end
