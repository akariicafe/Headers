@class NSArray, RTLocation;

@interface RTVisitLocationPoints : NSObject

@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) RTLocation *centroid;

- (id)description;
- (void).cxx_destruct;
- (double)duration;
- (id)init;
- (id)lastDate;
- (void)enumerateLowSpeedSegementsUsingBlock:(id)a0 block:(id /* block */)a1;
- (id)initWithLocations:(id)a0;
- (id)firstDate;

@end
