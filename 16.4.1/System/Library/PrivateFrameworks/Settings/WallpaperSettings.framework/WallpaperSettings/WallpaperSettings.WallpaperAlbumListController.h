@interface WallpaperSettings.WallpaperAlbumListController : WallpaperAlbumListTableViewController <WKWallpaperBundleDownloadManagerDelegate>

- (id)initWithSpec:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithSpec:(id)a0 dataSourceManager:(id)a1;
- (void)downloadManagerDidEncounterNetworkConnectionError;

@end
