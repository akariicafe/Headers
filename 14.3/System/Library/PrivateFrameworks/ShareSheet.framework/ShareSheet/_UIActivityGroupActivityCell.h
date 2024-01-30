@class UIImageView, _UIActivityGroupActivityCellTitleLabel, UIView, CALayer, _UIHostActivityProxy;

@interface _UIActivityGroupActivityCell : UICollectionViewCell

@property (retain, nonatomic) _UIActivityGroupActivityCellTitleLabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *imageSlot;
@property (retain, nonatomic) UIView *titleSlot;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIImageView *highlightedImageView;
@property (retain, nonatomic) CALayer *highlightLayer;
@property (nonatomic) unsigned long long sequence;
@property (retain, nonatomic) _UIHostActivityProxy *activityProxy;

+ (struct CGSize { double x0; double x1; })preferredSizeForSheetWidth:(double)a0 sizeCategory:(id)a1 titleLabelText:(id)a2 screenScale:(double)a3;
+ (void)invalidatePreferredSizes;

- (void).cxx_destruct;
- (void)initHighlightLayerIfNeeded;
- (void)initHighlightedImageViewIfNeeded;
- (void)updateHighlightedImageViewIfNeeded;
- (id)draggingView;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
