@class ABPKGestureDetectionPipeline;

@interface ABPKBreakthroughPipeline : NSObject {
    ABPKGestureDetectionPipeline *_gestureDetection;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithFrequency:(unsigned int)a0;
- (BOOL)overlayResult:(id)a0 OnImage:(struct __CVBuffer { } *)a1 andGenerateOverlayImage:(struct __CVBuffer { } *)a2;
- (int)runWithInput:(struct __CVBuffer { } *)a0 atTimeStamp:(double)a1 andOutput:(id)a2;

@end
