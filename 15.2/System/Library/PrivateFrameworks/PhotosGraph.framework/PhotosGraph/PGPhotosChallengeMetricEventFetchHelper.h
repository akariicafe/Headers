@class PGSuggestionSession, NSSet, NSDictionary, PHPhotoLibrary;

@interface PGPhotosChallengeMetricEventFetchHelper : NSObject {
    PHPhotoLibrary *_photoLibrary;
}

@property (retain, nonatomic) NSDictionary *questionsByQuestionTypeByEntityType;
@property (retain, nonatomic) PGSuggestionSession *featuredPhotosSuggestionSession;
@property (retain, nonatomic) NSDictionary *assetByAssetIdentifier;
@property (retain, nonatomic) NSDictionary *assetByAssetSyndicationIdentifier;
@property (retain, nonatomic) NSDictionary *momentUUIDByAssetIdentifier;
@property (retain, nonatomic) NSDictionary *activePersonUUIDByPersonUUID;
@property (retain, nonatomic) NSDictionary *memoryByMemoryIdentifier;
@property (retain, nonatomic) NSSet *tripKeyAssetIdentifiers;

- (id)initWithGraphManager:(id)a0;
- (void).cxx_destruct;
- (id)initForTestingWithQuestions:(id)a0 assetsByAssetId:(id)a1 momentUUIDByAssetIdentifier:(id)a2 activePersonUUIDByPersonUUID:(id)a3 tripKeyAssetIdentifiers:(id)a4;
- (id)questionsForQuestionMetricType:(unsigned short)a0;
- (id)questionsForQuestionType:(unsigned short)a0 questionEntityType:(unsigned short)a1;
- (void)_prefetchQuestions;
- (void)_buildQuestionsByQuestionTypeByEntityTypeFromQuestions:(id)a0;
- (void)_prefetchAssetByAssetIdentifier;
- (void)_prefetchAssetByAssetSyndicationIdentifier;
- (void)_prefetchMomentUUIDByAssetIdentifier;
- (void)_prefetchActivePersonUUIDByPersonUUID;
- (void)_prefetchMemoryByMemoryIdentifier;
- (void)_prefetchTripKeyAssetIdentifiers;

@end
