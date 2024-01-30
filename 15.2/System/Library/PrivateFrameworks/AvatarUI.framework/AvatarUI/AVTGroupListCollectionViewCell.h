@class NSString, UIVisualEffectView, UIImageView, UILabel;

@interface AVTGroupListCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UIVisualEffectView *visualEffectView;
@property (readonly, nonatomic) UILabel *label;
@property (readonly, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *symbolName;

+ (id)cellIdentifier;
+ (id)highlightedBackgroundColor;
+ (double)estimatedLabelWidthForContainerWidth:(double)a0;
+ (id)defaultSymbolImageName;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)setupContent;
- (double)estimatedLabelWidth;

@end
