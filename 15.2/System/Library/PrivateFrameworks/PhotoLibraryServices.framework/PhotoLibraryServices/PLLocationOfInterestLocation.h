@class CLLocation;

@interface PLLocationOfInterestLocation : NSObject

@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) double uncertainty;

- (id)description;
- (id)initWithLocation:(id)a0 uncertainty:(double)a1;
- (double)distanceFromLocation:(id)a0 withTypeRadius:(double)a1;
- (void).cxx_destruct;

@end
