@class NSMutableData, _HMFCFHTTPServerConnection;

@interface _HMFCFHTTPServerRequest : HMFHTTPRequestInternal

@property (readonly, nonatomic) NSMutableData *bodyData;
@property (readonly, nonatomic) struct _CFHTTPServerRequest { } *requestRef;
@property (readonly, nonatomic) struct __CFReadStream { } *bodyStream;
@property (readonly, weak, nonatomic) _HMFCFHTTPServerConnection *connection;

- (void)setHeaders:(id)a0;
- (id)attributeDescriptions;
- (id)method;
- (void)setURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)headerFields;
- (id)body;
- (id)URL;
- (void)setMethod:(id)a0;
- (void)dealloc;
- (void)setBody:(id)a0;
- (id)responseWithStatusCode:(long long)a0;
- (id)initWithConnection:(id)a0 requestRef:(struct _CFHTTPServerRequest { } *)a1;
- (void)appendBodyData:(id)a0;

@end
