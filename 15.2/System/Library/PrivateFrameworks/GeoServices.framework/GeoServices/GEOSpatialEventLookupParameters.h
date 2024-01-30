@class NSArray, NSDateInterval;

@interface GEOSpatialEventLookupParameters : NSObject

@property (readonly, nonatomic) struct { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) int maxResultCount;

- (id)initWithCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1 categories:(id)a2 dateInterval:(id)a3 maxResultCount:(int)a4;
- (id)initWithCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1 categories:(id)a2 dateInterval:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
