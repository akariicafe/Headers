@class NSArray, NSURL;

@interface AXMMobileAssetEvaluationNode : AXMEvaluationNode

@property (readonly, nonatomic) NSArray *mlModels;
@property (readonly, nonatomic) NSURL *mobileAssetBaseURL;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)_downloadAssetsIfNecessary;
- (id)modelResourceNames;
- (id)mlModelClasses;
- (id)mobileAssetType;
- (void)setModelURLs:(id)a0;
- (unsigned long long)minSupportedFormatVersion;
- (unsigned long long)maxSupportedFormatVersion;
- (id)modelURLs;

@end
