@interface ATXHomeScreenSuggestionReceiver : NSObject <ATXHomeScreenSuggestionClientXPCInterface>

- (void)logWidgetAddedFeaturesInCoreAnalytics:(id)a0 rankOfWidgetInGallery:(unsigned long long)a1 galleryItems:(id)a2;

@end
