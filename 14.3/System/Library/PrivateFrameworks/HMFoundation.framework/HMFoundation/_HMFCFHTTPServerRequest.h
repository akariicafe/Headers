@class NSMutableData, _HMFCFHTTPServerConnection;

@interface _HMFCFHTTPServerRequest : HMFHTTPRequestInternal

@property (readonly, nonatomic) NSMutableData *bodyData;
@property (readonly, nonatomic) struct _CFHTTPServerRequest { } *requestRef;
@property (readonly, nonatomic) struct __CFReadStream { } *bodyStream;
@property (readonly, weak, nonatomic) _HMFCFHTTPServerConnection *connection;

- (id)URL;
- (id)method;
- (id)body;
- (void)setBody:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setMethod:(id)a0;
- (void)dealloc;
- (void)setHeaders:(id)a0;
- (id)headerFields;
- (void)setURL:(id)a0;
- (id)responseWithStatusCode:(long long)a0;
- (id)initWithConnection:(id)a0 requestRef:(struct _CFHTTPServerRequest { } *)a1;
- (void)appendBodyData:(id)a0;

@end
