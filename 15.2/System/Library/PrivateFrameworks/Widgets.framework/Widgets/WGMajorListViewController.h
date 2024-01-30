@class WGWidgetListHeaderView, NSString, WGWidgetListFooterView, NSArray, UIView, UIViewController;
@protocol WGMajorListViewControllerDelegate;

@interface WGMajorListViewController : WGWidgetListViewController <WGWidgetListFooterViewDelegate, WGWidgetIconAnimationExtraViewsProviding>

@property (nonatomic, getter=_isFooterVisible, setter=_setFooterVisible:) BOOL _footerVisible;
@property (weak, nonatomic) id<WGMajorListViewControllerDelegate> delegate;
@property (weak, nonatomic) UIView *containerView;
@property (readonly, nonatomic) WGWidgetListFooterView *footerView;
@property (retain, nonatomic) UIViewController *headerContentViewController;
@property (readonly, nonatomic) WGWidgetListHeaderView *headerView;
@property (nonatomic, getter=isHeaderVisible) BOOL headerVisible;
@property (readonly, nonatomic) BOOL hasWidget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *extraViewsContainers;
@property (readonly, copy, nonatomic) NSArray *extraViews;
@property (readonly, nonatomic) BOOL shouldAnimateLastTwoViewsAsOne;
@property (readonly, nonatomic) BOOL shouldAnimateFirstTwoViewsAsOne;

- (void)_insertHeaderView;
- (void)enumerateWidgetWrapperViewsUsingBlock:(id /* block */)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (unsigned long long)_insertionIndexofListItem:(id)a0 intoWidgetViews:(id)a1 withOrderedIdentifiers:(id)a2;
- (void)_updateFooterVisibility;
- (BOOL)_canShowWhileLocked;
- (void)_configureStackView;
- (void)_updateEditButtonVisibilityAnimated:(BOOL)a0;
- (void)widgetListFooterViewAvailableNewWidgetsUpdated:(id)a0;
- (void)setEditingIcons:(BOOL)a0;
- (void)widgetDiscoveryController:(id)a0 widgetWithIdentifier:(id)a1 shouldBecomeVisibleInGroup:(id)a2;
- (id)_group;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_updateFooterViewShouldBlurContent;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)extraViewsContainer;
- (void)invalidateVisibleWidgets;
- (void)editButtonTapped:(id)a0;
- (void)widgetDiscoveryController:(id)a0 widgetWithIdentifier:(id)a1 shouldBecomeHiddenInGroup:(id)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)_updateHeaderVisibility;
- (void)_repopulateStackViewWithWidgetIdentifiers:(id)a0;
- (id)editingMaterialViewForWidgetListFooterView:(id)a0;
- (void)presentEditView:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setShouldBlurContent:(BOOL)a0;

@end
