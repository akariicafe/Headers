@class NSURL;

@interface _LTLanguageDetectorAssetInfo : NSObject {
    NSURL *_assetUrl;
    NSURL *_featureCombinationConfigUrl;
}

- (void).cxx_destruct;
- (id)languageDetectorModelURL;
- (id)featureCombinationConfigUrl;
- (id)initWithAssetUrl:(id)a0 featureCombinationAssetUrl:(id)a1;

@end
