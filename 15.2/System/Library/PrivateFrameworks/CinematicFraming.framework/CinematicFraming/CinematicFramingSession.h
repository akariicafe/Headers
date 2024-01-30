@class PerspectiveDistortionCorrectionSession, NSArray, CinematicDirectorSession, NSObject, CinematicFramingSessionOptions;
@protocol OS_dispatch_queue;

@interface CinematicFramingSession : NSObject {
    CinematicDirectorSession *_directorSession;
    NSObject<OS_dispatch_queue> *_dataOutputDelegateQueue;
    PerspectiveDistortionCorrectionSession *_cropSession;
    struct { int width; int height; } _outputDimensions;
    struct __CVPixelBufferPool { } *_outputPixelBufferPool;
    unsigned int _roiHeatMap[64];
}

@property (retain, nonatomic) CinematicFramingSessionOptions *options;
@property (nonatomic) int cameraOrientation;
@property (readonly, nonatomic) NSArray *roiHeatMapCounts;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayViewport;

- (void)setZoomLevel:(float)a0;
- (float)zoomLevel;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)reset;
- (int)processPixelBuffer:(struct __CVBuffer { } *)a0 withMetadata:(id)a1 outputPixelBuffer:(struct __CVBuffer { } *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })warpBoundingBoxInFrameCoordinatesToDisplayCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithOutputDimensions:(struct { int x0; int x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })processWithMetadata:(id)a0;
- (void)_updateROIHeatMapCountersWithCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct __CVBuffer { } *)processPixelBuffer:(struct __CVBuffer { } *)a0 withMetadata:(id)a1;
- (struct opaqueCMSampleBuffer { } *)_createSampleBufferFromPixelBuffer:(struct __CVBuffer { } *)a0 referenceSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;

@end
