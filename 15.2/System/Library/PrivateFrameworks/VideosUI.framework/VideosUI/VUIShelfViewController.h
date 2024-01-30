@class VUIShelfView, NSString, UICollectionView, UIView, NSIndexPath;

@interface VUIShelfViewController : UIViewController <UICollectionViewDelegate, TVShelfViewLayoutDelegate> {
    BOOL _shouldUpdateBeforeLayout;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) VUIShelfView *containerView;
@property (retain, nonatomic) NSIndexPath *focusedIndexPath;
@property (retain, nonatomic) UIView *headerView;
@property (readonly, nonatomic) long long gridStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillLayoutSubviews;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithGridStyle:(long long)a0;
- (void)_ensureScrollViewSnaps;
- (id)_findSnappingItemFromContentOffset:(inout struct CGPoint { double x0; double x1; } *)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)_snapTargetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a0 toItemIndexPath:(id)a1 atItemOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)_updateCollectionViewLayout:(BOOL)a0;
- (void)updateContentOffsetWithTransitionCoordinator:(id)a0;

@end
