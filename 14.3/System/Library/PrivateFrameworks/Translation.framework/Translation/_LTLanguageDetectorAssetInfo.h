@class NSURL;

@interface _LTLanguageDetectorAssetInfo : NSObject {
    NSURL *_assetUrl;
    NSURL *_featureCombinationConfigUrl;
}

- (void).cxx_destruct;
- (id)initWithAssetUrl:(id)a0 featureCombinationAssetUrl:(id)a1;
- (id)languageDetectorModelURL;
- (id)featureCombinationConfigUrl;

@end
