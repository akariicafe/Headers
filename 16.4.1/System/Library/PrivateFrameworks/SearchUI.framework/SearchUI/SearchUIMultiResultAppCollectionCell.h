@class SearchUIHomeScreenAppIconView;

@interface SearchUIMultiResultAppCollectionCell : UICollectionViewCell

@property (retain) SearchUIHomeScreenAppIconView *appIconView;

- (void)updateWithResult:(id)a0;
- (void)prepareForReuse;
- (long long)_focusItemDeferralMode;
- (void)layoutSubviews;
- (BOOL)_disableRasterizeInAnimations;
- (void).cxx_destruct;

@end
