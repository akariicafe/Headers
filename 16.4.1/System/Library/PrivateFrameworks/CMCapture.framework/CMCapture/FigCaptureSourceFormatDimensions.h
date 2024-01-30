@interface FigCaptureSourceFormatDimensions : NSObject

@property (readonly) struct { int width; int height; } dimensions;
@property (readonly) struct { int width; int height; } deferredPhotoProxyDimensions;
@property (readonly) BOOL isPrivate;
@property (readonly) int flavor;
@property (readonly) struct { int width; int height; } maxUpscalingDimensions;

+ (id)identifyDimensionsFromFlavor:(int)a0 availableHighResStillImageDimensions:(id)a1;
+ (id)identifySourceFormatDimensionsFromDimensions:(struct { int x0; int x1; })a0 availableHighResStillImageDimensions:(id)a1;
+ (int)identifyResolutionFlavorFromDimensions:(struct { int x0; int x1; })a0 availableHighResStillImageDimensions:(id)a1;

- (BOOL)dimensionsAreEqualToDimensions:(struct { int x0; int x1; })a0;
- (id)initWithDimensions:(struct { int x0; int x1; })a0 deferredPhotoProxyDimensions:(struct { int x0; int x1; })a1 isPrivate:(BOOL)a2 flavor:(int)a3 maxUpscalingDimensions:(struct { int x0; int x1; })a4;
- (id)description;

@end
