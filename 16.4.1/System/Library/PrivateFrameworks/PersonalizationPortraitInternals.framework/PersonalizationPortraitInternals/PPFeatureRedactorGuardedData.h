@class NSDictionary;

@interface PPFeatureRedactorGuardedData : NSObject {
    NSDictionary *_allowedFeatures;
    BOOL _shouldRedactFeatures;
    BOOL _shouldTranslateAllowedFeatures;
}

- (void).cxx_destruct;

@end
