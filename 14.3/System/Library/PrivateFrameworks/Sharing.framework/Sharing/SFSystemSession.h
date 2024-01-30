@class SFSession, NSError, SFSessionRequestInfo, SFDevice, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SFSystemSession : NSObject {
    SFSessionRequestInfo *_currentRequest;
    BOOL _invalidateCalled;
    BOOL _pairVerifyDone;
    NSMutableArray *_requests;
    SFSession *_sfSession;
    int _state;
    BOOL _stateDone;
    NSError *_stateError;
}

@property (nonatomic) BOOL allowUnencrypted;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;

- (void)_run;
- (id)init;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)removeProfileWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)activate;
- (void)_runSFSessionStart;
- (void)invalidate;
- (void)_processRequests;
- (void)_runPairVerifyStart;
- (void)_processRequestsWithError:(id)a0;
- (void)getProfilesResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)installProfileResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)installProfileWithData:(id)a0 completion:(id /* block */)a1;
- (void)getSystemInfoWithCompletion:(id /* block */)a0;
- (void)getProfilesWithCompletion:(id /* block */)a0;
- (void)installProfileWithURL:(id)a0 completion:(id /* block */)a1;
- (void)rebootSystemWithCompletion:(id /* block */)a0;

@end
