@class FCAsyncSerialQueue, NSString, NSURL, FCEndpointConnection;
@protocol FCCoreConfigurationManager;

@interface FCNewsletterEndpointConnection : NSObject <FCCoreConfigurationObserving>

@property (retain, nonatomic) FCEndpointConnection *endpointConnection;
@property (retain, nonatomic) FCAsyncSerialQueue *serialQueue;
@property (retain, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (retain) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfigurationManager:(id)a0;
- (void)configurationManager:(id)a0 configurationDidChange:(id)a1;
- (void)newsletterSubscribeTo:(id)a0 includeArray:(id)a1 callbackQueue:(id)a2 completion:(id /* block */)a3;
- (void)getNewsletterSubscriptionWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void)updateBaseURL:(id)a0;
- (void)getWebTokenWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithEndpointConnection:(id)a0 configurationManager:(id)a1;
- (void)submitPersonalizationVector:(id)a0 withCallbackQueue:(id)a1 completion:(id /* block */)a2;
- (void)deletePersonalizationVectorWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
