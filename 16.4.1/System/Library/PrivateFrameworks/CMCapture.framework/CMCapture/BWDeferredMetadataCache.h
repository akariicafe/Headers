@class BWFigCaptureStream;

@interface BWDeferredMetadataCache : NSObject {
    struct OpaqueFigSimpleMutex { } *_lock;
    BWFigCaptureStream *_stream;
    int _numberOfExpectedSampleBuffersForEachPTS;
    struct BWDeferredMetadataCacheEntry { struct { long long value; int timescale; unsigned int flags; long long epoch; } pts; struct __CFDictionary *metadataDict; short useCount; short age; } _cache[5];
}

@property (nonatomic) int numberOfExpectedSampleBuffersForEachPTS;

- (void)flush;
- (void)addMetadataAttachmentToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 withDutyCycleMetadataCache:(id)a1;
- (void)dealloc;
- (id)initWithCaptureStream:(id)a0 atomicTransactions:(BOOL)a1;

@end
