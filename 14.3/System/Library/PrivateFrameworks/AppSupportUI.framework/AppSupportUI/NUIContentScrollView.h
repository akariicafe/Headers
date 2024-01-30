@class UIView;

@interface NUIContentScrollView : UIScrollView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *documentView;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) BOOL canScrollDocumentViewHorizontally;
@property (nonatomic) BOOL canScrollDocumentViewVertically;

+ (BOOL)requiresConstraintBasedLayout;

- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithContentView:(id)a0;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (void).cxx_destruct;
- (id)initWithDocumentView:(id)a0;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_layoutHeightDependsOnWidth;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
