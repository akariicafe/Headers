@class NSString, CLPlacemark, NSTimeZone;

@interface FUAirport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *IATACode;
@property (retain) NSString *name;
@property (retain) NSString *city;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property struct CLLocationCoordinate2D { double latitude; double longitude; } location;
@property (retain) CLPlacemark *placemark;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fetchPlacemarkWithCompletionHandler:(id /* block */)a0;

@end
