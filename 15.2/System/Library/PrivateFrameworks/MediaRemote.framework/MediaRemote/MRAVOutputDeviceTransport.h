@class NSString, AVOutputDevice, MRAirPlayTransportConnection, NSError, NSObject, _MRDeviceInfoMessageProtobuf;
@protocol OS_dispatch_queue;

@interface MRAVOutputDeviceTransport : MRExternalDeviceTransport {
    NSObject<OS_dispatch_queue> *_workerQueue;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    NSError *_error;
    MRAirPlayTransportConnection *_connection;
    BOOL _useSystemAuthenticationPrompt;
    NSString *_outputDeviceUID;
    NSString *_groupID;
    AVOutputDevice *_avOutputDevice;
}

+ (id)_createConnectionWith:(id)a0 groupID:(id)a1 connectionType:(long long)a2 shouldUseSystemAuthenticationPrompt:(BOOL)a3 userInfo:(id)a4;

- (id)hostname;
- (id)uid;
- (id)deviceInfo;
- (void)resetWithError:(id)a0;
- (id)description;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (id)createConnectionWithUserInfo:(id)a0;
- (BOOL)requiresCustomPairing;
- (id)initWithOutputDevice:(id)a0 groupID:(id)a1 connectionType:(long long)a2;
- (void)setError:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (id)error;
- (long long)port;
- (id)debugDescription;

@end
