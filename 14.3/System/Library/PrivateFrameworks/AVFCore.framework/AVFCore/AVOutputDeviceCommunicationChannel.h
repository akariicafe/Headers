@protocol AVOutputDeviceCommunicationChannelImpl;

@interface AVOutputDeviceCommunicationChannel : NSObject {
    id<AVOutputDeviceCommunicationChannelImpl> _impl;
}

- (void)close;
- (void)dealloc;
- (void)sendData:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithOutputDeviceCommunicationChannelImpl:(id)a0;

@end
