@class NSString, NSMapTable, NSMutableArray, NSObject;
@protocol REHTTPConnectionDelegate, OS_dispatch_queue;

@interface REHTTPConnection : NSObject <NSStreamDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingResponse;
    NSMapTable *_pendingRequests;
}

@property (readonly, nonatomic) struct _CFHTTPServerConnection { } *connection;
@property (weak, nonatomic) id<REHTTPConnectionDelegate> delegate;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)invalidated;
- (BOOL)open;
- (void)dealloc;
- (id)initWithConnection:(struct _CFHTTPServerConnection { } *)a0;
- (void)close;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_sendResponse:(id)a0;
- (void)_handleCompleteRequest:(id)a0 stream:(id)a1 error:(id)a2;
- (void)didCompleteResponse:(struct _CFHTTPServerResponse { } *)a0 error:(id)a1;
- (void)didRecieveError:(id)a0;
- (void)didRecieveRequest:(struct _CFHTTPServerRequest { } *)a0;

@end
