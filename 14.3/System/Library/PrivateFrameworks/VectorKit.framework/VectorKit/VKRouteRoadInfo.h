@class NSString;

@interface VKRouteRoadInfo : NSObject

@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSString *shieldGroup;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeOffset;

- (id)initWithName:(id)a0 shieldGroup:(id)a1 offset:(struct PolylineCoordinate { unsigned int x0; float x1; })a2;
- (void)dealloc;
- (id).cxx_construct;

@end
