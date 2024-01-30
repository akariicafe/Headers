@class NSString, NSDictionary, NSURL, RMAsset;

@interface RMUnresolvedFileAsset : NSObject <RMUnresolvedAsset>

@property (retain, nonatomic) RMAsset *asset;
@property (copy, nonatomic) NSDictionary *queryParameters;
@property (retain, nonatomic) NSURL *downloadToFileURL;
@property (readonly, copy, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (void)resolveWithAssetResolver:(id)a0 statusUpdater:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithAsset:(id)a0 queryParameters:(id)a1 downloadToFileURL:(id)a2;

@end
