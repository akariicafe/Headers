@interface MAXpcManager : NSObject

- (void)setClientName:(id)a0;
- (void)attachProgressHandler:(id)a0 assetId:(id)a1 callBack:(id /* block */)a2 withPurpose:(id)a3;
- (void)clearConnection:(id)a0;
- (void)ensureConnection;
- (void)sendAsync:(id)a0 clientHandler:(id /* block */)a1 taskDescriptor:(id)a2;
- (id)initWithServiceName:(id)a0 callbackQueue:(id)a1;
- (void)dealloc;
- (id)sendSync:(id)a0;
- (void)setClientConnectionHandler;

@end
