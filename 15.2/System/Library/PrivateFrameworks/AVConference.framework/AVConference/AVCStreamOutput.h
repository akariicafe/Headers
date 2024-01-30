@class NSString, AVConferenceXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface AVCStreamOutput : NSObject <VCRemoteVideoManagerStreamOutputDelegate> {
    AVConferenceXPCClient *_connection;
    struct __CFDictionary { } *_attachments;
    BOOL _isMediaStalled;
    int _processID;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastHealthPrintTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastSampleBufferTime;
    unsigned int _sampleBufferCount;
    float _estimatedDataRate;
    struct opaqueVCRemoteImageQueue { } *_receiverQueue;
}

@property (nonatomic) BOOL isPaused;
@property (nonatomic) BOOL isStalled;
@property (nonatomic) BOOL isDegraded;
@property (nonatomic) BOOL isSuspended;
@property (nonatomic) BOOL isValid;
@property (nonatomic) id delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalReceiverQueue;
@property (readonly, nonatomic) long long streamToken;
@property (nonatomic) float synchronizationTimeOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didInvalidate;
- (void)didSuspend:(BOOL)a0;
- (int)processID;
- (int)setupXPCConnection;
- (void)dealloc;
- (void)deregisterBlocksForNotifications;
- (void)remoteQueueOperationHandlerWithError:(int)a0 operation:(struct FigRemoteOperation { int x0; int x1; unsigned long long x2; struct __CFString *x3; union { struct { struct __CFDictionary *x0; struct __CFDictionary *x1; } x0; struct { void *x0; struct __IOSurface *x1; struct __IOSurface *x2; } x1; struct { struct opaqueCMSampleBuffer *x0; unsigned long long x1; } x2; struct { struct opaqueCMFormatDescription *x0; } x3; struct { long long x0; struct opaqueCMFormatDescription *x1; } x4; } x4; } *)a1;
- (void)registerBlocksForNotification;
- (int)createReceiverQueue;
- (void)setupDelegateQueue:(id)a0;
- (void)terminateConnection;
- (int)setupRemoteQueueWithSenderQueue:(id)a0;
- (void)didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)didUpdateAttachments:(struct __CFDictionary { } *)a0;
- (void)didPause:(BOOL)a0;
- (void)didStall:(BOOL)a0;
- (void)didDegrade:(BOOL)a0;
- (void)serviceHandlerDidDieWithArguments:(id)a0 error:(id)a1;
- (void)serviceHandlerDidPauseWithArguments:(id)a0 error:(id)a1;
- (void)serviceHandlerDidStallWithArguments:(id)a0 error:(id)a1;
- (void)serviceHandlerDidDegradeWithArguments:(id)a0 error:(id)a1;
- (void)serviceHandlerDidSuspendWithArguments:(id)a0 error:(id)a1;
- (void)serviceHandlerDidReleaseOutputQueueWithArguments:(id)a0 error:(id)a1;
- (id)initWithStreamToken:(long long)a0 delegate:(id)a1 queue:(id)a2 error:(id *)a3;

@end
