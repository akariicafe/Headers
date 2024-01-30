@class NSString, NWURLSessionTaskConfiguration, NSURLRequest, NSObject;
@protocol OS_dispatch_queue, OS_nw_content_context, NWURLSessionRequestBodyProvider, OS_nw_connection, NWURLLoaderClient;

@interface NWURLLoaderHTTP : NSObject <NWURLLoader> {
    BOOL _hasBody;
    BOOL _pendingCompletion;
    NSURLRequest *_request;
    NWURLSessionTaskConfiguration *_configuration;
    id<NWURLLoaderClient> _client;
    NSObject<OS_dispatch_queue> *_queue;
    id<NWURLSessionRequestBodyProvider> _requestBodyProvider;
    NSObject<OS_nw_connection> *_connection;
    NSObject<OS_nw_content_context> *_requestContext;
}

@property (readonly, nonatomic) BOOL allowsWrite;
@property (readonly, nonatomic) NSObject<OS_nw_connection> *underlyingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)readDataOfMinimumIncompleteLength:(unsigned long long)a0 maximumLength:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)readResponse:(id /* block */)a0;
- (void)updateClient:(id)a0;
- (void)writeData:(id)a0 complete:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
