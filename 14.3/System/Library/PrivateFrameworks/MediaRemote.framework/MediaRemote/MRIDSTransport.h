@class MRAVOutputDevice, MRIDSOutputStream, MRIDSInputStream;

@interface MRIDSTransport : MRExternalDeviceTransport {
    MRIDSInputStream *_inputStream;
    MRIDSOutputStream *_outputStream;
    MRAVOutputDevice *_outputDevice;
}

- (id)hostname;
- (long long)port;
- (id)deviceInfo;
- (id)uid;
- (void).cxx_destruct;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (BOOL)getInputStream:(id *)a0 outputStream:(id *)a1 userInfo:(id)a2;
- (void)reset;
- (id)error;
- (id)initWithOutputDevice:(id)a0;
- (id)name;
- (void)_handleDeviceDisconnected:(id)a0;

@end
