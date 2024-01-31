@interface AVAssetDownloadURLSession : NSURLSession

+ (id)sessionWithConfiguration:(id)a0 assetDownloadDelegate:(id)a1 delegateQueue:(id)a2;

- (id)aggregateAssetDownloadTaskWithURLAsset:(id)a0 mediaSelections:(id)a1 assetTitle:(id)a2 assetArtworkData:(id)a3 options:(id)a4;
- (id)assetDownloadTaskWithConfiguration:(id)a0;
- (id)assetDownloadTaskWithURLAsset:(id)a0 assetTitle:(id)a1 assetArtworkData:(id)a2 options:(id)a3;
- (id)assetDownloadTaskWithURLAsset:(id)a0 destinationURL:(id)a1 options:(id)a2;

@end
