@class NSURL;

@interface SNLPSSUMatcherDirectories : NSObject

@property (readonly) NSURL *cacheDirectoryURL;
@property (readonly) NSURL *modelAssetsDirectoryURL;
@property (readonly) NSURL *datasetAssetsDirectoryURL;

+ (id)directoriesWithCacheDirectoryURL:(id)a0 modelAssetsDirectoryURL:(id)a1 datasetAssetsDirectoryURL:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)initWithCacheDirectoryURL:(id)a0 modelAssetsDirectoryURL:(id)a1 datasetAssetsDirectoryURL:(id)a2;

@end
