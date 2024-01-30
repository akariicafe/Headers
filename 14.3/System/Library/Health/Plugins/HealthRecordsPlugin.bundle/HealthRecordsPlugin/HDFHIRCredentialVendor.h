@class HDFHIRCredentialResult, _HDFHIRCredentialResultPromise, NSObject;
@protocol OS_dispatch_queue, HDFHIRCredentialVendorDelegate, OS_dispatch_group;

@interface HDFHIRCredentialVendor : NSObject {
    HDFHIRCredentialResult *_currentResult;
    id<HDFHIRCredentialVendorDelegate> _strongDelegate;
    unsigned long long _strongDelegateRetainCount;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_credentialResultQueue;
    BOOL _hasInFlightRefreshTask;
    _HDFHIRCredentialResultPromise *_inFlightRefreshResultPromise;
    NSObject<OS_dispatch_group> *_inFlightRefreshCompletionGroup;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain) HDFHIRCredentialResult *currentResult;
@property (copy) id /* block */ credentialResultDidUpdateHandler;
@property (weak) id<HDFHIRCredentialVendorDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCredential:(id)a0;
- (void)fetchOrRefreshCredentialWithCompletion:(id /* block */)a0;
- (void)_queue_fetchOrRefreshCredentialWithClientCompletion:(id /* block */)a0;
- (void)_queue_retainDelegate;
- (void)_queue_enqueueRefreshForResult:(id)a0 clientCompletion:(id /* block */)a1;
- (void)_queue_dispatchResult:(id)a0 clientCompletion:(id /* block */)a1;
- (void)_queue_releaseDelegate;
- (BOOL)_queue_hasInFlightRefreshTask;
- (void)_queue_performRefreshRequestTaskForResult:(id)a0;
- (void)_queue_handleDelegateRefreshCompletionForInitialResult:(id)a0 taskState:(id)a1 authResponse:(id)a2 error:(id)a3;
- (void)_setCurrentResultSync:(id)a0;

@end
