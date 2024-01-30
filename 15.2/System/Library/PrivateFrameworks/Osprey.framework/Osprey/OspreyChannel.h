@class NSError, OspreyDeviceAuthentication, NSString, NSURL, OspreyConnectionPreferences, OspreyChannelRequestOptions, NSObject, OspreyGRPCChannel, OspreyPreferences, NSURLSessionConfiguration;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface OspreyChannel : NSObject <OspreyRPC> {
    NSURL *_url;
    NSURLSessionConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_queue;
    OspreyGRPCChannel *_channel;
    OspreyDeviceAuthentication *_deviceAuthenticator;
    NSObject<OS_dispatch_group> *_validationGroup;
    BOOL _waitingForSignature;
    NSError *_signatureError;
    OspreyPreferences *_preferences;
    OspreyConnectionPreferences *_connectionPreferences;
    OspreyChannelRequestOptions *_defaultRequestOptions;
}

@property (nonatomic) BOOL enableDeviceAuthentication;
@property (nonatomic) BOOL forceHTTPv2;
@property (copy, nonatomic) id /* block */ connectionMetricsHandler;
@property (nonatomic) BOOL useAbsinthe;
@property (copy, nonatomic) NSString *clientTraceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (id)initWithURL:(id)a0 configuration:(id)a1;
- (void)setUseCompression:(BOOL)a0;
- (id)bidirectionalStreamingRequestWithMethodName:(id)a0 requestBuilder:(id /* block */)a1 streamingResponseHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)unaryRequestWithMethodName:(id)a0 requestData:(id)a1 requestBuilder:(id /* block */)a2 responseHandler:(id /* block */)a3;
- (id)initWithURL:(id)a0 configuration:(id)a1 useCache:(BOOL)a2;
- (id)_buildRequestWithMethodName:(id)a0 requestBuilder:(id /* block */)a1;
- (void)_prepareChannelWithRequest:(id)a0 continueWith:(id /* block */)a1;
- (void)preconnect;
- (void)_prepareDeviceAuthenticationWithCompletion:(id /* block */)a0;
- (void)initializeDeviceAuthenticationSessionWithCompletion:(id /* block */)a0;
- (void)serverStreamingRequestWithMethodName:(id)a0 requestData:(id)a1 requestBuilder:(id /* block */)a2 streamingResponseHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (id)clientStreamingRequestWithMethodName:(id)a0 requestBuilder:(id /* block */)a1 responseHandler:(id /* block */)a2;
- (id /* block */)getConnectionMetricsHandler;
- (void)initializeAbsintheSessionWithCompletion:(id /* block */)a0;
- (void)performRequest:(id)a0 handler:(id /* block */)a1;
- (void)performBidirectionalStreamingRequest:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)ocp_setAssociatedHandle:(id)a0;

@end
