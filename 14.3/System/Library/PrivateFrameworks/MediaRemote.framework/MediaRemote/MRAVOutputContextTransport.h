@class NSError, AVOutputDevice, MRAVOutputDevice, MRAVInputStream, AVOutputContext, MRAVOutputStream, NSObject, MRDeviceInfo;
@protocol OS_dispatch_queue;

@interface MRAVOutputContextTransport : MRExternalDeviceTransport {
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_serialQueue;
    AVOutputContext *_outputContext;
    MRDeviceInfo *_deviceInfo;
    NSError *_error;
    MRAVInputStream *_inputStream;
    MRAVOutputStream *_outputStream;
    BOOL _useSystemAuthenticationPrompt;
}

@property (readonly, nonatomic) MRAVOutputDevice *outputDevice;
@property (readonly, nonatomic) AVOutputDevice *avOutputDevice;

- (id)hostname;
- (long long)port;
- (id)deviceInfo;
- (id)uid;
- (void).cxx_destruct;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (BOOL)requiresCustomPairing;
- (BOOL)getInputStream:(id *)a0 outputStream:(id *)a1 userInfo:(id)a2;
- (void)reset;
- (void)dealloc;
- (id)error;
- (id)description;
- (id)name;
- (id)initWithOutputDevice:(id)a0 avOutputDevice:(id)a1 connectionType:(long long)a2;
- (void)_outputContextDevicesDidChangeNotification:(id)a0;

@end
