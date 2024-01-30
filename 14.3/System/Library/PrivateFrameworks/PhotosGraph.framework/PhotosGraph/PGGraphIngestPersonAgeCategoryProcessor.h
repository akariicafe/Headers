@class NSDictionary, NSString;

@interface PGGraphIngestPersonAgeCategoryProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly, nonatomic) NSDictionary *confidenceThresholdByBabySceneIdentifier;
@property (readonly, nonatomic) NSDictionary *confidenceThresholdByChildSceneIdentifier;
@property (readonly, nonatomic) NSDictionary *confidenceThresholdByTeenSceneIdentifier;
@property (readonly, nonatomic) NSDictionary *confidenceThresholdByAdultSceneIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)ageCategoryFromBirthdayDateComponents:(id)a0 currentDate:(id)a1;
- (unsigned long long)_ageCategoryFromBirthdayDateForPersonNode:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)ageCategoryForPersonNode:(id)a0 ageCategoryCountedSet:(id)a1;
- (id)_ageDescriptionFromAge:(unsigned long long)a0;
- (unsigned long long)_ageCategoryFromPHFaceAgeType:(unsigned short)a0;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (unsigned long long)ageCategoryFromScenesByAssetLocalIdentifier:(id)a0 personNode:(id)a1;
- (unsigned long long)_ageCategoryFromAssetSamplingScenesForPersonNode:(id)a0 graph:(id)a1;
- (unsigned long long)_ageCategoryUsingFaceAttributesForPersonNode:(id)a0 graph:(id)a1;
- (void)processPersonAgeCategoryForPersonNodes:(id)a0 graph:(id)a1 withProgressBlock:(id /* block */)a2;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
