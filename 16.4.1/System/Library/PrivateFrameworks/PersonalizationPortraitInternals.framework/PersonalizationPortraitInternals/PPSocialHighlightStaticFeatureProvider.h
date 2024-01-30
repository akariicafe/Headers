@class NSDictionary;

@interface PPSocialHighlightStaticFeatureProvider : NSObject <PPSocialHighlightFeatureProvider> {
    NSDictionary *_computedFeatures;
    id /* block */ _keyBlock;
}

- (id)valueForHighlight:(id)a0;
- (void).cxx_destruct;

@end
