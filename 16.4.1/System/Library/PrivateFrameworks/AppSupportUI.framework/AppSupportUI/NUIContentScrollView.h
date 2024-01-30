@class UIView;

@interface NUIContentScrollView : UIScrollView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *documentView;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) BOOL canScrollDocumentViewHorizontally;
@property (nonatomic) BOOL canScrollDocumentViewVertically;

+ (BOOL)requiresConstraintBasedLayout;

- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (id)initWithContentView:(id)a0;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)viewForLastBaselineLayout;
- (void)layoutSubviews;
- (id)viewForFirstBaselineLayout;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)_layoutHeightDependsOnWidth;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (struct CGSize { double x0; double x1; })_finalSizeForTargetSize:(struct CGSize { double x0; double x1; })a0 resultSize:(struct CGSize { double x0; double x1; })a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (struct CGSize { double x0; double x1; })_measureSizeForTargetSize:(struct CGSize { double x0; double x1; })a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)initWithDocumentView:(id)a0;

@end
