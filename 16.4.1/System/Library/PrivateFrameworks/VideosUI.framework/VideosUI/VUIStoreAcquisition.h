@class NSMutableArray, VUIAcquisitionRequest;

@interface VUIStoreAcquisition : NSObject {
    NSMutableArray *_pendingQueue;
    unsigned long long _concurrentCount;
    VUIAcquisitionRequest *_activeRequest;
}

+ (id)sharedInstance;

- (void)_processRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_handleRequest:(id)a0;
- (void)_handleCustomRequest:(id)a0;
- (void)_handleResponse:(id)a0 responseDict:(id)a1 forRequest:(id)a2 error:(id)a3 cancelled:(BOOL)a4;
- (void)_processFirstRequest;
- (id)acquireWithProperties:(id)a0 completionBlock:(id /* block */)a1;
- (void)cancelAcquisition:(id)a0;
- (void)postCrossProcessNotificationWithBuyParams:(id)a0 error:(id)a1;

@end
