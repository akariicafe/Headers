@class NSString, NSDictionary, NSMapTable, PVPersonClusterManager, PVPersonDeduperProfile;
@protocol PVPersonPromoterDelegate;

@interface PVPersonDeduperStep : NSObject

@property (readonly, nonatomic) PVPersonClusterManager *personClusterManager;
@property (readonly, nonatomic) NSDictionary *invalidCandidatesMapping;
@property (readonly, nonatomic) NSString *name;
@property (weak, nonatomic) id<PVPersonPromoterDelegate> delegate;
@property (readonly, nonatomic) NSMapTable *mergeRelations;
@property (readonly, nonatomic) PVPersonDeduperProfile *profile;
@property (nonatomic) BOOL shouldStop;
@property (nonatomic) float progress;
@property (readonly, nonatomic) NSString *metricsKey;

- (void).cxx_destruct;
- (id)_resolveMergeCandidate:(id)a0 forPerson:(id)a1;
- (BOOL)addPotentialMergeCandidateForPerson:(id)a0 withOtherPerson:(id)a1 updateBlock:(id /* block */)a2;
- (float)adjustedThreshold:(float)a0 forMinAgeType:(unsigned short)a1;
- (void)dedupePersons:(id)a0 withOtherPersons:(id)a1 updateBlock:(id /* block */)a2 resultBlock:(id /* block */)a3;
- (id)initWithPersonClusterManager:(id)a0 invalidCandidatesMapping:(id)a1 profile:(id)a2;
- (BOOL)isPersonSimilar:(id)a0 withOtherPerson:(id)a1 withDistance:(float)a2 minAgeType:(unsigned short)a3;
- (id)mergeCandidatePersonsWithUpdateBlock:(id /* block */)a0;
- (BOOL)shouldStopWithUpdateBlock:(id /* block */)a0;

@end
