@protocol CARPFMessageTransportDelegate;

@interface CARPFMessageTransport : CARPFObject

@property (weak) id<CARPFMessageTransportDelegate> delegate;

- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
