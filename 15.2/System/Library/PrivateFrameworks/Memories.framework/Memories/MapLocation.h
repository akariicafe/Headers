@class NSString, NSMutableArray;

@interface MapLocation : NSObject <NSCoding, NSCopying>

@property (nonatomic) int state;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *countryName;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (nonatomic, getter=isResolving) BOOL resolving;
@property (nonatomic, getter=isResolved) BOOL resolved;
@property (retain, nonatomic) NSString *customName;

+ (id)defaultLocation;
+ (id)objectFromPlist:(id)a0 inProject:(id)a1;
+ (id)mapLocationWithLatitude:(double)a0 longitude:(double)a1;
+ (id)mapLocationWithMapItem:(id)a0;
+ (id)mapLocationWithLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (id)mapLocationWithLocation:(id)a0;

- (long long)compare:(id)a0;
- (id)stringRepresentation;
- (BOOL)isEqualToLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)plistRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_resolveWithCompletionHandler:(id /* block */)a0;
- (void)resolveWithCompletionHandler:(id /* block */)a0;
- (BOOL)hasSameCoordinateAsLocation:(id)a0 tolerance:(float)a1;
- (BOOL)hasValidCoordinate;

@end
