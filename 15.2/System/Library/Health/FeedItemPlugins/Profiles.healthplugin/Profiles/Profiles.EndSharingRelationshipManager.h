@interface Profiles.EndSharingRelationshipManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ cloudSyncShareParticipantManager;
    void /* unknown type, empty encoding */ profileStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sharingEntryStore;
    void /* unknown type, empty encoding */ sharingEntriesEndSharingRelationshipStateCurrentValueSubject;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ currentEndSharingRelationshipStatePublisherForProfileUUID;
}

- (void)endSharingRelationshipFailureAcknowledged:(id)a0;
- (void)endSharingRelationshipRequested:(id)a0;

@end
