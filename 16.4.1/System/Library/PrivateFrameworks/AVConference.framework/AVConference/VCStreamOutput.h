@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VCStreamOutput : VCObject <VCStreamSychronizationDelegate, VCRemoteVideoManagerStreamOutputDelegate> {
    struct opaqueVCRemoteImageQueue { } *_remoteQueue;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    int _clientProcessID;
    struct __CFDictionary { } *_attributes;
    id _synchronizationDelegate;
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _useFigRemoteQueue;
}

@property (readonly, nonatomic) long long streamToken;
@property (readonly) BOOL isClientInProcess;
@property (readonly) const struct __CFAllocator { } *backingBufferAllocator;
@property (nonatomic) float synchronizationTimeOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSuspend:(BOOL)a0;
- (id)synchronizationDelegate;
- (int)processID;
- (void)setSynchronizationDelegate:(id)a0;
- (void)didInvalidate;
- (void)dealloc;
- (void)invalidate;
- (id)copyXpcSenderQueue;
- (BOOL)createRemoteQueue;
- (void)didDegrade:(BOOL)a0;
- (void)didPause:(BOOL)a0;
- (void)didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)didStall:(BOOL)a0;
- (void)didUpdateAttachments:(struct __CFDictionary { } *)a0;
- (BOOL)enqueueAttributes:(struct __CFDictionary { } *)a0;
- (id)initWithStreamToken:(long long)a0 clientProcessID:(int)a1 synchronizationDelegate:(id)a2 delegate:(id)a3 delegateQueue:(id)a4;
- (BOOL)initXPCCommandQueue;

@end
