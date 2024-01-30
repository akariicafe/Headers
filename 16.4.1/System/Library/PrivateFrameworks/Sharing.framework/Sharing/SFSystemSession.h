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

- (void)_cleanup;
- (void)_run;
- (void)removeProfileWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_processRequests;
- (void)_processRequestsWithError:(id)a0;
- (void)_runPairVerifyStart;
- (void)_runSFSessionStart;
- (void)getProfilesResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)getProfilesWithCompletion:(id /* block */)a0;
- (void)getSystemInfoWithCompletion:(id /* block */)a0;
- (void)installProfileResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)installProfileWithData:(id)a0 completion:(id /* block */)a1;
- (void)installProfileWithURL:(id)a0 completion:(id /* block */)a1;
- (void)rebootSystemWithCompletion:(id /* block */)a0;

@end
