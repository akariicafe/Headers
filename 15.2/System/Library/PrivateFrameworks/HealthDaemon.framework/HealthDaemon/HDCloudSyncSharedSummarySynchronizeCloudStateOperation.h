@class NSArray, NSDictionary, HDCloudSyncCachedZone, NSMutableSet;

@interface HDCloudSyncSharedSummarySynchronizeCloudStateOperation : HDCloudSyncOperation {
    HDCloudSyncCachedZone *_privateMetadataZone;
    NSArray *_participantRecords;
    NSDictionary *_participantRecordsByUUID;
    NSMutableSet *_updatedParticipantRecordIDs;
    NSMutableSet *_sharesToDelete;
}

- (id)_zonesForParticipant:(id)a0 error:(id *)a1;
- (BOOL)_updateOwnerParticipantForParticipantRecord:(id)a0 zone:(id)a1 error:(id *)a2;
- (BOOL)_updateShareForAllNonOwnerParticipantsInZone:(id)a0 error:(id *)a1;
- (BOOL)_isActiveParticipant:(id)a0;
- (id)_removeInvalidSharesOperationWithError:(id *)a0;
- (BOOL)_validateParticipantRecordCloudStateWithError:(id *)a0;
- (void)main;
- (void).cxx_destruct;
- (id)_zoneIdentifierForParticipant:(id)a0;
- (id)_currentZoneStateForParticipant:(id)a0 zone:(id)a1 error:(id *)a2;
- (BOOL)_validateCloudStateForParticipantRecord:(id)a0 error:(id *)a1;
- (id)_deleteInvalidZonesOperationWithError:(id *)a0;

@end
