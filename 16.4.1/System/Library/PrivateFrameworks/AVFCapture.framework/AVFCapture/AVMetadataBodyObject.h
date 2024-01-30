@interface AVMetadataBodyObject : AVMetadataObject <NSCopying>

@property (readonly) long long bodyID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isVideoMirrored:(BOOL)a2 rollAdjustment:(double)a3 type:(id)a4 bodyID:(long long)a5;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)a0 input:(id)a1 timeStamp:(id)a2 type:(id)a3;
- (id)initWithType:(id)a0 bodyID:(long long)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 optionalInfoDict:(id)a5 originalMetadataObject:(id)a6 sourceCaptureInput:(id)a7;

@end
