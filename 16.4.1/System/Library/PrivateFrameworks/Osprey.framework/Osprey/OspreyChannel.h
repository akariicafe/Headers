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

- (void)cancel;
- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 configuration:(id)a1;
- (void)initializeDeviceAuthenticationSessionWithCompletion:(id /* block */)a0;
- (void)preconnect;
- (void)serverStreamingRequestWithMethodName:(id)a0 requestData:(id)a1 requestBuilder:(id /* block */)a2 streamingResponseHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)setUseCompression:(BOOL)a0;
- (id)_buildRequestWithMethodName:(id)a0 requestBuilder:(id /* block */)a1;
- (void)_prepareChannelWithRequest:(id)a0 continueWith:(id /* block */)a1;
- (void)_prepareDeviceAuthenticationWithCompletion:(id /* block */)a0;
- (id)bidirectionalStreamingRequestWithMethodName:(id)a0 requestBuilder:(id /* block */)a1 streamingResponseHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (id)clientStreamingRequestWithMethodName:(id)a0 requestBuilder:(id /* block */)a1 responseHandler:(id /* block */)a2;
- (id /* block */)getConnectionMetricsHandler;
- (id)initWithURL:(id)a0 configuration:(id)a1 useCache:(BOOL)a2;
- (void)initializeAbsintheSessionWithCompletion:(id /* block */)a0;
- (void)ocp_setAssociatedHandle:(id)a0;
- (void)performBidirectionalStreamingRequest:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)performRequest:(id)a0 handler:(id /* block */)a1;
- (void)unaryRequestWithMethodName:(id)a0 requestData:(id)a1 requestBuilder:(id /* block */)a2 responseHandler:(id /* block */)a3;

@end
