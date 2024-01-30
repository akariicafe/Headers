@interface SNMLModelFactory : NSObject

+ (id)sharedLockedVGGishFeatureExtractor;
+ (id)sharedLockedVGGishNeuralNetDetectorHeadWithSoundIdentifier:(id)a0;
+ (id)sharedLockedSoundPrint100kFeatureExtractor;
+ (id)sharedLockedSoundPrint100kNeuralNetDetectorHeadWithSoundIdentifier:(id)a0;
+ (id)sharedLockedModelWithKey:(id)a0 orCreateNewModelWithWithFunction:(id /* block */)a1;
+ (id)createModelOfClass:(Class)a0;
+ (Class)vggishFeatureExtractorModelClass;
+ (id)sharedLockedModelOfClass:(Class)a0;
+ (Class)vggishModelClassForSoundIdentifier:(id)a0;
+ (Class)soundPrint100kFeatureExtractorModelClass;
+ (Class)soundprint100kModelClassForSoundIdentifier:(id)a0;
+ (id)createVGGishFeatureExtractor;
+ (id)createVGGishNeuralNetDetectorHeadWithSoundIdentifier:(id)a0;
+ (id)createSoundPrint100kFeatureExtractor;
+ (id)createSoundPrint100kNeuralNetDetectorHeadWithSoundIdentifier:(id)a0;

@end
