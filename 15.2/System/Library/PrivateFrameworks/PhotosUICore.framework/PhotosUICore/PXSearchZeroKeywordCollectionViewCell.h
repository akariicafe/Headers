@class UIImageView, PXLayoutMetricInterpolator, UILabel, PXRoundedCornerOverlayView;

@interface PXSearchZeroKeywordCollectionViewCell : UICollectionViewCell

@property (class, readonly, nonatomic) PXLayoutMetricInterpolator *thumbnailWidthInterpolator;
@property (class, readonly, nonatomic) double verticalSpacing;

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) PXRoundedCornerOverlayView *imageCornerOverlayView;

+ (struct CGSize { double x0; double x1; })thumbnailSize;
+ (id)reuseIdentifier;
+ (struct CGSize { double x0; double x1; })thumbnailSizeForAccessibilityTextUsingCollectionInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 cellSpacing:(double)a1 screenWidth:(double)a2;
+ (struct CGSize { double x0; double x1; })cellSizeWithTextLabelNumberOfLines:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })cellSizeForAccessibilityTextWithTextLabelNumberOfLines:(unsigned long long)a0 collectionInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 collectionCellSpacing:(double)a2 screenWidth:(double)a3;
+ (struct CGSize { double x0; double x1; })cellSizeWithoutTextLabel;
+ (struct CGSize { double x0; double x1; })cellSizeForAccessibilityTextWithoutTextLabelUsingCollectionInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 collectionCellSpacing:(double)a1 screenWidth:(double)a2;
+ (id)attributedStringForCellLabelWithString:(id)a0;
+ (BOOL)cellLabelTextNeedsMultipleLines:(id)a0 cellWidth:(double)a1;
+ (double)expectedNumberOfCellsVisibleWithAccessibilityText:(BOOL)a0 withInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 cellSpacing:(double)a2 screenWidth:(double)a3;
+ (struct CGSize { double x0; double x1; })_thumbnailSizeWithMetric:(double)a0;
+ (double)_calculateHeightNeededForTextLabelWithNumberOfLines:(unsigned long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)focusEffect;

@end
