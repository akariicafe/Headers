@class NSDictionary, AVMetadataTrackedFacesObjectInternal;

@interface AVMetadataTrackedFacesObject : AVMetadataObject <NSCopying> {
    AVMetadataTrackedFacesObjectInternal *_trackedFacesObjectInternal;
}

@property (readonly) NSDictionary *payload;

+ (id)trackedFacesWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 faceTrackingDictionary:(id)a1 input:(id)a2;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isVideoMirrored:(BOOL)a2 rollAdjustment:(double)a3;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 faceTrackingDictionary:(id)a1 input:(id)a2;

@end
