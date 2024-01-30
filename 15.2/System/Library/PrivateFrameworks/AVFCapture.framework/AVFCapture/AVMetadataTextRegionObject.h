@interface AVMetadataTextRegionObject : AVMetadataObject

@property (readonly) long long regionID;
@property (readonly) float confidence;
@property (readonly) float angularOffset;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } angularOffsetBounds;

+ (id)textRegionObjectWithDictionary:(id)a0 input:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isVideoMirrored:(BOOL)a2 rollAdjustment:(double)a3;
- (id)initTextRegionObjectWithDictionary:(id)a0 input:(id)a1;

@end
