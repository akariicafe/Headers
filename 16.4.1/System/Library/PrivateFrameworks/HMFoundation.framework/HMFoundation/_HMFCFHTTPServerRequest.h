@class NSMutableData, _HMFCFHTTPServerConnection;

@interface _HMFCFHTTPServerRequest : HMFHTTPRequestInternal

@property (readonly, nonatomic) NSMutableData *bodyData;
@property (readonly, nonatomic) struct _CFHTTPServerRequest { } *requestRef;
@property (readonly, nonatomic) struct __CFReadStream { } *bodyStream;
@property (readonly, weak, nonatomic) _HMFCFHTTPServerConnection *connection;

- (void)setBody:(id)a0;
- (void)setHeaders:(id)a0;
- (id)headerFields;
- (id)body;
- (void)setURL:(id)a0;
- (id)method;
- (id)URL;
- (void)dealloc;
- (void)setMethod:(id)a0;
- (id)init;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (void)appendBodyData:(id)a0;
- (id)initWithConnection:(id)a0 requestRef:(struct _CFHTTPServerRequest { } *)a1;
- (id)responseWithStatusCode:(long long)a0;

@end
