@class HMFNetAddress, NSString, _HMFCFHTTPServerConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HMFHTTPClientConnectionDelegate;

@interface HMFHTTPClientConnection : HMFObject <_HMFCFHTTPServerConnectionDelegate, HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSMutableArray *pendingRespones;
@property (readonly, nonatomic) _HMFCFHTTPServerConnection *internal;
@property (readonly, nonatomic) HMFNetAddress *peerAddress;
@property (weak) id<HMFHTTPClientConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)openWithCompletionHandler:(id /* block */)a0;
- (id)shortDescription;
- (void)close;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendResponse:(id)a0 completionHandler:(id /* block */)a1;
- (void)connection:(id)a0 didReceiveRequest:(id)a1;

@end
