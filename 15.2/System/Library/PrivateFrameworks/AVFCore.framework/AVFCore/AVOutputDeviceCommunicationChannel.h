@protocol AVOutputDeviceCommunicationChannelDelegate, AVOutputDeviceCommunicationChannelImpl;

@interface AVOutputDeviceCommunicationChannel : NSObject {
    id<AVOutputDeviceCommunicationChannelImpl> _impl;
    id<AVOutputDeviceCommunicationChannelDelegate> _delegate;
}

@property (weak) id<AVOutputDeviceCommunicationChannelDelegate> delegate;

- (void)communicationChannelImpl:(id)a0 didReceiveData:(id)a1;
- (void)communicationChannelImplDidClose:(id)a0;
- (void)sendData:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithOutputDeviceCommunicationChannelImpl:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)dealloc;

@end
