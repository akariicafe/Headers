@class CIImage, NSArray;
@protocol NUImageBuffer;

@interface _PIParallaxLayerStackDebugImageCollector : NSObject

@property (retain, nonatomic) CIImage *debugInputImage;
@property (retain, nonatomic) CIImage *debugMatteImage;
@property (retain, nonatomic) CIImage *debugMatteCropImage;
@property (retain, nonatomic) CIImage *debugLocalConfidenceImage;
@property (retain, nonatomic) CIImage *debugConfidenceMapImage;
@property (retain, nonatomic) CIImage *debugInfillImage;
@property (retain, nonatomic) CIImage *debugLayoutImage;
@property (retain, nonatomic) NSArray *debugIntermediateLayoutImages;
@property (retain, nonatomic) CIImage *debugPreviewImage;
@property (retain, nonatomic) CIImage *debugColorAnalysisImage;
@property (retain, nonatomic) id<NUImageBuffer> debugInputBuffer;
@property (retain, nonatomic) id<NUImageBuffer> debugMatteBuffer;
@property (retain, nonatomic) id<NUImageBuffer> debugMatteCropBuffer;
@property (retain, nonatomic) id<NUImageBuffer> debugLocalConfidenceBuffer;
@property (retain, nonatomic) id<NUImageBuffer> debugConfidenceMapBuffer;
@property (retain, nonatomic) id<NUImageBuffer> debugInfillBuffer;
@property (retain, nonatomic) id<NUImageBuffer> debugLayoutBuffer;
@property (retain, nonatomic) NSArray *debugIntermediateLayoutBuffers;
@property (retain, nonatomic) id<NUImageBuffer> debugPreviewBuffer;
@property (retain, nonatomic) id<NUImageBuffer> debugColorAnalysisBuffer;
@property (retain, nonatomic) id<NUImageBuffer> flattenedBackgroundForDebugPreview;
@property (retain, nonatomic) id<NUImageBuffer> flattenedForegroundForDebugPreview;

- (void).cxx_destruct;
- (void)prepareImagesForItem:(id)a0 renderer:(id)a1 layout:(id)a2 style:(id)a3 inputImage:(id)a4 matteImage:(id)a5 infillImage:(id)a6 foregroundImage:(id)a7 backgroundImage:(id)a8;
- (void)renderImagesWithRenderer:(id)a0;
- (id)resultLayersWithRenderer:(id)a0;

@end
