@interface SASProximitySessionTransport : NSObject

@property (copy) id /* block */ receivedDataBlock;

- (void).cxx_destruct;
- (void)activate;
- (void)invalidate;
- (void)sendData:(id)a0 response:(id /* block */)a1;

@end
