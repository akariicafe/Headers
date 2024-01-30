@interface VNImageClassifier : NSObject

+ (BOOL)computeImageDescriptorsWithImage:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 usingDescriptorProcessor:(struct ImageDescriptorProcessorAbstract { void /* function */ **x0; } *)a2 tileCount:(int)a3 augmentationMode:(unsigned int)a4 scalingImage:(BOOL)a5 resultantDescriptorBuffer:(void *)a6 debugIntermediatesDumpPath:(id)a7 outputDebugDictionary:(id)a8 options:(id)a9 metalContext:(id)a10 canceller:(id)a11 error:(id *)a12;
+ (BOOL)computeLabelsAndConfidence:(void *)a0 usingDescriptorBuffer:(void *)a1 populateLabelsAndConfidence:(void *)a2 options:(id)a3 metalContext:(id)a4 error:(id *)a5;
+ (id)classifyImageWithDescriptors:(const void *)a0 usingImageClassifier:(void *)a1 andMinConfidenceForClassification:(float)a2 outputDebugDictionary:(id)a3 options:(id)a4 metalContext:(id)a5 error:(id *)a6;
+ (id)classifyImageHierarchicallyWithDescriptors:(const void *)a0 usingImageClassifier:(void *)a1 hierarchicalClassifier:(struct ImageClassifier_HierarchicalModel { struct ImageClassfier_Graph *x0; } *)a2 minimumClassificationConfidence:(float)a3 minimumClassificationConfidenceRatio:(float)a4 maximumLeafLabels:(unsigned long long)a5 maximumHierarchicalLabels:(unsigned long long)a6 outputDebugDictionary:(id)a7 options:(id)a8 metalContext:(id)a9 error:(id *)a10;

@end
