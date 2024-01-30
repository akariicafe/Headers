@interface NewsFeed.StubImageDownloader : NSObject <TSImageDownloaderType>

- (id)init;
- (void)downloadImageAndStoreFilePathInAssetHandle:(id)a0 usingDispatchGroup:(id)a1;

@end
