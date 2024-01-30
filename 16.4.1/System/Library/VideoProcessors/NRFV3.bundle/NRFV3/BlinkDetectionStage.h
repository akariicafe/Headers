@class FigMetalContext;
@protocol MTLBuffer;

@interface BlinkDetectionStage : NSObject {
    id<MTLBuffer> _blinkDetectionResultBuffer;
    FigMetalContext *_metal;
}

+ (int)prewarmShaders:(id)a0;

- (id)init:(id)a0;
- (void).cxx_destruct;
- (int)runOnLumaBand1:(id)a0 lumaBand2:(id)a1 lumaBand3:(id)a2 withFaces:(struct FaceDetectionBuffer { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; unsigned short x1; unsigned short x2; unsigned short x3; }[10])a3 facesCount:(int)a4 plist:(id)a5 resultScore:(float *)a6 frameIdx:(int)a7;

@end
