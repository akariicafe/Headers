@class NSString, NSMapTable;

@interface HUCollectionViewController : UICollectionViewController <HUResizableCellDelegate>

@property (retain, nonatomic) NSMapTable *installedChildViewControllersKeyedByCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0;
- (void)didUpdateRequiredHeightForCell:(id)a0;

@end
