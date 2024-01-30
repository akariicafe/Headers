@class NSData;

@interface WFRemoteExecutionOutgoingRunRequestResponseSession : WFRemoteExecutionSession

@property (readonly, nonatomic) NSData *responseData;

- (void).cxx_destruct;
- (void)sendToDestinations:(id)a0 options:(id)a1;
- (void)handleTimeout;
- (double)timeoutLimitInSeconds;
- (id)initWithService:(id)a0 responseData:(id)a1;

@end
