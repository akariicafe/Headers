@class AVTUIAnimatingImageView, NSUUID, UIView;

@interface AVTSimpleAvatarPickerCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UIView *selectionLayer;
@property (readonly, nonatomic) AVTUIAnimatingImageView *imageView;
@property (retain, nonatomic) NSUUID *displaySessionUUID;
@property (nonatomic) unsigned long long imageInsetSize;
@property (nonatomic) BOOL showSelectedState;

+ (double)imageInsetForInsetSize:(unsigned long long)a0;
+ (id)cellIdentifier;
+ (struct CGPath { } *)selectionPathInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void).cxx_destruct;
- (void)updateSelectionLayerOpacityAnimated:(BOOL)a0;
- (BOOL)shouldShowSelectionLayer;
- (void)updateHighlightedState:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithImage:(id)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0;

@end
