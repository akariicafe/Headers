@class UIImageView, UIImage;

@interface PUReviewScrubberCell : UICollectionViewCell

@property (readonly, nonatomic) UIImageView *_thumbnailImageView;
@property (readonly, nonatomic) UIImageView *_checkmarkImageView;
@property (readonly, nonatomic) UIImageView *_suggestedImageView;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (nonatomic, getter=isSuggested) BOOL suggested;
@property (nonatomic) BOOL wantsSmallSuggestionIndicators;

- (void).cxx_destruct;
- (void)setFavorite:(BOOL)a0 animated:(BOOL)a1;
- (void)_commonPUReviewScrubberCellInitialization;
- (void)setSuggested:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateThumbnailImageView;
- (void)_updateFavoriteView;
- (void)_updateSuggestedView;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
