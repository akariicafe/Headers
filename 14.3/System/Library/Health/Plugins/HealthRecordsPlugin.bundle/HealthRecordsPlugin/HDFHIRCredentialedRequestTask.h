@class HDFHIRCredentialResult, NSObject, HDFHIRCredentialedSession;
@protocol OS_dispatch_queue;

@interface HDFHIRCredentialedRequestTask : HDFHIRRequestTask {
    HDFHIRCredentialResult *_credentialResult;
    NSObject<OS_dispatch_queue> *_resourceQueue;
}

@property (retain) HDFHIRCredentialResult *credentialResult;
@property (readonly, nonatomic) HDFHIRCredentialedSession *credentialedSession;

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)startTaskWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_handleError:(id)a0 endState:(id)a1;
- (id)initWithCredentialedSession:(id)a0;

@end
