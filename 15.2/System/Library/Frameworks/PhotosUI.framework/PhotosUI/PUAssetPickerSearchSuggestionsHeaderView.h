@class NSString, UICollectionView;
@protocol PUAssetPickerSearchSuggestionsSelectionDelegate;

@interface PUAssetPickerSearchSuggestionsHeaderView : UIView <UICollectionViewDelegate, SearchSuggestionsCollectionViewLayoutUpdatesDelegate>

@property (weak, nonatomic) id<PUAssetPickerSearchSuggestionsSelectionDelegate> suggestionsSelectionDelegate;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (void).cxx_destruct;
- (void)didInvalidateLayout:(id)a0;

@end
