@interface NotesShared.RealtimeCollaborationSelectionDocument : ICCRDocument {
    void /* unknown type, empty encoding */ localParticipantID;
    void /* unknown type, empty encoding */ selections;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithReplica:(id)a0;
- (id)initWithVersion:(id)a0 rootObject:(id)a1 replica:(id)a2;
- (id)initWithVersion:(id)a0 startVersion:(id)a1 rootObject:(id)a2 replica:(id)a3;
- (unsigned long long)mergeWithData:(id)a0;

@end
