@class NSURL;

@interface RMResolvedFileAsset : RMResolvedAsset

@property (readonly, nonatomic) NSURL *downloadedURL;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 downloadedURL:(id)a1 error:(id)a2;

@end
