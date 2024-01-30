@class NSObject, NSString, NSMutableArray, HMFNetAddress;
@protocol OS_dispatch_queue, _HMFCFHTTPServerConnectionDelegate;

@interface _HMFCFHTTPServerConnection : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSMutableArray *pendingRequests;
@property (readonly, nonatomic) NSMutableArray *pendingRespones;
@property (readonly, nonatomic) struct _CFHTTPServerConnection { } *internal;
@property (weak) id<_HMFCFHTTPServerConnectionDelegate> delegate;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) HMFNetAddress *address;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)sendResponse:(id)a0;
- (id)logIdentifier;
- (BOOL)open;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)close;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_handleCompletedResponse:(struct _CFHTTPServerResponse { } *)a0 error:(id)a1;
- (void)_handleCompletedReceivedRequest:(id)a0 error:(id)a1;
- (void)_handleReceivedRequestRef:(struct _CFHTTPServerRequest { } *)a0;
- (void)_sendStatusCode:(long long)a0 forRequest:(id)a1;
- (void)_sendStatusCode:(long long)a0 forRequest:(id)a1 bodyData:(id)a2;
- (void)_stopReadBody:(id)a0;
- (void)handleRequest:(id)a0 bodyReadStream:(struct __CFReadStream { } *)a1 eventType:(unsigned long long)a2;
- (id)initWithConnectionRef:(struct _CFHTTPServerConnection { } *)a0;

@end
