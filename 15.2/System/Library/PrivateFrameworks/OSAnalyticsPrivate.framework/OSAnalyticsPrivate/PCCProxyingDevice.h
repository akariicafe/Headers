@class PCCEndpoint, NSString, NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface PCCProxyingDevice : NSObject <NSXPCListenerDelegate, OSASyncProxyServices, OSASyncProxyHandler> {
    PCCEndpoint *_endpoint;
    NSDate *_lastTouch;
    NSMutableDictionary *_reqById;
    NSMutableDictionary *_reqByTracker;
    NSObject<OS_dispatch_source> *_expiryTimer;
    NSObject<OS_os_transaction> *_txn;
    NSMutableDictionary *_sync_summary;
    NSMutableDictionary *_tasking_summary;
    int file_count;
    int msg_count;
    int up_count;
    int request_count;
    int expire_count;
    NSObject<OS_dispatch_queue> *_sync_proxy_queue;
}

@property double requestTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<OS_dispatch_queue> *initializationQueue;

- (void)startTimer;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)request:(id)a0 logListWithOptions:(id)a1 onComplete:(id /* block */)a2;
- (void)request:(id)a0 transferLog:(id)a1 withOptions:(id)a2 onComplete:(id /* block */)a3;
- (void)handleMessage:(id)a0 from:(id)a1;
- (void)request:(id)a0 transferGroupWithOptions:(id)a1 onComplete:(id /* block */)a2;
- (void)requestProxyMetadata:(id)a0 onComplete:(id /* block */)a1;
- (void)deliver:(id)a0 tasking:(id)a1 taskId:(id)a2 fromBlob:(id)a3;
- (void)synchronize:(id)a0 withOptions:(id)a1 onComplete:(id /* block */)a2;
- (void)listDevices:(id /* block */)a0;
- (void)request:(id)a0 logList:(id /* block */)a1;
- (void)request:(id)a0 transferLog:(id)a1 onComplete:(id /* block */)a2;
- (void)handleFile:(id)a0 metadata:(id)a1;
- (void)ack:(id)a0 result:(BOOL)a1 error:(id)a2;
- (void)handleConnection:(BOOL)a0 from:(id)a1;
- (void)startRequest:(id)a0 message:(id)a1 onComplete:(id /* block */)a2;
- (void)updateProxiedDeviceMetadata:(id)a0 from:(id)a1;
- (void)finishRequestWithMessage:(id)a0 result:(id)a1;
- (BOOL)isFilenameReasonable:(id)a0;
- (void)onReport:(id)a0;
- (void)summarizeLog:(id)a0 reason:(id)a1;
- (void)addRequest:(id)a0 event:(id)a1 type:(id)a2 onComplete:(id /* block */)a3;
- (void)finishRequest:(id)a0 result:(id)a1;
- (void)diagnosticResultsEvent:(id)a0 type:(id)a1 result:(id)a2;

@end
