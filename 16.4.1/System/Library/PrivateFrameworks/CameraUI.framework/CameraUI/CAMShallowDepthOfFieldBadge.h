@class CEKBadgeTextView;

@interface CAMShallowDepthOfFieldBadge : UIView

@property (readonly, nonatomic) CEKBadgeTextView *_enabledTextView;
@property (readonly, nonatomic) CEKBadgeTextView *_disabledTextView;
@property (nonatomic) long long shallowDepthOfFieldStatus;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateForShallowDepthOfFieldStatusAnimated:(BOOL)a0;
- (void)setShallowDepthOfFieldStatus:(long long)a0 animated:(BOOL)a1;

@end
