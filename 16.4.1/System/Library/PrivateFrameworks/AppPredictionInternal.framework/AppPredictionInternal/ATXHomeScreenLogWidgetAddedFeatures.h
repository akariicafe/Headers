@class ATXHomeScreenEvent, NSMutableDictionary, NSArray;

@interface ATXHomeScreenLogWidgetAddedFeatures : NSObject {
    NSMutableDictionary *_widgetAddedFeatures;
    ATXHomeScreenEvent *_hsEvent;
    unsigned long long _rankOfWidgetInGallery;
    NSArray *_galleryItems;
}

- (void).cxx_destruct;
- (void)_populateFeaturesForAddedWidget;
- (id)_key:(id)a0 byAppendingStringIndicatingIfWidgetWasAdded:(BOOL)a1;
- (id)_pickIndexForNegativeExampleFromGalleryItems;
- (void)_populateFeaturesForNegativeExample;
- (void)_populateHomeScreenConfigFeaturesForWidgetBundleId:(id)a0 widgetKind:(id)a1 parentAppBundleId:(id)a2 widgetWasAdded:(BOOL)a3;
- (void)_populateParentAppFeaturesForParentAppBundleId:(id)a0 widgetWasAdded:(BOOL)a1;
- (void)_sendToCoreAnalytics;
- (id)initWithHSEvent:(id)a0 rankOfWidgetInGallery:(unsigned long long)a1 galleryItems:(id)a2;
- (void)logWidgetAddedFeaturesInCoreAnalytics;

@end
