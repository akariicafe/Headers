@class NSString;

@interface HUDashboardFilterBarController : HUControllableItemCollectionViewController {
    void /* unknown type, empty encoding */ contextTypeDescriptionForAnalytics;
    void /* unknown type, empty encoding */ layoutConstraints;
    void /* unknown type, empty encoding */ $__lazy_storage_$_heightConstraint;
    void /* unknown type, empty encoding */ preferredHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_blurGroupingEffectView;
    void /* unknown type, empty encoding */ _layoutOptions;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, copy) NSString *contextTypeDescriptionForAnalytics;
@property (nonatomic, readonly) double intrinsicHeight;

- (void)resetAnimated:(BOOL)a0;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)viewLayoutMarginsDidChange;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (id)layoutSectionForSection:(long long)a0 layoutEnvironment:(id)a1;
- (BOOL)_hasTapActionForItem:(id)a0;
- (id)_performTapActionForItem:(id)a0 tappedArea:(id)a1;
- (BOOL)canReorderItemAtIndexPath:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)compositionalLayoutConfigurationForTraitCollection:(id)a0;
- (void)diffableDataItemManager:(id)a0 willUpdateItems:(id)a1 addItems:(id)a2 removeItems:(id)a3 isInitialLoad:(BOOL)a4;
- (id)initUsingCompositionalLayoutWithItemManager:(id)a0;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginLongPressPresentationWithContext:(id)a1;
- (id)reorderableItemListForSection:(long long)a0;
- (void)setReorderableItemList:(id)a0 forSection:(long long)a1;
- (void)updateWithContext:(id)a0 animated:(BOOL)a1;

@end
