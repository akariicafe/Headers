@interface AXMPhotoVisionSupport : NSObject

+ (id)_deniedVoiceOverObjectClassificationLabels;
+ (id)_deniedVoiceOverSceneClassificationLabels;
+ (id)axmTaxonomyNodeForSceneTaxonomyNode:(id)a0;
+ (BOOL)axmIsSceneClassId:(unsigned int)a0 childOfSceneClassId:(unsigned int)a1;
+ (void)_addNode:(id)a0 toDescription:(id)a1 atLevel:(long long)a2;
+ (id)leafNodeLabels;
+ (id)nonLeafNodeLabels;
+ (id)_collectLabelsIncludingLeafNodes:(BOOL)a0 nonLeafNodes:(BOOL)a1;
+ (id)processSceneClassifications:(id)a0 withOptions:(unsigned int)a1;
+ (id)localizedLabelForClassificationObservation:(id)a0;
+ (id)axmTaxonomyNodeForObjectObservation:(id)a0;
+ (id)findLeastCommonAncestorForSceneClassIds:(id)a0 withKnownAncestorSceneClassId:(unsigned int)a1;
+ (BOOL)_validatePhotosFormatSoftLinkSymbols;
+ (id)buildTaxonomyDescription;
+ (id)buildParentChainDescriptionForAllNodes;
+ (id)buildGraphStatisticsDescription;

@end
