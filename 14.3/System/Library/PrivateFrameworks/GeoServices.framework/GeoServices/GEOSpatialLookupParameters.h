@class NSArray;

@interface GEOSpatialLookupParameters : NSObject

@property (readonly, nonatomic) struct { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) NSArray *categories;

- (void).cxx_destruct;
- (id)initWithCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1 categories:(id)a2;

@end
