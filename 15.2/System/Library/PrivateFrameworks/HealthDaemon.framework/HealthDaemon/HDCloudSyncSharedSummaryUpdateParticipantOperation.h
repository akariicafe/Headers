@class HDCodableSummarySharingEntry, NSArray;

@interface HDCloudSyncSharedSummaryUpdateParticipantOperation : HDCloudSyncOperation {
    NSArray *_authorizationCategoriesToAdd;
    NSArray *_authorizationCategoriesToDelete;
}

@property (copy, nonatomic) HDCodableSummarySharingEntry *entry;

- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 codableEntry:(id)a1 authorizationCategoriesToAdd:(id)a2 authorizationCategoriesToDelete:(id)a3;
- (id)_lookupOrCreateRelationshipRecordInZone:(id)a0 error:(id *)a1;
- (id)_createOrUpdateParticipantRecordInZone:(id)a0 relationshipRecord:(id)a1 entry:(id)a2 error:(id *)a3;
- (id)_createOrUpdateAuthorizationRecordInZone:(id)a0 relationshipRecord:(id)a1 participantRecord:(id)a2 error:(id *)a3;
- (BOOL)_containsOnlyCategoriesToAddWithError:(id *)a0;

@end
