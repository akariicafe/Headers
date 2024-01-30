@class NSURL, NSArray;

@interface SSUMatcherBuildParams : NSObject

@property (readonly) NSURL *modelAssetsDirectoryURL;
@property (readonly) NSURL *datasetAssetsDirectoryURL;
@property (readonly) NSURL *cacheDirectoryURL;
@property (readonly) NSArray *initialApplicationInfos;
@property (readonly) BOOL initializeModelsPreemptively;

- (void).cxx_destruct;
- (id)initWithModelAssetsDirectoryURL:(id)a0 datasetAssetsDirectoryURL:(id)a1 cacheDirectoryURL:(id)a2 initialApplicationInfos:(id)a3 initializeModelsPreemptively:(BOOL)a4;

@end
