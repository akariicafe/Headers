@interface SGExtractionModel : NSObject

+ (id)loadLazyPlistWithBasename:(id)a0;
+ (id)argMaxForLastOutput:(id)a0;
+ (id)argMaxForOutputIndex:(id)a0 index:(int)a1 shape:(id)a2;
+ (id)argMaxForSequence:(id)a0;
+ (void)cleanLegacyModelsDirectoryOfModelsNamed:(id)a0;
+ (void)cleanModelAssets;
+ (void)cleanModelsDirectoryOfModelsNamed:(id)a0;
+ (id)enrichTaggedCharacterRangesWithModelOutput:(id)a0 usingInputCharacterRanges:(id)a1;
+ (unsigned long long)featureDimensionForInputSection:(id)a0 forModel:(id)a1;
+ (id)inputDictFromTaggedCharacterRanges:(id)a0 usingTokenMapping:(id)a1 forModel:(id)a2;
+ (id)inputDictFromTaggedCharacterRanges:(id)a0 usingTokenMapping:(id)a1 forModel:(id)a2 pflTraining:(BOOL)a3 hasEvent:(BOOL)a4;
+ (id)modelOutputFromOutputMapping:(id)a0 modelOutput:(id)a1 modelInput:(id)a2;
+ (id)modelsDirectoryName;
+ (void)writeDummyRecordInStore;
+ (void)writeToBiomeStreamWithInput:(id)a0;

- (id)currentModelURLForModelName:(id)a0;

@end
