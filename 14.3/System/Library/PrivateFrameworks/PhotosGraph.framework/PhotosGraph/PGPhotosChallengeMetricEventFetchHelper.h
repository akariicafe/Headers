@class PGSuggestionSession, NSSet, NSDictionary, PGManager;

@interface PGPhotosChallengeMetricEventFetchHelper : NSObject

@property (retain, nonatomic) NSDictionary *questionsByQuestionTypeByEntityType;
@property (retain, nonatomic) PGManager *manager;
@property (retain, nonatomic) PGSuggestionSession *featuredPhotosSuggestionSession;
@property (retain, nonatomic) NSDictionary *assetByAssetIdentifier;
@property (retain, nonatomic) NSDictionary *momentUUIDByAssetIdentifier;
@property (retain, nonatomic) NSDictionary *activePersonUUIDByPersonIdentifier;
@property (retain, nonatomic) NSDictionary *memoryByMemoryIdentifier;
@property (retain, nonatomic) NSSet *tripKeyAssetIdentifiers;

- (void).cxx_destruct;
- (id)initWithGraphManager:(id)a0;
- (id)initForTestingWithQuestions:(id)a0 assetsByAssetId:(id)a1 momentUUIDByAssetIdentifier:(id)a2 activePersonUUIDByPersonIdentifier:(id)a3 tripKeyAssetIdentifiers:(id)a4;
- (id)questionsForQuestionMetricType:(unsigned short)a0;
- (id)questionsForQuestionType:(unsigned short)a0 questionEntityType:(unsigned short)a1;
- (void)_prefetchQuestions;
- (void)_buildQuestionsByQuestionTypeByEntityTypeFromQuestions:(id)a0;
- (void)_prefetchAssetByAssetIdentifier;
- (void)_prefetchMomentUUIDByAssetIdentifier;
- (void)_prefetchActivePersonUUIDByPersonIdentifier;
- (void)_prefetchMemoryByMemoryIdentifier;
- (void)_prefetchTripKeyAssetIdentifiers;

@end
