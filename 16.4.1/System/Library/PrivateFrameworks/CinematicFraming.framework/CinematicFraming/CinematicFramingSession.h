@class PerspectiveDistortionCorrectionSession, NSArray, NSString, CinematicDirectorSession, NSObject, CinematicFramingSessionOptions;
@protocol OS_dispatch_queue;

@interface CinematicFramingSession : NSObject {
    CinematicDirectorSession *_directorSession;
    NSObject<OS_dispatch_queue> *_dataOutputDelegateQueue;
    PerspectiveDistortionCorrectionSession *_cropSession;
    CinematicFramingSessionOptions *_options;
    struct { int width; int height; } _outputDimensions;
    struct __CVPixelBufferPool { } *_outputPixelBufferPool;
    unsigned int _roiHeatMap[64];
    BOOL _calibrationDataRegistered;
    NSString *_portType;
    NSString *_deviceModelName;
}

@property (retain, nonatomic) CinematicFramingSessionOptions *options;
@property (nonatomic) int cameraOrientation;
@property (nonatomic) BOOL cameraOrientationCorrectionEnabled;
@property (readonly, nonatomic) NSArray *roiHeatMapCounts;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayViewport;
@property (readonly, nonatomic) int mode;
@property (nonatomic) int outputType;
@property (readonly, nonatomic) unsigned int exifOrientation;
@property (readonly, nonatomic) struct { struct { void /* unknown type, empty encoding */ topLeft; void /* unknown type, empty encoding */ topRight; void /* unknown type, empty encoding */ bottomLeft; void /* unknown type, empty encoding */ bottomRight; } corners; } backProjectedDisplayViewport;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } displayViewportTransformMatrix;
@property (readonly, nonatomic) BOOL displayViewportTransformIsValid;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } subjectRectangle;
@property (readonly, nonatomic) float subjectOccupancyFraction;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ focusPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outputFramingRectOfInterest;

- (float)zoomLevel;
- (void)setZoomLevel:(float)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithOutputDimensions:(struct { int x0; int x1; })a0 mode:(int)a1 portType:(id)a2 deviceModelName:(id)a3;
- (int)processPixelBuffer:(struct __CVBuffer { } *)a0 withMetadata:(id)a1 outputPixelBuffer:(struct __CVBuffer { } *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })warpBoundingBoxInFrameCoordinatesToDisplayCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct opaqueCMSampleBuffer { } *)_createSampleBufferFromPixelBuffer:(struct __CVBuffer { } *)a0 referenceSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)_updateROIHeatMapCountersWithCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithOutputDimensions:(struct { int x0; int x1; })a0 mode:(int)a1 portType:(id)a2;
- (struct __CVBuffer { } *)processPixelBuffer:(struct __CVBuffer { } *)a0 withMetadata:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })processWithMetadata:(id)a0;

@end
