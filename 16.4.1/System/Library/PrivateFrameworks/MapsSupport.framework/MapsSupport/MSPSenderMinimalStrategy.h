@interface MSPSenderMinimalStrategy : MSPSenderStrategy {
    BOOL _needToSendInit;
}

- (void)addParticipants:(id)a0;
- (BOOL)_needToSendEtaRefreshFor:(id)a0 state:(id)a1;
- (void)_sendDestinationIfNeeded;
- (BOOL)_validDestinationState:(id)a0;
- (void)etaUpdated:(id)a0;
- (void)waypointsUpdated:(id)a0;

@end
