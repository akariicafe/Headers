@class FCAsyncSerialQueue, NSString, NSURL, FCEndpointConnection;
@protocol FCCoreConfigurationManager;

@interface FCClientEndpointConnection : NSObject <FCCoreConfigurationObserving>

@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) FCEndpointConnection *endpointConnection;
@property (retain, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (retain, nonatomic) FCAsyncSerialQueue *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfigurationManager:(id)a0;
- (void)configurationManager:(id)a0 configurationDidChange:(id)a1;
- (void)reportConcernV2:(id)a0 callbackQueue:(id)a1 completion:(id /* block */)a2;
- (void)submitWebAccessWithTagID:(id)a0 purchaseID:(id)a1 emailAddress:(id)a2 purchaseReceipt:(id)a3 countryCode:(id)a4 languageCode:(id)a5 callbackQueue:(id)a6 completion:(id /* block */)a7;
- (void)updateBaseURLWith:(id)a0;
- (id)initWithEndpointConnection:(id)a0 configurationManager:(id)a1;
- (void).cxx_destruct;
- (void)reportConcern:(id)a0 callbackQueue:(id)a1 completion:(id /* block */)a2;

@end
