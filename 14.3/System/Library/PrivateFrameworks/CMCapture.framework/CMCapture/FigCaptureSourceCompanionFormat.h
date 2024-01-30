@interface FigCaptureSourceCompanionFormat : NSObject

@property (readonly) int formatIndex;
@property (readonly) struct { int width; int height; } fesDimensions;
@property (readonly) struct { int width; int height; } fesInputCropDimensions;
@property (readonly) struct { int width; int height; } outputCropDimensionsWhenFesIsEnabled;
@property (readonly) struct { int width; int height; } sensorCropDimensions;
@property (readonly) BOOL sifrEnabled;

- (void)dealloc;
- (id)initWithCompanionFormatDictionary:(id)a0;
- (id)description;

@end
