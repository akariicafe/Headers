@class UIView;

@interface CEKWheelScrubberViewCell : UICollectionViewCell

@property (readonly, nonatomic) UIView *_selectionDotView;
@property (readonly, nonatomic) UIView *_clippingView;
@property (readonly, nonatomic) UIView *itemView;
@property (nonatomic) double selectionDotCenterTopSpacing;
@property (nonatomic) long long dotPlacement;

+ (struct CGSize { double x0; double x1; })_defaultContentSize;
+ (struct CGSize { double x0; double x1; })defaultSize;
+ (double)borderInsetWidth;
+ (struct CGSize { double x0; double x1; })screenScaleContentSize;

- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)_selectionDotDiameter;
- (void)_updateSelectionDot;

@end
