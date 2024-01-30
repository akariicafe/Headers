@class NSString, WFRemoteExecutionRequest, NSObject, IDSService;
@protocol OS_dispatch_source, WFRemoteExecutionSessionDelegate;

@interface WFRemoteExecutionSession : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (retain, nonatomic) WFRemoteExecutionRequest *request;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (nonatomic) unsigned long long state;
@property (weak, nonatomic) id<WFRemoteExecutionSessionDelegate> delegate;
@property (readonly, nonatomic) IDSService *service;

- (id)initWithService:(id)a0;
- (void)finish;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)cancelTimeout;
- (void)sendToDestinations:(id)a0 options:(id)a1;
- (void)handleIncomingProtobuf:(id)a0;
- (void)handleTimeout;
- (double)timeoutLimitInSeconds;
- (void)restartTimeout;
- (id)sessionTimedOutError;
- (id)invalidAceCommandError;

@end
