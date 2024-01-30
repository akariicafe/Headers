@class NSString, SHManagedSession;

@interface WFShazamMediaAction : WFAction <SHSessionDelegate>

@property (retain, nonatomic) SHManagedSession *managedSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userInterfaceProtocol;

- (void).cxx_destruct;
- (void)finishRunningWithError:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)session:(id)a0 didFindMatch:(id)a1;
- (void)session:(id)a0 didNotFindMatchForSignature:(id)a1 error:(id)a2;
- (void)finishRunningWithMatch:(id)a0 error:(id)a1;
- (void)startShazam;

@end
