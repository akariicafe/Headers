@class NSDictionary, PVPersonClusterManager, PVPersonPromoter, PVPersonDeduperProfile;
@protocol PVPersonPromoterDelegate;

@interface PVPersonDeduper : NSObject {
    PVPersonClusterManager *_personClusterManager;
    NSDictionary *_invalidCandidatesMapping;
    PVPersonDeduperProfile *_profile;
}

@property (weak, nonatomic) PVPersonPromoter *personPromoter;
@property (weak, nonatomic) id<PVPersonPromoterDelegate> delegate;

- (void).cxx_destruct;
- (void)_executeStepsInSequences:(id)a0 forPersons:(id)a1 andOtherPersons:(id)a2 updateBlock:(id /* block */)a3 resultBlock:(id /* block */)a4;
- (id)basicSequence;
- (id)dedupeNewVerifiedPersons:(id)a0 withExistingVerifiedPersons:(id)a1 updateBlock:(id /* block */)a2;
- (id)dedupeUnverifiedPersons:(id)a0 updateBlock:(id /* block */)a1;
- (id)dedupeUnverifiedPersons:(id)a0 withVerifiedPersons:(id)a1 updateBlock:(id /* block */)a2;
- (id)initWithPersonClusterManager:(id)a0 andInvalidCandidatesMapping:(id)a1 profile:(id)a2;

@end
