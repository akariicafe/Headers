@interface _CLLocationFusionInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isCoordinateFused) BOOL coordinateFused;
@property (readonly, nonatomic, getter=isCoordinateFusedWithVL) BOOL coordinateFusedWithVL;
@property (readonly, nonatomic) struct { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) double horizontalAccuracy;
@property (readonly, nonatomic) int referenceFrame;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double verticalAccuracy;
@property (readonly, nonatomic) double course;
@property (readonly, nonatomic) double courseAccuracy;

- (id)initWithCoordinateFused:(BOOL)a0 coordinateFusedWithVL:(BOOL)a1 coordinate:(struct { double x0; double x1; })a2 horizontalAccuracy:(double)a3 referenceFrame:(int)a4 altitude:(double)a5 verticalAccuracy:(double)a6 course:(double)a7 courseAccuracy:(double)a8;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
