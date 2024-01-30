@class NSArray, RTLocation;

@interface RTVisitLocationPoints : NSObject

@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) RTLocation *centroid;

- (void)enumerateLowSpeedSegementsUsingBlock:(id)a0 block:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLocations:(id)a0;
- (id)description;
- (double)duration;
- (id)firstDate;
- (id)lastDate;

@end
