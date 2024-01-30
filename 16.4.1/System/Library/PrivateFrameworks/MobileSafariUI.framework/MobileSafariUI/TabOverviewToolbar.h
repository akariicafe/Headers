@class NSString, UIVisualEffectView, NSMutableDictionary, UIView, UISearchBar, BarButton;

@interface TabOverviewToolbar : UIView <SFCapsuleCollectionViewToolbarContentProviding> {
    BarButton *_addTabButton;
    UIVisualEffectView *_background;
    NSMutableDictionary *_barButtonTitles;
    BarButton *_cancelSearchButton;
    UIView *_contentContainer;
    BarButton *_doneButton;
    BOOL _needsResizeItems;
    double _searchBarMinimumWidth;
    BarButton *_sidebarButton;
    BarButton *_tabGroupButton;
    double _tabGroupButtonPreferredWidth;
    UIView *_toolbarSeparator;
}

@property (readonly, nonatomic) BOOL contentBorrowed;
@property (nonatomic) long long placement;
@property (nonatomic) double searchBarLeadingMargin;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (nonatomic) BOOL shouldReserveSpaceForSidebarButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (double)capsuleCollectionView:(id)a0 heightForToolbarContentView:(id)a1;
- (void)capsuleCollectionView:(id)a0 relinquishToolbarContentView:(id)a1;
- (id)toolbarContentViewForCapsuleCollectionView:(id)a0;
- (id)_buttonForBarButton:(long long)a0;
- (BOOL)_canDisplaySearchBarAndSidebarButton;
- (void)_layoutForBottomPlacement;
- (void)_layoutForTopPlacement;
- (void)_resizeItemsIfNeeded;
- (void)addInteraction:(id)a0 toBarButton:(long long)a1;
- (void)addPrimaryAction:(id)a0 forBarButton:(long long)a1;
- (BOOL)barButtonIsEnabled:(long long)a0;
- (BOOL)barButtonIsHidden:(long long)a0;
- (id)menuForBarButton:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForBarButton:(long long)a0;
- (void)removeInteraction:(id)a0 fromBarButton:(long long)a1;
- (void)removePrimaryAction:(id)a0 forBarButton:(long long)a1;
- (id)resolvedTintColorForBarButton:(long long)a0;
- (void)setBarButton:(long long)a0 enabled:(BOOL)a1;
- (void)setBarButton:(long long)a0 hidden:(BOOL)a1;
- (void)setMenu:(id)a0 forBarButton:(long long)a1;
- (void)setShowingSearchCancelButton:(BOOL)a0 animated:(BOOL)a1;
- (void)setTitle:(id)a0 forBarButton:(long long)a1;
- (id)snapshotBarContentsAfterScreenUpdates:(BOOL)a0;
- (id)titleForBarButton:(long long)a0;

@end
