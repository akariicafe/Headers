@interface MAXpcManager : NSObject

- (void)setClientName:(id)a0;
- (void)sendAsync:(id)a0 clientHandler:(id /* block */)a1 taskDescriptor:(id)a2;
- (void)dealloc;
- (id)sendSync:(id)a0;
- (id)initWithServiceName:(id)a0 callbackQueue:(id)a1;
- (void)setClientConnectionHandler;
- (void)ensureConnection;
- (void)attachProgressHandler:(id)a0 assetId:(id)a1 callBack:(id /* block */)a2;
- (void)clearConnection:(id)a0;

@end
