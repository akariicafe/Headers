@class NSData, NSArray, NSDictionary;

@interface CVADisparityPostprocessingRequest : NSObject

@property (readonly) NSData *focusTileData;
@property (readonly) short focusTileXOffset;
@property (readonly) short focusTileYOffset;
@property (readonly) unsigned short focusTileWidth;
@property (readonly) unsigned short focusTileHeight;
@property (readonly) unsigned short focusMapWidth;
@property (readonly) unsigned short focusMapHeight;
@property (readonly) short totalSensorCropXOffset;
@property (readonly) short totalSensorCropYOffset;
@property (readonly) unsigned short totalSensorCropWidth;
@property (readonly) unsigned short totalSensorCropHeight;
@property (readonly) float phaseToBlurFactor;
@property (readonly) struct __CVBuffer { } *sourceColorPixelBuffer;
@property (readonly) struct __CVBuffer { } *segmentationPixelBuffer;
@property (readonly) struct __CVBuffer { } *fixedPointDisparityPixelBuffer;
@property (readonly) struct __CVBuffer { } *destinationDisparityPixelBuffer;
@property (readonly) struct __CVBuffer { } *networkDisparityPixelBuffer;
@property (readonly) NSArray *focusRegion;
@property (readonly) int focusRegionType;
@property (readonly) float currentFocusPosition;
@property (readonly) BOOL isFocalPlaneLocked;
@property (readonly) float focusDistanceToMaxAllowedFocusDistanceRatio;
@property (readonly) struct CVAQuaternion { double w; double x; double y; double z; } sourceColorPixelBufferOrientation;
@property (readonly) struct CVAVector { double x; double y; double z; } sourceColorPixelBufferGravity;
@property (readonly) struct CVAVector { double x; double y; double z; } sourceColorPixelBufferGlobalMotion;
@property (readonly) NSArray *facesArray;
@property (readonly) NSDictionary *faceModel;
@property (readonly) float disparityNormalizationMultiplier;
@property (readonly) float disparityNormalizationOffset;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSourceColorPixelBuffer:(struct __CVBuffer { } *)a0 segmentationPixelBuffer:(struct __CVBuffer { } *)a1 networkDisparityPixelBuffer:(struct __CVBuffer { } *)a2 destinationDisparityPixelBuffer:(struct __CVBuffer { } *)a3 focusRegion:(id)a4 focusRegionType:(int)a5 currentFocusPosition:(float)a6 lockFocalPlane:(BOOL)a7 sourceColorPixelBufferOrientation:(struct CVAQuaternion { double x0; double x1; double x2; double x3; })a8 sourceColorPixelBufferGravity:(struct CVAVector { double x0; double x1; double x2; })a9 sourceColorPixelBufferGlobalMotion:(struct CVAVector { double x0; double x1; double x2; })a10 facesArray:(id)a11 disparityNormalizationMultiplier:(float)a12 disparityNormalizationOffset:(float)a13;
- (id)initWithSourceColorPixelBuffer:(struct __CVBuffer { } *)a0 fixedPointDisparityPixelBuffer:(struct __CVBuffer { } *)a1 destinationDisparityPixelBuffer:(struct __CVBuffer { } *)a2 focusRegion:(id)a3 focusRegionType:(int)a4 currentFocusPosition:(float)a5 lockFocalPlane:(BOOL)a6 sourceColorPixelBufferOrientation:(struct CVAQuaternion { double x0; double x1; double x2; double x3; })a7 sourceColorPixelBufferGravity:(struct CVAVector { double x0; double x1; double x2; })a8 sourceColorPixelBufferGlobalMotion:(struct CVAVector { double x0; double x1; double x2; })a9 facesArray:(id)a10 disparityNormalizationMultiplier:(float)a11 disparityNormalizationOffset:(float)a12;
- (id)initWithSourceColorPixelBuffer:(struct __CVBuffer { } *)a0 segmentationPixelBuffer:(struct __CVBuffer { } *)a1 focusTileData:(id)a2 focusTileXOffset:(short)a3 focusTileYOffset:(short)a4 focusTileWidth:(unsigned short)a5 focusTileHeight:(unsigned short)a6 focusMapWidth:(unsigned short)a7 focusMapHeight:(unsigned short)a8 totalSensorCropXOffset:(short)a9 totalSensorCropYOffset:(short)a10 totalSensorCropWidth:(unsigned short)a11 totalSensorCropHeight:(unsigned short)a12 phaseToBlurFactor:(float)a13 destinationDisparityPixelBuffer:(struct __CVBuffer { } *)a14 focusRegion:(id)a15 focusRegionType:(int)a16 currentFocusPosition:(float)a17 lockFocalPlane:(BOOL)a18 focusDistanceToMaxAllowedFocusDistanceRatio:(float)a19 sourceColorPixelBufferOrientation:(struct CVAQuaternion { double x0; double x1; double x2; double x3; })a20 sourceColorPixelBufferGravity:(struct CVAVector { double x0; double x1; double x2; })a21 sourceColorPixelBufferGlobalMotion:(struct CVAVector { double x0; double x1; double x2; })a22 facesArray:(id)a23;
- (id)initWithSourceColorPixelBuffer:(struct __CVBuffer { } *)a0 segmentationPixelBuffer:(struct __CVBuffer { } *)a1 focusTileData:(id)a2 focusTileXOffset:(short)a3 focusTileYOffset:(short)a4 focusTileWidth:(unsigned short)a5 focusTileHeight:(unsigned short)a6 focusMapWidth:(unsigned short)a7 focusMapHeight:(unsigned short)a8 totalSensorCropXOffset:(short)a9 totalSensorCropYOffset:(short)a10 totalSensorCropWidth:(unsigned short)a11 totalSensorCropHeight:(unsigned short)a12 phaseToBlurFactor:(float)a13 destinationDisparityPixelBuffer:(struct __CVBuffer { } *)a14 focusRegion:(id)a15 focusRegionType:(int)a16 currentFocusPosition:(float)a17 lockFocalPlane:(BOOL)a18 sourceColorPixelBufferOrientation:(struct CVAQuaternion { double x0; double x1; double x2; double x3; })a19 sourceColorPixelBufferGravity:(struct CVAVector { double x0; double x1; double x2; })a20 sourceColorPixelBufferGlobalMotion:(struct CVAVector { double x0; double x1; double x2; })a21 facesArray:(id)a22;
- (id)initWithSourceColorPixelBuffer:(struct __CVBuffer { } *)a0 segmentationPixelBuffer:(struct __CVBuffer { } *)a1 focusTileData:(id)a2 focusTileXOffset:(float)a3 focusTileYOffset:(float)a4 focusTileWidth:(float)a5 focusTileHeight:(float)a6 phaseToBlurFactor:(float)a7 destinationDisparityPixelBuffer:(struct __CVBuffer { } *)a8 focusRegion:(id)a9 focusRegionType:(int)a10 currentFocusPosition:(float)a11 lockFocalPlane:(BOOL)a12 sourceColorPixelBufferOrientation:(struct CVAQuaternion { double x0; double x1; double x2; double x3; })a13 sourceColorPixelBufferGravity:(struct CVAVector { double x0; double x1; double x2; })a14 sourceColorPixelBufferGlobalMotion:(struct CVAVector { double x0; double x1; double x2; })a15 facesArray:(id)a16;

@end
