@class NSArray, RTLocation;

@interface RTVisitLocationPoints : NSObject

@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) RTLocation *centroid;

- (id)firstDate;
- (double)duration;
- (id)lastDate;
- (void)enumerateLowSpeedSegementsUsingBlock:(id)a0 block:(id /* block */)a1;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLocations:(id)a0;

@end
