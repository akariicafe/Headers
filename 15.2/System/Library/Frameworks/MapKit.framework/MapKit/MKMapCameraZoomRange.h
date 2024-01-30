@interface MKMapCameraZoomRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double minCenterCoordinateDistance;
@property (readonly, nonatomic) double maxCenterCoordinateDistance;

- (id)initWithMinCenterCoordinateDistance:(double)a0 maxCenterCoordinateDistance:(double)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToMapCameraZoomRange:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMaxCenterCoordinateDistance:(double)a0;
- (id)initWithMinCenterCoordinateDistance:(double)a0;

@end
