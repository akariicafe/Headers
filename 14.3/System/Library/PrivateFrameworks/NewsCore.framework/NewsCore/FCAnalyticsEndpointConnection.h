@class FCEndpointConnection, FCAsyncSerialQueue;

@interface FCAnalyticsEndpointConnection : NSObject

@property (retain, nonatomic) FCEndpointConnection *endpointConnection;
@property (retain, nonatomic) FCAsyncSerialQueue *serialQueue;

- (void).cxx_destruct;
- (void)uploadEnvelopeBatch:(id)a0 withURL:(id)a1 valuesByHTTPHeaderField:(id)a2 completion:(id /* block */)a3;
- (id)initWithSourceApplicationBundleIdentifier:(id)a0;
- (id)initWithEndpointConnection:(id)a0;
- (void)uploadEnvelopeBatch:(id)a0 withURL:(id)a1 valuesByHTTPHeaderField:(id)a2 priority:(float)a3 callbackQueue:(id)a4 completion:(id /* block */)a5;

@end
