@class NSArray;

@interface GameCenterUI.GameLayerAchievementsViewController : UICollectionViewController {
    void /* unknown type, empty encoding */ bootstrapPresenter;
    void /* unknown type, empty encoding */ content;
    void /* unknown type, empty encoding */ statePresenter;
    void /* unknown type, empty encoding */ childPresenters;
    void /* unknown type, empty encoding */ theme;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ scrollDirection;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void)didReceiveMemoryWarning;
- (id)collectionView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)collectionView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (id)initWithCollectionViewLayout:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
