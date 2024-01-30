@class NSMutableArray, VUIAcquisitionRequest;

@interface VUIStoreAcquisition : NSObject {
    NSMutableArray *_pendingQueue;
    unsigned long long _concurrentCount;
    VUIAcquisitionRequest *_activeRequest;
}

+ (id)sharedInstance;

- (void)_processRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)postCrossProcessNotificationWithBuyParams:(id)a0 error:(id)a1;
- (void)_processFirstRequest;
- (void)_handleCustomRequest:(id)a0;
- (void)_handleRequest:(id)a0;
- (void)_handleResponse:(id)a0 responseDict:(id)a1 forRequest:(id)a2 error:(id)a3 cancelled:(BOOL)a4;
- (id)acquireWithProperties:(id)a0 completionBlock:(id /* block */)a1;
- (void)cancelAcquisition:(id)a0;

@end
