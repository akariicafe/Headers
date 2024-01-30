@interface TRConnection : NSObject

@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ eventMessageHandler;
@property (copy, nonatomic) id /* block */ requestMessageHandler;

- (void)sendEvent:(id)a0;
- (void)sendResponse:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)sendRequest:(id)a0;

@end
