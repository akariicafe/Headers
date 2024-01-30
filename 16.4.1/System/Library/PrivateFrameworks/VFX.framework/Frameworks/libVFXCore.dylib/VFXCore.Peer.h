@interface VFXCore.Peer : NSObject {
    void /* unknown type, empty encoding */ peerID;
    void /* unknown type, empty encoding */ info;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ pendingReplies;
    void /* unknown type, empty encoding */ startReceivingResourceEventSource;
    void /* unknown type, empty encoding */ receivedResourceEventSource;
    void /* unknown type, empty encoding */ failedToReceivedResourceEventSource;
}

- (id)init;
- (void).cxx_destruct;

@end
