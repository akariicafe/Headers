@class PHObject;
@protocol PHShare;

@interface PHShareRelationshipChangeRequestHelper : PHRelationshipChangeRequestHelper

@property (weak, nonatomic) PHObject<PHShare> *originalShare;

- (void).cxx_destruct;
- (BOOL)applyMutationsToManagedObject:(id)a0 error:(id *)a1;
- (id)initWithChangeRequestHelper:(id)a0;
- (id)initWithXpcDict:(id)a0 changeRequestHelper:(id)a1;
- (void)_prepareParticipantsWithFetchResult:(id)a0;
- (void)_prepareParticipantsHelperIfNeeded;
- (id)_mutableParticipantsObjectIDsAndUUIDs;
- (void)addParticipants:(id)a0 toChangeRequest:(id)a1;
- (void)removeParticipants:(id)a0 toChangeRequest:(id)a1;

@end
