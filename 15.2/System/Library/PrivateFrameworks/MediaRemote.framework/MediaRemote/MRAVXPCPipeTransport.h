@class NSError, NSString, NSXPCListenerEndpoint, MRAVOutputDevice, NSXPCConnection, NSOutputStream, NSRunLoop, NSInputStream, NSObject, CURunLoopThread, MRDeviceInfo;
@protocol OS_dispatch_queue;

@interface MRAVXPCPipeTransport : MRExternalDeviceTransport <NSStreamDelegate, MRVirtualDevicePipeProtocol> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    MRDeviceInfo *_deviceInfo;
    NSError *_error;
    NSInputStream *_inputStream;
    NSInputStream *_inputStreamInternal;
    NSOutputStream *_outputStream;
    NSOutputStream *_outputStreamInternal;
    BOOL _useSystemAuthenticationPrompt;
    NSXPCConnection *_pipeConnection;
    NSRunLoop *_runLoop;
    CURunLoopThread *_runLoopThread;
}

@property (readonly, nonatomic) MRAVOutputDevice *outputDevice;
@property (readonly, nonatomic) NSXPCListenerEndpoint *pipeEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hostname;
- (id)uid;
- (id)deviceInfo;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (id)createConnectionWithUserInfo:(id)a0;
- (BOOL)requiresCustomPairing;
- (void)sendData:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (id)error;
- (long long)port;
- (void)dealloc;
- (BOOL)getInputStream:(id *)a0 outputStream:(id *)a1 userInfo:(id)a2;
- (void)_onQueue_resetStreams;
- (id)initWithOutputDevice:(id)a0 pipeEndpoint:(id)a1;
- (void)reset;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;

@end
