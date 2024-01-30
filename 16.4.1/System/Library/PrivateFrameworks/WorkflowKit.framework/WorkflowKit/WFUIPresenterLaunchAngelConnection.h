@class NSString, BSServiceConnection;
@protocol BSServiceConnectionClient, WFUIPresenterHostInterface;

@interface WFUIPresenterLaunchAngelConnection : NSObject <WFUIPresenterConnection>

@property (nonatomic) BOOL connectionInterrupted;
@property (readonly, nonatomic) BSServiceConnection<BSServiceConnectionClient> *connection;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (nonatomic) id<WFUIPresenterHostInterface> host;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)presenterWithErrorHandler:(id /* block */)a0;
- (void)cleanUpWithReason:(id)a0;
- (void)prepareConnectionIfNecessary;

@end
