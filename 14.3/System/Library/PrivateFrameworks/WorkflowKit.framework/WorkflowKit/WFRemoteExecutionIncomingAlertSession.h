@class NSSet, NSDictionary;

@interface WFRemoteExecutionIncomingAlertSession : WFRemoteExecutionSession

@property (retain, nonatomic) NSSet *lastKnownDestinations;
@property (retain, nonatomic) NSDictionary *lastKnownOptions;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)handleTimeout;
- (double)timeoutLimitInSeconds;
- (void)handleIncomingProtobuf:(id)a0 currentlyActiveSessions:(id)a1 responseDestinations:(id)a2 options:(id)a3;
- (void)sendSelectedButton:(id)a0 forAlertWithIdentifier:(id)a1 error:(id)a2 destinations:(id)a3 options:(id)a4;

@end
