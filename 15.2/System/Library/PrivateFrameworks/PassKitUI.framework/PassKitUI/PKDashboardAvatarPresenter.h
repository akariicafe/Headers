@class NSString, PKAvatarHeaderView, PKContactAvatarManager;

@interface PKDashboardAvatarPresenter : NSObject <PKDashboardItemPresenter> {
    PKAvatarHeaderView *_sampleView;
    PKContactAvatarManager *_avatarManager;
    struct CGSize { double width; double height; } _viewSize;
    BOOL _needsSizing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (Class)itemClass;
- (id)collectionViewCellClasses;
- (id)cellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;
- (void)didSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2 navigationController:(id)a3 canPresent:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)traitCollectionDidChangeFromTrait:(id)a0 toTrait:(id)a1 inCollectionView:(id)a2;
- (id)initWithAvatarManager:(id)a0;
- (void)swapSummaryInCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;
- (void)_configureView:(id)a0 item:(id)a1;
- (id)_contactForItem:(id)a0;

@end
