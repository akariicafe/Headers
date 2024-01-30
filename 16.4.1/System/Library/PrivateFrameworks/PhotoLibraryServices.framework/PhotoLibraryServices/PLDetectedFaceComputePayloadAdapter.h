@class PLDetectedFace;

@interface PLDetectedFaceComputePayloadAdapter : NSObject <PLJournalEntryPayloadUpdateAdapter> {
    PLDetectedFace *_face;
}

- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;
- (BOOL)isValidForJournalPersistence;
- (id)payloadIDForTombstone:(id)a0;
- (id)payloadsForChangedKeys:(id)a0;
- (void).cxx_destruct;
- (id)initWithDetectedFace:(id)a0;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
