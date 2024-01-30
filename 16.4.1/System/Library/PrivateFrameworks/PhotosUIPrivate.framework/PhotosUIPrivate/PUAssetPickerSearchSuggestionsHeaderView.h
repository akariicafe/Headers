@class NSString, UICollectionView;
@protocol PUAssetPickerSearchSuggestionsSelectionDelegate;

@interface PUAssetPickerSearchSuggestionsHeaderView : UIView <UICollectionViewDelegate, SearchSuggestionsCollectionViewLayoutUpdatesDelegate>

@property (weak, nonatomic) id<PUAssetPickerSearchSuggestionsSelectionDelegate> suggestionsSelectionDelegate;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)didInvalidateLayout:(id)a0;
- (id)initWithCollectionView:(id)a0 dataSource:(id)a1;

@end
