@class NSString, NSMutableArray, RPCompanionLinkClient;

@interface HMDRapportDeviceClientWrapper : NSObject <HMFLogging> {
    RPCompanionLinkClient *_client;
    long long _activateState;
    NSMutableArray *_requestQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithClient:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)sendRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;
- (void)_completeQueuedRequestsWithError:(id)a0;
- (void)_queueRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;

@end
