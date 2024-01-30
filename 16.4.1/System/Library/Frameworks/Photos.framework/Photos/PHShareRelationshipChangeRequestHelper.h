@class PHObject;
@protocol PHShare;

@interface PHShareRelationshipChangeRequestHelper : PHRelationshipChangeRequestHelper

@property (weak, nonatomic) PHObject<PHShare> *originalShare;
@property (weak, nonatomic) PHObject *originalAsset;

- (void).cxx_destruct;
- (id)_mutableParticipantsObjectIDsAndUUIDs;
- (void)_prepareParticipantsHelperIfNeeded;
- (void)_prepareParticipantsWithFetchResult:(id)a0;
- (void)addParticipants:(id)a0 toChangeRequest:(id)a1;
- (BOOL)applyMutationsToManagedObject:(id)a0 error:(id *)a1;
- (void)removeParticipants:(id)a0 toChangeRequest:(id)a1;
- (void)setParticipants:(id)a0 toChangeRequest:(id)a1;

@end
