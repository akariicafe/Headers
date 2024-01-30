@interface SUViewControllerFactory : NSObject

- (id)newPlaceholderViewController;
- (id)newStorePageViewControllerWithSection:(id)a0;
- (id)newComposeReviewViewControllerWithCompositionURL:(id)a0;
- (id)newDownloadsViewController;
- (id)newNetworkLockoutViewControllerWithSection:(id)a0;
- (id)newViewControllerForPage:(id)a0 ofType:(long long)a1;
- (id)newViewControllerForTrackList:(id)a0;
- (id)newVolumeViewController;

@end
