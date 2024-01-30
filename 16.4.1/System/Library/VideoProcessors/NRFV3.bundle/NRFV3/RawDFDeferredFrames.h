@class FigMetalContext, NSDictionary, RawDFInputFrame, NSMutableArray;

@interface RawDFDeferredFrames : NSObject {
    FigMetalContext *_metal;
}

@property (readonly, nonatomic) NSMutableArray *nonReferenceEv0Frames;
@property (readonly, nonatomic) RawDFInputFrame *referenceEv0Frame;
@property (readonly, nonatomic) RawDFInputFrame *sifrFrame;
@property (readonly, nonatomic) RawDFInputFrame *longFrame;
@property (readonly, nonatomic) RawDFInputFrame *quadraFrame;
@property (readonly, nonatomic) RawDFInputFrame *syntheticReferenceFrame;
@property (readonly, nonatomic) RawDFInputFrame *syntheticReferenceFusionMap;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;

- (id)initWithMetalContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)addFrame:(struct __CVBuffer { } *)a0 metadata:(id)a1 frameType:(int)a2 uniqueFrameId:(int)a3 processFrame:(BOOL *)a4;
- (void)releaseAll;
- (void)releaseRgbTextures;

@end
