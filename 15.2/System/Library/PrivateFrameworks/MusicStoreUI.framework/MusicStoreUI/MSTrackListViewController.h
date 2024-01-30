@class NSString, MSTrackListHeaderView;

@interface MSTrackListViewController : MSStructuredPageViewController <MSTrackListHeaderDelegate> {
    MSTrackListHeaderView *_headerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (id)init;
- (void)_reloadHeaderView;
- (void)dealloc;
- (void)_restrictionsChangedNotification:(id)a0;
- (void)operation:(id)a0 finishedWithOutput:(id)a1;
- (id)newTermsAndConditionsFooter;
- (void)_webViewsLoaded:(id)a0;
- (void)_reloadFooterView;
- (void)_delayedReloadForWebViews;
- (id)_headerArtworkItemImage;
- (id)_newImageDataProvider;
- (id)_newPlaceholderImage;
- (id)_headerArtworkImage;
- (id)purchasableItemsForHeaderView:(id)a0;

@end
