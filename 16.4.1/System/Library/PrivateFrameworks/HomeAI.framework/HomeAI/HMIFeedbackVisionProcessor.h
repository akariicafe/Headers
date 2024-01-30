@interface HMIFeedbackVisionProcessor : HMFObject

+ (BOOL)reencodeAssetURL:(id)a0 outputURL:(id)a1 bitRate:(long long)a2 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 analysisFPS:(float)a4 sampleFrameHandler:(id /* block */)a5 dropFrameHandler:(id /* block */)a6;

- (unsigned int)_blurRadiusForEvents:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (void)_addEventsToEventQueue:(id)a0 events:(id)a1;
- (void)_blurSampleBufferWithEncoder:(id)a0 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 events:(id)a2;
- (struct __CVBuffer { } *)_createBlurredPixelBuffer:(struct __CVBuffer { } *)a0 events:(id)a1;
- (BOOL)blurFacesFromAssetURL:(id)a0 outputURL:(id)a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 analysisFPS:(float)a3 windowSize:(unsigned long long)a4 faceDetected:(BOOL *)a5;

@end
