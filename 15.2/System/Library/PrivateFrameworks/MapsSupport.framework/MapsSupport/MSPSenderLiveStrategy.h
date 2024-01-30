@interface MSPSenderLiveStrategy : MSPSenderStrategy {
    BOOL _needToSendRoute;
}

- (void)setState:(id)a0;
- (void)addParticipants:(id)a0;
- (void)etaUpdated:(id)a0;
- (void)destinationUpdated:(id)a0;
- (void)routeUpdated:(id)a0;
- (void)trafficUpdated:(id)a0;
- (BOOL)_needToSendEtaRefreshFor:(id)a0;

@end
