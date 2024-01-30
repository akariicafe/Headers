@interface PHAssetCurationUtilities : NSObject

+ (id)assetsShowcasingFoodWithoutFacesInAssets:(id)a0;
+ (BOOL)assetIsSafeForWidgetDisplay:(id)a0;
+ (double)NSFWGeneralConfidenceThresholdForSceneAnalysisVersion:(unsigned long long)a0;
+ (double)tabooEventConfidenceThresholdForIdentifier:(unsigned int)a0 forSceneAnalysisVersion:(unsigned long long)a1;
+ (BOOL)_isTabooEventIdentifier:(unsigned int)a0;
+ (double)_tabooVersion33ConfidenceThresholdForIdentifier:(unsigned int)a0;
+ (double)_tabooVersion50ConfidenceThresholdForIdentifier:(unsigned int)a0;

@end
