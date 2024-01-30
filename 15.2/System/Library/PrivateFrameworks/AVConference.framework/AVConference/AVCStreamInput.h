@class AVConferenceXPCClient, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AVCStreamInput : NSObject {
    AVConferenceXPCClient *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id _delegate;
    NSString *_description;
    BOOL _isStarted;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastSampleBufferTime;
    float _estimatedDataRate;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastHealthPrintTime;
    unsigned int _sampleBufferCount;
}

@property (readonly, nonatomic) long long streamInputID;
@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *formatDescription;

- (void)didStop;
- (id)description;
- (int)setupXPCConnection;
- (void)registerService:(char *)a0 weakSelf:(id)a1 block:(id /* block */)a2;
- (id)delegate;
- (void)dealloc;
- (void)didStart;
- (void)deregisterBlocksForNotifications;
- (int)processFormat:(struct opaqueCMFormatDescription { } *)a0;
- (int)processOptions:(id)a0;
- (int)setupDelegate:(id)a0 delegateQueue:(id)a1;
- (void)registerBlocksForNotification;
- (int)initializeServerSideInputStream;
- (void)didServerDie;
- (void)registerDidServerDieBlock:(id)a0;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1 format:(struct opaqueCMFormatDescription { } *)a2 options:(id)a3 error:(id *)a4;
- (BOOL)pushSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;

@end
