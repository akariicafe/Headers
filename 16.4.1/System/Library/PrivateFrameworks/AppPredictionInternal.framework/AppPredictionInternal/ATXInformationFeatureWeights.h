@class NSDictionary;

@interface ATXInformationFeatureWeights : NSObject {
    NSDictionary *_weights;
}

- (id)widgetIdentifierForWidgetExtensionBundleId:(id)a0 widgetKind:(id)a1;
- (double)weightForFeatureName:(unsigned long long)a0 widgetExtensionBundleId:(id)a1 widgetKind:(id)a2;
- (double)defaultWeightForFeatureName:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
