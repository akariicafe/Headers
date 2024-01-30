@class NSString, AVOutputDevice;

@interface MRAVOutputDeviceInputStream : MRAVBufferedInputStream <AVOutputDeviceCommunicationChannelDelegate> {
    AVOutputDevice *_outputDevice;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithURL:(id)a0;
- (void)outputDevice:(id)a0 didReceiveData:(id)a1 fromCommunicationChannel:(id)a2;
- (void)outputDevice:(id)a0 didCloseCommunicationChannel:(id)a1;
- (id)initWithOutputDevice:(id)a0;

@end
