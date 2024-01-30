@interface SGExtractionModel : NSObject

+ (id)loadLazyPlistWithBasename:(id)a0;
+ (id)inputDictFromTaggedCharacterRanges:(id)a0 usingTokenMapping:(id)a1 forModel:(id)a2;
+ (unsigned long long)featureDimensionForInputSection:(id)a0 forModel:(id)a1;
+ (id)modelOutputFromOutputMapping:(id)a0 modelOutput:(id)a1 modelInput:(id)a2;
+ (id)argMaxForSequence:(id)a0;
+ (id)argMaxForLastOutput:(id)a0;
+ (id)argMaxForOutputIndex:(id)a0 index:(int)a1 shape:(id)a2;
+ (id)enrichTaggedCharacterRangesWithModelOutput:(id)a0 usingInputCharacterRanges:(id)a1;
+ (void)cleanModelAssets;
+ (void)cleanModelsDirectoryOfModelsNamed:(id)a0;
+ (void)cleanLegacyModelsDirectoryOfModelsNamed:(id)a0;
+ (id)modelsDirectoryName;

- (id)currentModelURLForModelName:(id)a0;

@end
