@class NSObject, HDFHIRSession;
@protocol OS_dispatch_group;

@interface HDFHIRRequestTask : NSObject {
    BOOL _resumed;
    NSObject<OS_dispatch_group> *_group;
}

@property (readonly, nonatomic) HDFHIRSession *session;

- (id)initWithSession:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)waitUntilFinished;
- (void)resume;
- (void)startTaskWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleError:(id)a0 endState:(id)a1;
- (void)createURLRequestWithCompletion:(id /* block */)a0;
- (id)_errorForRequest:(id)a0 response:(id)a1 data:(id)a2;
- (void)_handleResponse:(id)a0 data:(id)a1 endState:(id)a2;
- (void)_handleError:(id)a0 endState:(id)a1;
- (void)handleResponse:(id)a0 JSONData:(id)a1 endState:(id)a2;
- (id)errorForRequest:(id)a0 response:(id)a1 data:(id)a2;

@end
