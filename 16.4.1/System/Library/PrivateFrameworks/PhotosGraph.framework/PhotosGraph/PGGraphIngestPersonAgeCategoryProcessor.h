@class NSString, CLSSceneConfidenceThresholdHelper, PGGraphBuilder;

@interface PGGraphIngestPersonAgeCategoryProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
    CLSSceneConfidenceThresholdHelper *_babyScenesHelper;
    CLSSceneConfidenceThresholdHelper *_childScenesHelper;
    CLSSceneConfidenceThresholdHelper *_teenScenesHelper;
    CLSSceneConfidenceThresholdHelper *_adultScenesHelper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_ageCategoryFromAssetSamplingScenesForPersonNode:(id)a0 photoLibrary:(id)a1 curationSession:(id)a2;
- (unsigned long long)_ageCategoryFromBirthdayDateForPersonNode:(id)a0;
- (unsigned long long)_ageCategoryFromPHFaceAgeType:(unsigned short)a0;
- (unsigned long long)_ageCategoryUsingFaceAttributesForPersonNode:(id)a0 photoLibrary:(id)a1;
- (id)_ageDescriptionFromAge:(unsigned long long)a0;
- (unsigned short)_ageTypeFromAgeCategory:(unsigned long long)a0;
- (void)_updatePhotoLibrary:(id)a0 withAgeCategoryByPersonLocalIdentifier:(id)a1;
- (unsigned long long)ageCategoryForPersonNode:(id)a0 ageCategoryCountedSet:(id)a1;
- (unsigned long long)ageCategoryFromBirthdayDateComponents:(id)a0 currentDate:(id)a1;
- (unsigned long long)ageCategoryFromScenesByAssetLocalIdentifier:(id)a0 curationModelByAssetLocalIdentifier:(id)a1 personNode:(id)a2;
- (id)confidenceThresholdByAdultSceneIdentifierWithCurationModel:(id)a0;
- (id)confidenceThresholdByBabySceneIdentifierWithCurationModel:(id)a0;
- (id)confidenceThresholdByChildSceneIdentifierWithCurationModel:(id)a0;
- (id)confidenceThresholdByTeenSceneIdentifierWithCurationModel:(id)a0;
- (void)processPersonAgeCategoryForPersonNodes:(id)a0 photoLibrary:(id)a1 withProgressBlock:(id /* block */)a2;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (void)setGraphBuilder:(id)a0;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
