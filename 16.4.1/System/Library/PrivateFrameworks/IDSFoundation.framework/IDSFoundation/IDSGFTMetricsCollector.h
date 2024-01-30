@class IDSGFTMetricsLocalJoin, NSString, NSSet, NSMutableDictionary, IDSGFTMetricsAnonymizer, IDSGFTMetricsMembershipChange;

@interface IDSGFTMetricsCollector : NSObject {
    NSMutableDictionary *_referencePointsByType;
    NSMutableDictionary *_pushTokensByMKIs;
    NSMutableDictionary *_unknownMKMReceiptTimes;
    int _nextUniqueID;
    IDSGFTMetricsMembershipChange *_lastMembershipChange;
    NSMutableDictionary *_annotatorsByEventType;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unknownMKMFlushLock;
    IDSGFTMetricsAnonymizer *_anonymizer;
}

@property NSString *conversationID;
@property BOOL isInitiator;
@property (copy) NSSet *activeParticipantURIs;
@property (readonly) IDSGFTMetricsLocalJoin *localJoin;

- (id)error:(id)a0;
- (id)request:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)keyValueDelivery;
- (id)begin:(id)a0 uniqueID:(id)a1;
- (void)connectQRServer;
- (void)firstOutgoingPacketTime:(double)a0 forMKI:(id)a1;
- (void)globalLinkStart;
- (void)annotate:(id)a0 block:(id /* block */)a1;
- (void)firstIncomingPacketTime:(double)a0 forMKI:(id)a1;
- (void)annotate:(id)a0 withEvent:(id)a1;
- (void)avcReceiveMKMTime:(double)a0 forMKI:(id)a1 isGeneratedLocally:(BOOL)a2;
- (id)begin:(id)a0 uniqueID:(id)a1 withClass:(Class)a2;
- (void)clientChannelConnected;
- (id)collectForTimeBase:(double)a0 anonymize:(BOOL)a1;
- (void)didConnectUnderlyingE2ELink;
- (void)didConnectUnderlyingRelayLink;
- (void)didCreateMKM:(id)a0;
- (void)didMitigateCollision:(BOOL)a0;
- (void)didSendJoin;
- (void)flushPendingNowKnownMKMs;
- (id)joinCycleForToken:(id)a0;
- (id)localDidJoin;
- (void)mapMKI:(id)a0 toPushToken:(id)a1;
- (void)membershipChange;
- (void)quicAllocbindRequest;
- (void)quicAllocbindResponse;
- (void)receivedKMOverPushFromToken:(id)a0;
- (void)receivedKMOverPushViaCacheForToken:(id)a0;
- (void)receivedKMOverQRFromToken:(id)a0;
- (void)receivedKMOverQUICFromToken:(id)a0;
- (void)receivedUnknownKMOverPushViaCache:(id)a0;
- (void)receivedUnverifiedKMOverQUICFromToken:(id)a0;
- (void)remoteDidBecomeActive:(id)a0;
- (void)remoteDidJoin:(id)a0;
- (void)sendAllocationRequest;
- (void)sendMKMToAVC:(id)a0 isGeneratedLocally:(BOOL)a1;
- (void)stunAllocbindRequest;
- (void)stunAllocbindResponse;
- (void)tcpAllocbindRequest;
- (void)tcpAllocbindResponse;
- (void)transactionIDMismatchDetected;
- (void)willSendAllocbindRequest;
- (void)willSendJoin;

@end
