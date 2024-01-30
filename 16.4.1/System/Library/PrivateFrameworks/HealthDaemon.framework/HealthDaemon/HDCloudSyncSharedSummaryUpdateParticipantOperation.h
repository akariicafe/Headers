@class HDCodableSummarySharingEntry, NSArray;

@interface HDCloudSyncSharedSummaryUpdateParticipantOperation : HDCloudSyncOperation {
    NSArray *_authorizationIdentifiersToAdd;
    NSArray *_authorizationIdentifiersToDelete;
}

@property (copy, nonatomic) HDCodableSummarySharingEntry *entry;

- (void)main;
- (void).cxx_destruct;
- (BOOL)_containsOnlyCategoriesToAddWithError:(id *)a0;
- (id)_createOrUpdateAuthorizationRecordInZone:(id)a0 participantRecord:(id)a1 error:(id *)a2;
- (id)_createOrUpdateParticipantRecordInZone:(id)a0 entry:(id)a1 error:(id *)a2;
- (id)initWithConfiguration:(id)a0 codableEntry:(id)a1 authorizationIdentifiersToAdd:(id)a2 authorizationIdentifiersToDelete:(id)a3;

@end
