@class NSSet, NSDictionary;

@interface WFRemoteExecutionIncomingAskEachTimeSession : WFRemoteExecutionSession

@property (retain, nonatomic) NSSet *lastKnownDestinations;
@property (retain, nonatomic) NSDictionary *lastKnownOptions;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)handleIncomingProtobuf:(id)a0 currentlyActiveSessions:(id)a1 responseDestinations:(id)a2 responseOptions:(id)a3;
- (void)handleTimeout;
- (id)missingParameterError;
- (void)sendResponse:(id)a0 destinations:(id)a1 options:(id)a2;

@end
