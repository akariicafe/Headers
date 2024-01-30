@class CLSBusinessItem, NSArray, NSString, CLCircularRegion, CLSLitePlacemark;

@interface CLSPlace : CLSPrimitive

@property (readonly, nonatomic) CLSBusinessItem *businessItem;
@property (retain, nonatomic) NSArray *categories;
@property (readonly, nonatomic) CLCircularRegion *region;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, nonatomic) CLSLitePlacemark *placemark;
@property (readonly, nonatomic) NSString *name;

+ (id)placeWithBusinessItem:(id)a0;
+ (id)placeWithLocation:(id)a0;
+ (id)placeWithPlacemark:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToPlace:(id)a0;

@end
