@class NSArray, NSURL;

@interface AXMMobileAssetEvaluationNode : AXMEvaluationNode {
    unsigned long long _formatVersion;
}

@property (readonly, nonatomic) NSArray *mlModels;
@property (readonly, nonatomic) NSURL *mobileAssetBaseURL;

- (id)initWithIdentifier:(id)a0;
- (unsigned long long)maxSupportedFormatVersion;
- (unsigned long long)minSupportedFormatVersion;
- (unsigned long long)formatVersion;
- (void).cxx_destruct;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)_downloadAssetsIfNecessary;
- (id)modelURLs;
- (id)mobileAssetType;
- (id)contentVersionKey;
- (id)modelResourceNames;
- (void)setModelURLs:(id)a0;
- (id)mlModelClasses;

@end
