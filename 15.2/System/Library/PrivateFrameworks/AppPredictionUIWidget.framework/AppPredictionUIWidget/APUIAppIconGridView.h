@class NSString, NSArray, APUIAppIconDataSource, SBIconListView, _UILegibilitySettings, APUIAppIconGridLayoutProvider, SBIconListModel, UILabel, SBReusableViewMap;
@protocol APUIAppIconGridViewDelegate;

@interface APUIAppIconGridView : UIView <SBIconViewProviding, SBIconViewDelegate, APUIAppIconDataSourceDelegate, SBIconListLayoutObserver, SBIconViewQuerying> {
    APUIAppIconDataSource *_dataSource;
    SBIconListView *_gridView;
    UILabel *_emptyStateLabel;
    SBIconListModel *_model;
    SBReusableViewMap *_reusableIconViewMap;
    APUIAppIconGridLayoutProvider *_layoutProvider;
}

@property (weak, nonatomic) id<APUIAppIconGridViewDelegate> delegate;
@property (copy, nonatomic) NSArray *bundleIds;
@property (nonatomic) BOOL shouldDisplayEmptyState;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, getter=isOccluded) BOOL occluded;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createDismissSuggestionApplicationShortcutItemWithType:(id)a0 localizedName:(id)a1;

- (id)firstIconViewForIcon:(id)a0 inLocations:(id)a1;
- (void)configureIconView:(id)a0 forIcon:(id)a1;
- (void)layoutSubviews;
- (void)iconTapped:(id)a0;
- (void)enumerateDisplayedIconViewsUsingBlock:(id /* block */)a0;
- (BOOL)isIconViewRecycled:(id)a0;
- (id)iconViewForIcon:(id)a0 location:(id)a1;
- (BOOL)isDisplayingIcon:(id)a0 inLocation:(id)a1;
- (void)enumerateDisplayedIconViewsForIcon:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)iconListView:(id)a0 didRemoveIconView:(id)a1;
- (id)firstIconViewForIcon:(id)a0;
- (BOOL)isDisplayingIconView:(id)a0;
- (void)iconListViewDidChangeBoundsSize:(id)a0;
- (BOOL)iconViewCanBeginDrags:(id)a0;
- (void)_significantTimeChange:(id)a0;
- (void)iconListView:(id)a0 didAddIconView:(id)a1;
- (id)dequeueReusableIconViewOfClass:(Class)a0;
- (void).cxx_destruct;
- (BOOL)isDisplayingIconView:(id)a0 inLocation:(id)a1;
- (id)firstIconViewForIcon:(id)a0 excludingLocations:(id)a1;
- (void)recycleIconView:(id)a0;
- (BOOL)isDisplayingIcon:(id)a0 inLocations:(id)a1;
- (BOOL)isDisplayingIcon:(id)a0;
- (BOOL)iconViewDisplaysBadges:(id)a0;
- (void)highlightIconForBundleId:(id)a0;
- (id)bundleIdAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_addGridView;
- (id)_emptyStateLabel;
- (double)_iconLabelAlphaForMode:(unsigned long long)a0;
- (void)_configureAliasingForIconView:(id)a0;
- (BOOL)appIconDataSource:(id)a0 launchAppFromIcon:(id)a1;

@end
