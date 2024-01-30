@interface VKAVCaptureFrame : VKFrame

@property (nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (nonatomic) unsigned int orientation;

- (void)dealloc;
- (struct __CVBuffer { } *)CVImageBuffer;
- (id)imageRequestHandler;

@end
