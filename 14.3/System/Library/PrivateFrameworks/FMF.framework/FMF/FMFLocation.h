@class NSDate, NSString, FMAccuracyOverlay, UIImage, FMFHandle, FMFPlacemark, CLLocation, UIColor;

@interface FMFLocation : NSObject <NSCopying, NSSecureCoding, FMAnnotation>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) FMFHandle *handle;
@property (retain, nonatomic) FMFPlacemark *placemark;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSString *label;
@property (nonatomic, getter=isLocatingInProgress) BOOL locatingInProgress;
@property (copy, nonatomic) NSString *shortAddressString;
@property (copy, nonatomic) NSString *longAddress;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) double maxLocatingInterval;
@property (nonatomic) double TTL;
@property (nonatomic) double distance;
@property (retain, nonatomic) NSString *distanceDescription;
@property (retain, nonatomic) NSString *age;
@property (readonly, copy, nonatomic) NSString *shortAddress;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (retain, nonatomic) FMAccuracyOverlay *overlay;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double distanceFromUser;
@property (nonatomic) BOOL isBorderEnabled;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIImage *largeAnnotationIcon;
@property (retain, nonatomic) UIImage *smallAnnotationIcon;
@property (retain, nonatomic) UIImage *largeOverlayIcon;
@property (retain, nonatomic) UIImage *smallOverlayIcon;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isThisDevice;
- (void)updateLocation:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isValid;
- (id)initWithCoder:(id)a0;
- (BOOL)hasKnownLocation;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (BOOL)isEqual:(id)a0;
- (void)_updateLocation:(id)a0;
- (id)locationShortAddressWithAgeIncludeLocating;
- (void)encodeWithCoder:(id)a0;
- (id)locationShortAddressWithAge;
- (void)updateLocationForCache:(id)a0;
- (id)locationAge;
- (void)resetLocateInProgressTimer;
- (void)resetLocateInProgress:(id)a0;
- (id)initWithDictionary:(id)a0 forHandle:(id)a1 maxLocatingInterval:(double)a2 TTL:(double)a3;
- (id)agingItemTimestamp;
- (long long)distanceThenNameCompare:(id)a0;
- (void)updateHandle:(id)a0;

@end
