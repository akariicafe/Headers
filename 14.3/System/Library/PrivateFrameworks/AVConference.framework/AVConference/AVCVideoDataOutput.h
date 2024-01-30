@class VideoAttributes, AVConferenceXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface AVCVideoDataOutput : NSObject {
    AVConferenceXPCClient *_connection;
    struct opaqueVCRemoteImageQueue { } *_receiverQueue;
}

@property (nonatomic) BOOL isVideoPaused;
@property (nonatomic) BOOL isMediaStalled;
@property (nonatomic) BOOL isVideoDegraded;
@property (nonatomic) BOOL isVideoSuspended;
@property (nonatomic) BOOL isValid;
@property (nonatomic) id delegate;
@property (nonatomic) struct { VideoAttributes *videoAttributes; } videoAttributes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalReceiverQueue;
@property (readonly, nonatomic) long long streamToken;

- (void)dealloc;
- (void)deregisterBlocksForNotifications;
- (void)remoteQueueOperationHandlerWithError:(int)a0 operation:(struct FigRemoteOperation { int x0; int x1; unsigned long long x2; struct __CFString *x3; union { struct { struct __CFDictionary *x0; struct __CFDictionary *x1; } x0; struct { void *x0; struct __IOSurface *x1; struct __IOSurface *x2; } x1; struct { struct opaqueCMSampleBuffer *x0; unsigned long long x1; } x2; struct { struct opaqueCMFormatDescription *x0; } x3; struct { long long x0; struct opaqueCMFormatDescription *x1; } x4; } x4; } *)a1;
- (int)createReceiverQueue;
- (void)setupDelegateQueue:(id)a0;
- (int)setupXPCConnection;
- (int)setupRemoteQueueWithSenderQueue:(id)a0;
- (void)registerBlocksForNotification;
- (void)onReceiveFrame:(struct opaqueCMSampleBuffer { } *)a0;
- (void)terminateConnection;
- (id)initWithStreamToken:(long long)a0 delegate:(id)a1 queue:(id)a2 error:(id *)a3;

@end
