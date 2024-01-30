@class _TtC12GameCenterUI18BaseSplitPresenter;

@interface GameCenterUI.PlayerProfileViewController : GameCenterUI.BaseSplitCollectionViewController <PSController> {
    void /* unknown type, empty encoding */ profilePresenter;
    void /* unknown type, empty encoding */ clippingLayer;
    void /* unknown type, empty encoding */ startTime;
    void /* unknown type, empty encoding */ friendSuggestionsSectionFocusGuide;
}

@property (nonatomic, retain) _TtC12GameCenterUI18BaseSplitPresenter *dataPresenter;
@property (nonatomic, readonly) BOOL shouldDisplayInSplitView;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _rootController;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _specifier;

+ (void)showProfileFor:(id)a0 from:(id)a1 completion:(id /* block */)a2;

- (void)loadMoreWithContinuationToken:(id)a0;
- (void)scrollToTopActionTriggered;
- (void)setSpecifier:(id)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (id)parentController;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setRootController:(id)a0;
- (id)rootController;
- (id)specifier;
- (id)contentScrollView;
- (void)viewDidLoad;
- (void)setParentController:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)showController:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)donePressed:(id)a0;
- (void)mainSecondaryCollectionViewLayout;

@end
