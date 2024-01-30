@class NSString;

@interface VCStreamInputAudio : VCStreamInput <VCStreamInputCaptureSourceDelegate> {
    void /* function */ *_sampleBufferDelegateCallback;
    void *_sampleBufferDelegateCallbackContext;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sampleBufferDelegateCallbackLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithStreamInputID:(id)a0 format:(struct opaqueCMFormatDescription { } *)a1 delegate:(id)a2 delegateQueue:(id)a3 remoteQueue:(id)a4;
- (void)registerSampleBufferCallback:(void /* function */ *)a0 context:(void *)a1;

@end
