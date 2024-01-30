@interface RemotePairingDevice.ControlChannelConnection : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ peerDeviceInfo;
    void /* unknown type, empty encoding */ resolvedIdentity;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ transport;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ _connectionSetupCompleteHandler;
    void /* unknown type, empty encoding */ invalidationHandler;
    void /* unknown type, empty encoding */ peerDeviceInfoUpdateHandler;
    void /* unknown type, empty encoding */ requireUserConsentForPairing;
    void /* unknown type, empty encoding */ userInteractionProvider;
    void /* unknown type, empty encoding */ tunnelListenerCreator;
    void /* unknown type, empty encoding */ customPairingDataStorageProvider;
    void /* unknown type, empty encoding */ customKeybagProvider;
    void /* unknown type, empty encoding */ connectionSetupDidComplete;
    void /* unknown type, empty encoding */ maxReconnectionAttempts;
    void /* unknown type, empty encoding */ startedAt;
    void /* unknown type, empty encoding */ _peerWireProtocolVersion;
    void /* unknown type, empty encoding */ _peerDeviceOptions;
    void /* unknown type, empty encoding */ _replyHandlers;
    void /* unknown type, empty encoding */ _mdmChallengeData;
    void /* unknown type, empty encoding */ _transaction;
    void /* unknown type, empty encoding */ _userHasDeclinedPairing;
    void /* unknown type, empty encoding */ _pairingSession;
    void /* unknown type, empty encoding */ _encryptionStream;
    void /* unknown type, empty encoding */ _messageSequenceNumber;
    void /* unknown type, empty encoding */ _invalidateCalled;
    void /* unknown type, empty encoding */ invalidationReason;
}

@end
