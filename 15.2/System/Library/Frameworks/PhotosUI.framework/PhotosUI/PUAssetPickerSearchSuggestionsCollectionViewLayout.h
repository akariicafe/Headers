@protocol SearchSuggestionsCollectionViewLayoutUpdatesDelegate;

@interface PUAssetPickerSearchSuggestionsCollectionViewLayout : UICollectionViewCompositionalLayout

@property (weak, nonatomic) id<SearchSuggestionsCollectionViewLayoutUpdatesDelegate> layoutUpdatesDelegate;

- (void)invalidateLayout;
- (void).cxx_destruct;

@end
