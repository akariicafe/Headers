@interface SNMLModelFactory : NSObject

+ (id)createSoundPrintAFeatureExtractorWithModelConfiguration:(id)a0;
+ (id)createSoundPrintKFeatureExtractor;
+ (id)createSoundClassifierVersion1;
+ (id)defaultDetectorIdentifierForSoundIdentifier:(id)a0;
+ (id)splitDetectorInfoForDetectorIdentifier:(id)a0;
+ (id)sharedLockedVGGishFeatureExtractorWithModelConfiguration:(id)a0;
+ (id)sharedLockedModelOfClass:(Class)a0 modelConfiguration:(id)a1;
+ (id)sharedLockedSoundPrint100kFeatureExtractorWithModelConfiguration:(id)a0;
+ (id)sharedLockedModelWithKey:(id)a0 orCreateNewModelWithWithFunction:(id /* block */)a1;
+ (id)createModelOfClass:(Class)a0 modelConfiguration:(id)a1;
+ (id)sharedLockedModelOfClass:(Class)a0 memoized:(BOOL)a1 modelConfiguration:(id)a2;
+ (Class)vggishFeatureExtractorModelClass;
+ (Class)soundPrint100kFeatureExtractorModelClass;
+ (Class)soundPrintAFeatureExtractorModelClass;
+ (Class)soundPrintKFeatureExtractorModelClass;
+ (id)createModelOfClass:(Class)a0;
+ (Class)soundClassifierVersion1Modelclass;
+ (id)sharedLockedModelOfClass:(Class)a0;
+ (Class)vggishModelClassForSoundIdentifier:(id)a0;
+ (id)createVGGishFeatureExtractorWithModelConfiguration:(id)a0;
+ (id)createSoundPrint100kFeatureExtractorWithModelConfiguration:(id)a0;
+ (Class)soundprint100kModelClassForSoundIdentifier:(id)a0;
+ (id)sharedLockedSoundPrintAFeatureExtractorWithModelConfiguration:(id)a0;
+ (id)sharedLockedSoundPrintKFeatureExtractor;
+ (id)createSharedLockedSoundClassifierVersion1;

@end
