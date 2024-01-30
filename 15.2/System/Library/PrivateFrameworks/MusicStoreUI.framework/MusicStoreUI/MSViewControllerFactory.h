@interface MSViewControllerFactory : SUViewControllerFactory

- (id)newPlaceholderViewController;
- (id)newViewControllerForPage:(id)a0 ofType:(long long)a1;
- (id)newNetworkLockoutViewControllerWithSection:(id)a0;
- (id)newDownloadsViewController;
- (id)newViewControllerForTrackList:(id)a0;
- (id)newVolumeViewController;
- (id)newDownloadManagerOptions;

@end
