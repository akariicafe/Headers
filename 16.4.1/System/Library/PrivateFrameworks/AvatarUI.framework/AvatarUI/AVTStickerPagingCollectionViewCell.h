@class UIView;

@interface AVTStickerPagingCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *pageContentView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } additionalContentInsets;

+ (id)cellIdentifier;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
