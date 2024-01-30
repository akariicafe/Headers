@class NSData;

@interface AVMetadataSaliencyHeatMap : AVMetadataObject <NSCopying>

@property (readonly) long long bytesPerRow;
@property (readonly) long long width;
@property (readonly) long long height;
@property (readonly) NSData *heatMap;

+ (id)saliencyHeatMapWithFigEmbeddedCaptureDeviceObjectDictionary:(id)a0 input:(id)a1 timeStamp:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isVideoMirrored:(BOOL)a2 rollAdjustment:(double)a3;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)a0 input:(id)a1 timeStamp:(id)a2 type:(id)a3;
- (id)initWithHeatMap:(id)a0 width:(long long)a1 height:(long long)a2 bytesPerRow:(long long)a3 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 optionalInfoDict:(id)a7 originalMetadataObject:(id)a8 sourceCaptureInput:(id)a9;

@end
