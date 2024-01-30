@class _CLPlaceInference, NSDate;

@interface CLVisit : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasArrivalDate;
@property (readonly, nonatomic) BOOL hasDepartureDate;
@property (readonly, copy, nonatomic) NSDate *detectionDate;
@property (readonly, nonatomic) _CLPlaceInference *_placeInference;
@property (readonly, copy, nonatomic) NSDate *arrivalDate;
@property (readonly, copy, nonatomic) NSDate *departureDate;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) double horizontalAccuracy;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 horizontalAccuracy:(double)a1 arrivalDate:(id)a2 departureDate:(id)a3 detectionDate:(id)a4 placeInference:(id)a5;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 horizontalAccuracy:(double)a1 arrivalDate:(id)a2 departureDate:(id)a3 detectionDate:(id)a4;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
