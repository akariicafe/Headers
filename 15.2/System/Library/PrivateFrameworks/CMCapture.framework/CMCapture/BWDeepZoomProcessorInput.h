@protocol BWDeepZoomProcessorInputDelegate;

@interface BWDeepZoomProcessorInput : BWStillImageProcessorInput {
    struct opaqueCMSampleBuffer { } *_sampleBuffer;
    unsigned long long _bufferType;
}

@property (nonatomic) BOOL sampleBufferSet;
@property (retain, nonatomic) id<BWDeepZoomProcessorInputDelegate> delegate;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (readonly, nonatomic) unsigned long long bufferType;

- (id)description;
- (void)dealloc;
- (void)addSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 bufferType:(unsigned long long)a1;

@end
