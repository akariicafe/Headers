@class UIImageView, UIView;

@interface CEKSubjectIndicatorView : UIView

@property (readonly, nonatomic) UIImageView *_topLeftCornerView;
@property (readonly, nonatomic) UIImageView *_topRightCornerView;
@property (readonly, nonatomic) UIImageView *_bottomLeftCornerView;
@property (readonly, nonatomic) UIImageView *_bottomRightCornerView;
@property (readonly, nonatomic) UIImageView *_fullSizeIndicatorView;
@property (readonly, nonatomic) UIView *_containerView;
@property (nonatomic, getter=isInactive) BOOL inactive;
@property (nonatomic) long long shape;
@property (nonatomic, getter=isPulsing) BOOL pulsing;

+ (struct CGSize { double x0; double x1; })_fixedSubjectIndicatorSizeForReferenceBounds:(struct CGSize { double x0; double x1; })a0 withScale:(double)a1;
+ (struct CGSize { double x0; double x1; })fixedSizeWithScale:(double)a0;

- (void)startScalingWithExpansionWidth:(double)a0 duration:(double)a1 repeatCount:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setShape:(long long)a0 animated:(BOOL)a1;
- (void)startScalingWithExpansionWidth:(double)a0 duration:(double)a1 repeatCount:(unsigned long long)a2 timingFunction:(id)a3;
- (void)stopScalingWithDuration:(double)a0;

@end
