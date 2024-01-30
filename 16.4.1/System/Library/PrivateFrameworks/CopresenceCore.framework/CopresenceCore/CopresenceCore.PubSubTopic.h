@interface CopresenceCore.PubSubTopic : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ localParticipantID;
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ firstSubscribeAttemptAt;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ reporterTag;
    void /* unknown type, empty encoding */ dataCryptorProvider;
    void /* unknown type, empty encoding */ _subscribers;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ _topicMetadata;
    void /* unknown type, empty encoding */ closedStreamsReason;
    void /* unknown type, empty encoding */ subscribeStreamAttempt;
    void /* unknown type, empty encoding */ publishStreamAttempt;
    void /* unknown type, empty encoding */ subscribeStreamState;
    void /* unknown type, empty encoding */ publishStreamState;
    void /* unknown type, empty encoding */ subscribeInitializeInFlight;
    void /* unknown type, empty encoding */ cryptorUpdatedWhileInitializing;
    void /* unknown type, empty encoding */ selfSeqNum;
    void /* unknown type, empty encoding */ selfSeqNumServerAcked;
    void /* unknown type, empty encoding */ _subscriberSeqNums;
    void /* unknown type, empty encoding */ subscriberSeqNumsAcked;
    void /* unknown type, empty encoding */ pendingDecryptionQueue;
    void /* unknown type, empty encoding */ sendQueue;
    void /* unknown type, empty encoding */ receiveQueue;
    void /* unknown type, empty encoding */ subscribeInput;
    void /* unknown type, empty encoding */ publishInput;
    void /* unknown type, empty encoding */ subscribeResponseCancellable;
    void /* unknown type, empty encoding */ subscribeMissingEncryptionIDsCancellable;
    void /* unknown type, empty encoding */ subscribeNotAuthorizedCancellable;
    void /* unknown type, empty encoding */ publishResponseCancellable;
    void /* unknown type, empty encoding */ upsertMetadataCancellables;
    void /* unknown type, empty encoding */ shutdownFailsafeCancellable;
}

@end
