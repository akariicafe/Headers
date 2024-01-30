@interface GroupActivities.LinkManager : NSObject {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ participantToControllerMap;
    void /* unknown type, empty encoding */ unreliableMessenger;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ topic;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ groupUUID;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ localParticipant;
    void /* unknown type, empty encoding */ unreliableMessengerConfig;
    void /* unknown type, empty encoding */ hasConnectedOnce;
    void /* unknown type, empty encoding */ receivedDataHandler;
    void /* unknown type, empty encoding */ onFirstConnectedHandler;
    void /* unknown type, empty encoding */ invalidationHandler;
    void /* unknown type, empty encoding */ requestEncryptionKeysHandler;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
