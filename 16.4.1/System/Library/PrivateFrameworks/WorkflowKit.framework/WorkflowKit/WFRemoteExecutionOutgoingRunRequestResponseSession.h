@class NSData;

@interface WFRemoteExecutionOutgoingRunRequestResponseSession : WFRemoteExecutionSession

@property (readonly, nonatomic) NSData *responseData;

- (void).cxx_destruct;
- (void)handleTimeout;
- (id)initWithService:(id)a0 responseData:(id)a1;
- (void)sendToDestinations:(id)a0 options:(id)a1;
- (double)timeoutLimitInSeconds;

@end
