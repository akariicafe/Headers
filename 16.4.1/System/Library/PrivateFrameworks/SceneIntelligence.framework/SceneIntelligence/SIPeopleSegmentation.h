@interface SIPeopleSegmentation : SIModel {
    long long _configuration;
    struct __CVBuffer { } *_temporalBuffer;
    int _frameCount;
}

@property (nonatomic) unsigned char snapEveryFrameCount;

+ (struct CGSize { double x0; double x1; })getOutputResolution;
+ (struct CGSize { double x0; double x1; })getInputResolution;

- (void)dealloc;
- (struct CGSize { double x0; double x1; })getOutputResolution;
- (void)_initTemporalBuffer;
- (void)copyResultsToOtherBuffers:(struct __IOSurface { } *)a0;
- (long long)evaluateSemanticsForImage:(struct __CVBuffer { } *)a0 andOutputSurface:(struct __IOSurface { } *)a1;
- (struct CGSize { double x0; double x1; })getInputResolution;
- (id)initWithNetworkConfiguration:(id)a0;
- (BOOL)switchNetworkConfiguration:(long long)a0;

@end
