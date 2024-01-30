@class _TtC12GameCenterUI22PlayerProfilePresenter;

@interface GameCenterUI.PlayerProfileViewController : GameCenterUI.BaseCollectionViewController <PSController> {
    void /* unknown type, empty encoding */ statePresenter;
    void /* unknown type, empty encoding */ collectionContent;
    void /* unknown type, empty encoding */ components;
    void /* unknown type, empty encoding */ clippingLayer;
    void /* unknown type, empty encoding */ startTime;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ bootstrapPresenter;
@property (nonatomic, readonly) _TtC12GameCenterUI22PlayerProfilePresenter *dataPresenter;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _rootController;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _specifier;

+ (void)showProfileFor:(id)a0 from:(id)a1 completion:(id /* block */)a2;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setSpecifier:(id)a0;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (id)readPreferenceValue:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (void)showController:(id)a0;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (id)specifier;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setParentController:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)rootController;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)parentController;
- (void)setRootController:(id)a0;
- (void)viewDidLoad;

@end
