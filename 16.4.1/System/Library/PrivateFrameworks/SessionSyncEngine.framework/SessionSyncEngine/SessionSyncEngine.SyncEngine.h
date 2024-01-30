@interface SessionSyncEngine.SyncEngine : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ role;
    void /* unknown type, empty encoding */ syncService;
    void /* unknown type, empty encoding */ metadataStore;
    void /* unknown type, empty encoding */ keybag;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ retryTimer;
    void /* unknown type, empty encoding */ sourcesByZone;
    void /* unknown type, empty encoding */ inflightExpirationTimer;
    void /* unknown type, empty encoding */ inflightExpirationTime;
    void /* unknown type, empty encoding */ inflightMetadataByRequestIdentifier;
    void /* unknown type, empty encoding */ inflightDateByRequestIdentifier;
    void /* unknown type, empty encoding */ inflightMetadata;
    void /* unknown type, empty encoding */ keybagSubscription;
    void /* unknown type, empty encoding */ localDeviceIdentifierOverride;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ _lock_pairedDevice;
    void /* unknown type, empty encoding */ _queue_syncState;
    void /* unknown type, empty encoding */ _queue_didReceiveAckMessage;
    void /* unknown type, empty encoding */ _queue_didReceiveUnlockMessage;
    void /* unknown type, empty encoding */ _queue_didFireMetadataExpirationTimer;
    void /* unknown type, empty encoding */ _queue_didFireRetryTimer;
    void /* unknown type, empty encoding */ _queue_didExhaustRetryTimer;
}

@end
