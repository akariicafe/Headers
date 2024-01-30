@class NSArray, NSMutableArray, NSData;

@interface IDSGFTGL : IDSGlobalLink {
    NSArray *_remoteCandidatePairs;
    NSMutableArray *_virtualCandidatePairs;
    BOOL _allowE2E;
    unsigned int _keyMaterialDataCounter;
    BOOL _keyMaterialReady;
    NSData *_keyMaterialData;
    id /* block */ _keyMaterialSentHandler;
}

- (void)disconnectWithCompletionHandler:(id /* block */)a0;
- (void)manageDesignatedDestinations:(id)a0 relayGroupID:(id)a1 relaySessionID:(id)a2 withType:(unsigned short)a3 sessionStateCounter:(unsigned int)a4;
- (void)removeParticipantIDs:(id)a0 relayGroupID:(id)a1 relaySessionID:(id)a2 sessionStateCounter:(unsigned int)a3;
- (void)updateURIToParticipantIDs:(id)a0 relaySessionID:(id)a1 sessionInfo:(id)a2;
- (void)sendKeyMaterialMessageData:(id)a0 relayGroupID:(id)a1 destinationURIs:(id)a2 completionHandler:(id /* block */)a3;
- (void)receiveJoinNotificationFromAParticipant;
- (void)enableUPlusOneSessionForTransition:(BOOL)a0;
- (void)startWithOptions:(id)a0;
- (BOOL)_setupNewQRLinkIfNecessary:(id)a0;
- (BOOL)_postProcessAllocbindResponse:(id)a0 candidatePair:(id)a1 candidatePairToken:(id)a2;
- (void)setDefaultUnderlyingLink:(char)a0;
- (void)_setupVirtualCandidatePairs:(id)a0 remoteCandidatePair:(id)a1;
- (void)_processReceivedRemoteCandidatePairs:(id)a0;
- (void)_disableE2E;
- (void).cxx_destruct;
- (void)_sendConnectionDataWithRemovedAddressList:(id)a0;
- (BOOL)_processRemovedLocalAddressList:(id)a0;
- (void)_notifyDefaultUnderlyingLinkChanged:(id)a0 error:(long long)a1;
- (void)invalidate;
- (void)setIsUPlusOneSession:(BOOL)a0;
- (void)_discardCandidatePairsWithOption:(BOOL)a0;
- (void)_destroyVirtualRelayLinksForCandidatePair:(id)a0;
- (long long)_getQRAllocateType;
- (id)_findVirtualCandidatePair:(id)a0;
- (void)_discardKeyMaterialMessage:(long long)a0;
- (void)_processCommandRelayInterfaceInfo:(id)a0 candidatePairToken:(id)a1;
- (void)_sendRelayInterfaceInfo:(id)a0;
- (void)_enableE2E;
- (void)setTimeBase:(id)a0;

@end
