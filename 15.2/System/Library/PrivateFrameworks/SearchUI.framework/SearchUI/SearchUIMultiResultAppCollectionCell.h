@class SearchUIHomeScreenAppIconView;

@interface SearchUIMultiResultAppCollectionCell : UICollectionViewCell

@property (retain) SearchUIHomeScreenAppIconView *appIconView;

- (void)layoutSubviews;
- (long long)_focusItemDeferralMode;
- (void).cxx_destruct;
- (void)updateWithResult:(id)a0;
- (void)prepareForReuse;
- (BOOL)_disableRasterizeInAnimations;

@end
