@class RawDFPostDemosaicTuningParams, H13FastPostDemosaicProcMetal, FigMetalContext;

@interface RawDFPostDemosaicStage : NSObject {
    FigMetalContext *_metal;
    H13FastPostDemosaicProcMetal *_stageMetal;
}

@property (retain, nonatomic) RawDFPostDemosaicTuningParams *tuningParams;

+ (int)prewarmShaders:(id)a0;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)runPostDemosaicWithTextureArray:(id)a0 inputROI:(SEL)a1 inputMetadata:(id)a2 outputROI:(id)a3 frameType:(int)a4;
- (BOOL)supportsInPlacePostDemosaicOperation:(int)a0;

@end
