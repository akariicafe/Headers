@interface Profiles.StopReceivingProfileManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ cloudSyncShareParticipantManager;
    void /* unknown type, empty encoding */ profileStore;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ currentStopReceivingStatePublisherForProfileUUID;
}

- (void)stopReceivingProfileFailureAcknowledged:(id)a0;
- (void)stopReceivingProfileRequested:(id)a0;

@end
