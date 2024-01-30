@interface CRScriptCategoryV1 : CRScriptCategory

+ (id)supportedCategories;
+ (float)confidenceThreshold;
+ (unsigned long long)categoryRevision;
+ (id)sequenceScriptToScriptCategoryMapping;

@end
