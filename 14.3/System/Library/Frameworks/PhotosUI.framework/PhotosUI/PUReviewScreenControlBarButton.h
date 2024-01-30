@interface PUReviewScreenControlBarButton : UIButton

@property (nonatomic) BOOL useCompactSize;

- (double)_padding;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (double)_selectedIndicatorAlpha;

@end
