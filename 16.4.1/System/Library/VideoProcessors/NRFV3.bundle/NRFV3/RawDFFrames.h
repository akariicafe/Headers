@class RawDFInputFrame, NSMutableArray, FigMetalContext;

@interface RawDFFrames : NSObject {
    FigMetalContext *_metal;
    int _referenceFrameIndex;
    int _referenceFrameUniqueId;
}

@property (readonly, nonatomic) NSMutableArray *frames;
@property (nonatomic) int referenceFrameIndex;
@property (readonly, nonatomic) int sifrFrameIndex;
@property (readonly, nonatomic) RawDFInputFrame *sifrFrame;
@property (readonly, nonatomic) RawDFInputFrame *referenceFrame;

- (id)initWithMetalContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (int)addFrame:(id)a0;
- (id)getFrameWithUniqueFrameId:(int)a0;
- (void)releaseAll;
- (void)releaseRgbTextures;

@end
