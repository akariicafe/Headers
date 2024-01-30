@class CLLocation;

@interface PLLocationOfInterestLocation : NSObject

@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) double uncertainty;

- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 uncertainty:(double)a1;
- (double)distanceFromLocation:(id)a0 withTypeRadius:(double)a1;
- (id)description;

@end
