@class NSString, NSObject;
@protocol OS_dispatch_queue, HMIVideoDecoderDelegate, OS_dispatch_semaphore;

@interface HMIVideoDecoder : HMIVideoProcessingNode <HMFLogging> {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastSampleBufferPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastSampleBufferDTS;
    struct OpaqueVTDecompressionSession { } *_session;
    NSObject<OS_dispatch_queue> *_queue;
    struct opaqueCMBufferQueue { } *_buffer;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (weak) id<HMIVideoDecoderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)flush;
- (void)_invalidateSession:(BOOL)a0;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_drainBuffer:(BOOL)a0;
- (void)_failWithDescription:(id)a0;
- (BOOL)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 outputFrame:(BOOL)a1;
- (BOOL)_createSessionWithFormatDescription:(const struct opaqueCMFormatDescription { } *)a0;
- (void)_didDecodeSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_reorderBufferDidBecomeFull;

@end
