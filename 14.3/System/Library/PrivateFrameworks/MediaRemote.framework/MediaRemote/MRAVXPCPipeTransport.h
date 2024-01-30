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
- (long long)port;
- (id)deviceInfo;
- (id)uid;
- (void).cxx_destruct;
- (void)_onQueue_resetStreams;
- (id)initWithOutputDevice:(id)a0 pipeEndpoint:(id)a1;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (BOOL)requiresCustomPairing;
- (BOOL)getInputStream:(id *)a0 outputStream:(id *)a1 userInfo:(id)a2;
- (void)reset;
- (void)dealloc;
- (void)sendData:(id)a0;
- (id)error;
- (id)name;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;

@end
