@interface FigCaptureSourceCompanionFormat : NSObject

@property (readonly) int formatIndex;
@property (readonly) struct { int width; int height; } fesDimensions;
@property (readonly) struct { int width; int height; } fesInputCropDimensions;
@property (readonly) struct { int width; int height; } outputCropDimensionsWhenFesIsEnabled;
@property (readonly) struct { int width; int height; } sensorDimensions;
@property (readonly) struct { int width; int height; } sensorCropDimensions;
@property (readonly) struct { int width; int height; } postGDCCropDimensions;
@property (readonly) struct { int width; int height; } highQualitySensorDimensions;
@property (readonly) struct { int width; int height; } geometricDistortionCorrectedNativeDimensions;
@property (readonly) BOOL sifrEnabled;

- (void)dealloc;
- (id)description;
- (id)initWithCompanionFormatDictionary:(id)a0;

@end
