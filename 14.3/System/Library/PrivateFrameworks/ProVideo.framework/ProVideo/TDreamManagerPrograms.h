@class TDreamMaskBlend, TDreamGaussBlurExpressPassTwoOpt9, TDreamLookupFilterOpt, TDreamOutputBuffer, TDreamGaussBlurExpress, TDreamVignette, TDreamLookupFilter, TDreamColorStroke, TDreamBFBlurPassOne, TDreamColoricer, TDreamEdges, TDreamQuanticeOpt, TDreamBFBlurPassTwo, TDreamZoomOutFX, TDreamBFBlurPassTwoOpt, TDreamBFBlurPassOneOpt, TDreamGrayscale, TDreamGaussBlurExpressPassTwo, TDreamStrokeAndBlendOpt, TDreamColorStrokeOpt, TDreamStroke, TDreamDistortionFX, TDreamEdgesOpt, TDreamGaussBlurExpressOpt9, TDreamVignetteAndQuantice, TDreamStrokeAndBlend, TDreamBlend, TDreamSobelOpt, TDreamSobel;

@interface TDreamManagerPrograms : NSObject

@property (retain) TDreamMaskBlend *blendWithMask;
@property (retain) TDreamBFBlurPassOne *bfBlurPassOne;
@property (retain) TDreamBFBlurPassOneOpt *bfBlurPassOneOpt;
@property (retain) TDreamBFBlurPassTwo *bfBlurPassTwo;
@property (retain) TDreamBFBlurPassTwoOpt *bfBlurPassTwoOpt;
@property (retain) TDreamVignetteAndQuantice *quanticeFilter;
@property (retain) TDreamQuanticeOpt *quanticeFilterOpt;
@property (retain) TDreamSobel *sobelFilter;
@property (retain) TDreamSobelOpt *sobelFilterOpt;
@property (retain) TDreamBlend *blenderFilter;
@property (retain) TDreamEdgesOpt *edgesFilterOpt;
@property (retain) TDreamEdges *edgesFilter;
@property (retain) TDreamStroke *strokeFilter;
@property (retain) TDreamStrokeAndBlend *strokeAndBlendFilter;
@property (retain) TDreamStrokeAndBlendOpt *strokeAndBlendFilterOpt;
@property (retain) TDreamGaussBlurExpress *gaussFilter;
@property (retain) TDreamGaussBlurExpressPassTwo *gaussFilter2;
@property (retain) TDreamGaussBlurExpressOpt9 *gaussFilterOpt9;
@property (retain) TDreamGaussBlurExpressPassTwoOpt9 *gaussFilter2Opt9;
@property (retain) TDreamVignette *vigneteFilter;
@property (retain) TDreamZoomOutFX *zoomOutFx;
@property (retain) TDreamDistortionFX *distortionFx;
@property (retain) TDreamLookupFilter *lookupFilter;
@property (retain) TDreamLookupFilterOpt *lookupFilterOpt;
@property (retain) TDreamColoricer *colorizer;
@property (retain) TDreamGrayscale *grayScaletor;
@property (retain) TDreamColorStrokeOpt *colorStrokeFilterOpt;
@property (retain) TDreamColorStroke *colorStrokeFilter;
@property (retain) TDreamSobel *sobelFilterQ;
@property (retain) TDreamSobelOpt *sobelFilterQOpt;
@property (retain) TDreamGaussBlurExpress *extraGaussFilterQ;
@property (retain) TDreamGaussBlurExpressPassTwo *extraGaussFilter2Q;
@property (retain) TDreamGaussBlurExpressOpt9 *extraGaussFilterQOpt9;
@property (retain) TDreamGaussBlurExpressPassTwoOpt9 *extraGaussFilter2QOpt9;
@property (retain) TDreamOutputBuffer *outputBuffer;

- (void).cxx_destruct;

@end
