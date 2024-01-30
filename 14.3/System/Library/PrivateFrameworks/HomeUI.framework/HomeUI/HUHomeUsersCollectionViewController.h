@class HFHomeBuilder, NSString;

@interface HUHomeUsersCollectionViewController : HUItemCollectionViewController <UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) HFHomeBuilder *homeBuilder;
@property (nonatomic) double cellWidth;
@property (nonatomic) double cellAvatarDiameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (double)_horizontalInset;
- (double)_verticalInset;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)viewWillLayoutSubviews;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)_presentAccountUnavailableAlert;
- (id)initWithHomeBuilder:(id)a0;
- (BOOL)isLayoutDependentOnItemState;

@end
