@class PVPersonPromoterProfile, NSMutableDictionary, PVPersonClusterManager, NSNumber, PVPersonDeduperProfile;
@protocol PVPersonPromoterDelegate, PVPhotoLibraryProtocol;

@interface PVPersonPromoter : NSObject

@property (weak, nonatomic) id<PVPersonPromoterDelegate> delegate;
@property (retain, nonatomic) id<PVPhotoLibraryProtocol> photoLibrary;
@property (nonatomic) float faceProcessingProgress;
@property (retain, nonatomic) NSNumber *quiescentState;
@property (retain, nonatomic) PVPersonClusterManager *personClusterManager;
@property (retain, nonatomic) PVPersonPromoterProfile *promoterProfile;
@property (retain, nonatomic) PVPersonDeduperProfile *deduperProfile;
@property (readonly, nonatomic) NSMutableDictionary *metricsReport;

+ (BOOL)hasProcessedForLibrary:(id)a0;
+ (id)requestSuggestedMePersonIdentifierAtURL:(id)a0 withError:(id *)a1;
+ (void)setProcessed:(BOOL)a0 forLibrary:(id)a1;
+ (BOOL)isEnabled;
+ (unsigned long long)numberOfFacesProcessedOnLastRunAtURL:(id)a0;
+ (BOOL)_writePersonPromoterInformation:(id)a0 atURL:(id)a1;
+ (id)_personPromoterInformationAtURL:(id)a0;
+ (void)cumulativeNormalDistributionWithData:(id)a0 sigmaFactor:(double)a1 usingBlock:(id /* block */)a2;
+ (void)probabilityDensityNormalDistributionWithData:(id)a0 sigmaFactor:(double)a1 usingBlock:(id /* block */)a2;

- (void).cxx_destruct;
- (BOOL)promoteUnverifiedPersonsWithUpdateBlock:(id /* block */)a0;
- (id)advancedStatus;
- (id)initWithPhotoLibrary:(id)a0 andDelegate:(id)a1;
- (void)reportMetrics;
- (BOOL)isInQuiescentState;
- (double)_personTimespan:(id)a0;
- (id)interestingPersonsFromPersons:(id)a0 updateBlock:(id /* block */)a1;
- (id)_newPersonDeduperWithVerifiedPersons:(id)a0;
- (id)_verifiedPersonsToProcess;
- (id)_sortedUnverifiedPersonsToDedupForVerifiedPersons:(id)a0 updateBlock:(id /* block */)a1;
- (BOOL)_personClusterShouldBeVerified:(id)a0;
- (id)_interestingPersonsFromVerifiedPersons:(id)a0 unverifiedPersons:(id)a1 updateBlock:(id /* block */)a2;
- (BOOL)_promoteInterestingPersons:(id)a0 updateBlock:(id /* block */)a1;
- (BOOL)_updateSuggestedMeIdentifierWithPersons:(id)a0 updateBlock:(id /* block */)a1;
- (id)_graphOrderedPersonsWithPersons:(id)a0 withAllPersons:(id)a1 updateBlock:(id /* block */)a2;
- (id)_sortedSocialGroups:(id)a0 withPersonsByLocalIdentifier:(id)a1;
- (void)incrementMetricForKey:(id)a0 withValue:(unsigned long long)a1;

@end
