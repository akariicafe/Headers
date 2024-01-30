@interface _CLLocationFusionInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isCoordinateFused) BOOL coordinateFused;
@property (readonly, nonatomic) struct { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) double horizontalAccuracy;
@property (readonly, nonatomic) int referenceFrame;
@property (readonly, nonatomic) double course;
@property (readonly, nonatomic) double courseAccuracy;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCoordinateFused:(BOOL)a0 coordinate:(struct { double x0; double x1; })a1 horizontalAccuracy:(double)a2 referenceFrame:(int)a3 course:(double)a4 courseAccuracy:(double)a5;
- (void)encodeWithCoder:(id)a0;

@end
