@interface MSPSenderMinimalStrategy : MSPSenderStrategy {
    BOOL _needToSendInit;
}

- (void)addParticipants:(id)a0;
- (void)etaUpdated:(id)a0;
- (void)destinationUpdated:(id)a0;
- (BOOL)_validDestinationState:(id)a0;
- (void)_sendDestinationIfNeeded;
- (BOOL)_needToSendEtaRefreshFor:(id)a0 state:(id)a1;

@end
