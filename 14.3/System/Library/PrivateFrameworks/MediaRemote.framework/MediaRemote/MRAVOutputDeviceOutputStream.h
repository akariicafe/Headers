@class AVOutputDevice, AVOutputDeviceCommunicationChannel, NSError;
@protocol MRAVOutputStreamDelegate;

@interface MRAVOutputDeviceOutputStream : MRAVBufferedOutputStream {
    AVOutputDevice *_outputDevice;
    NSError *_streamError;
}

@property (readonly, nonatomic) AVOutputDeviceCommunicationChannel *communicationChannel;
@property (nonatomic) BOOL channelIsOpen;
@property (weak, nonatomic) id<MRAVOutputStreamDelegate> streamDelegate;
@property (readonly, nonatomic, getter=isChannelOpen) BOOL channelOpen;

- (id)streamError;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (id)initWithOutputDevice:(id)a0 connectionType:(long long)a1 allowAuthenticationPrompt:(BOOL)a2 userInfo:(id)a3 error:(id *)a4;
- (void)_outputDeviceDidCloseCommunicationChannelNotification:(id)a0;
- (id)description;
- (id)initToMemory;
- (id)initWithURL:(id)a0 append:(BOOL)a1;
- (BOOL)hasSpaceAvailable;
- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;

@end
