@class NSString, MRAVOutputDevice, MRIDSTransportConnection, MRDeviceInfo, NSError;

@interface MRIDSTransport : MRExternalDeviceTransport {
    MRAVOutputDevice *_outputDevice;
    MRIDSTransportConnection *_connection;
    BOOL _shouldUseSystemAuthenticationPrompt;
    MRDeviceInfo *_deviceInfo;
    NSError *_error;
}

@property (retain, nonatomic) NSString *sessionUID;

- (id)hostname;
- (id)uid;
- (id)deviceInfo;
- (void)resetWithError:(id)a0;
- (void)_handleDeviceDisconnected:(id)a0;
- (void)_synchronized_setSessionUID:(id)a0;
- (id)_generateSessionUID;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (id)createConnectionWithUserInfo:(id)a0;
- (void).cxx_destruct;
- (void)_handleDeviceConnected:(id)a0;
- (id)name;
- (id)error;
- (id)initWithOutputDevice:(id)a0;
- (long long)port;

@end
