@class MRAVOutputDeviceInputStream, AVOutputDevice, NSString, MRAVOutputDeviceOutputStream, NSError, NSObject, _MRDeviceInfoMessageProtobuf;
@protocol OS_dispatch_queue;

@interface MRAVOutputDeviceTransport : MRExternalDeviceTransport <MRAVOutputStreamDelegate> {
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_workerQueue;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    NSError *_error;
    MRAVOutputDeviceInputStream *_inputStream;
    MRAVOutputDeviceOutputStream *_outputStream;
    BOOL _useSystemAuthenticationPrompt;
}

@property (readonly, nonatomic) AVOutputDevice *avOutputDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hostname;
- (long long)port;
- (id)deviceInfo;
- (id)uid;
- (void).cxx_destruct;
- (void)_onQueue_resetStreams;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (BOOL)requiresCustomPairing;
- (BOOL)getInputStream:(id *)a0 outputStream:(id *)a1 userInfo:(id)a2;
- (void)reset;
- (id)error;
- (void)outputStream:(id)a0 didCloseCommunicationChannel:(id)a1;
- (id)initWithAVOutputDevice:(id)a0 connectionType:(long long)a1;
- (id)name;
- (void)setError:(id)a0;

@end
