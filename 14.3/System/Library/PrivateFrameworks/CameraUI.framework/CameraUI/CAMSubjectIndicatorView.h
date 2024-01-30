@class UIImageView;

@interface CAMSubjectIndicatorView : UIView

@property (readonly, nonatomic) UIImageView *_imageView;
@property (nonatomic, getter=isInactive) BOOL inactive;
@property (nonatomic, getter=isPulsing) BOOL pulsing;

+ (struct CGSize { double x0; double x1; })fixedSize;
+ (struct CGSize { double x0; double x1; })_fixedSubjectIndicatorSizeForReferenceBounds:(struct CGSize { double x0; double x1; })a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)startScalingWithExpansionWidth:(double)a0 duration:(double)a1 repeatCount:(unsigned long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)startScalingWithExpansionWidth:(double)a0 duration:(double)a1 repeatCount:(unsigned long long)a2 timingFunction:(id)a3;
- (void)stopScalingWithDuration:(double)a0;

@end
