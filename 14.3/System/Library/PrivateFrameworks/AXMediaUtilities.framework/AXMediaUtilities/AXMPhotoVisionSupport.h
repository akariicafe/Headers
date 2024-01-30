@interface AXMPhotoVisionSupport : NSObject

+ (id)leafNodeLabels;
+ (void)_addNode:(id)a0 toDescription:(id)a1 atLevel:(long long)a2;
+ (id)nonLeafNodeLabels;
+ (id)_collectLabelsIncludingLeafNodes:(BOOL)a0 nonLeafNodes:(BOOL)a1;
+ (id)_blacklistedVoiceOverClassificationLabels;
+ (BOOL)_validatePhotoVisionSoftLinkSymbols;
+ (id)buildTaxonomyDescription;
+ (id)buildParentChainDescriptionForAllNodes;
+ (id)buildGraphStatisticsDescription;
+ (id)processSceneClassifications:(id)a0 withOptions:(unsigned int)a1;
+ (id)localizedLabelForClassificationObservation:(id)a0;

@end
