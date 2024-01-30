@interface IDSNonFTGL : IDSGlobalLink

- (BOOL)_setupNewQRLinkIfNecessary:(id)a0;
- (void)_startHB:(id)a0;
- (BOOL)_isBetterCandidatePair:(id)a0 newCandidatePair:(id)a1;
- (id)_nextConnectedCandidatePair;
- (BOOL)_processRemovedLocalAddressList:(id)a0;
- (void)_setDefaultCandidatePairForNonFT;
- (void)_selectDefaultCandidatePair;
- (void)_notifyCandidatePairConnected:(id)a0;
- (void)stopKeepAlive:(id)a0;
- (void)_notifyCandidatePairDisconnected:(id)a0 withReason:(unsigned char)a1;
- (void)_notifyDefaultUnderlyingLinkChanged:(id)a0 error:(long long)a1;
- (void)_setFirstDefaultCandidatePair:(id)a0;
- (void)_selectBetterDefaultCandidatePair:(id)a0;
- (void)setPacketNotificationFilter:(char)a0 uniqueTag:(unsigned int)a1 isEnabled:(BOOL)a2;
- (void)dropIPPackets:(char)a0 payloadArray:(id)a1;
- (void)updateProtocolQualityOfService:(char)a0 isGood:(BOOL)a1;
- (void)_handleNewRATChange;
- (void)_handleNoRemotePacket;
- (void)currentCellularSignalStrength:(int *)a0 signalStrength:(int *)a1 signalGrade:(int *)a2;
- (void)_handleRemapping:(id)a0;
- (void)startWithOptions:(id)a0;
- (void)disconnectWithCompletionHandler:(id /* block */)a0;

@end
