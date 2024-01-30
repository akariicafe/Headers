@protocol HMFMessageTransportDelegate;

@interface HMFMessageTransport : HMFObject

@property (weak) id<HMFMessageTransportDelegate> delegate;

- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
