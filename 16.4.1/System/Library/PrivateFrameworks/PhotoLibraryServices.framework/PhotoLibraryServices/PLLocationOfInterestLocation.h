@class CLLocation;

@interface PLLocationOfInterestLocation : NSObject

@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) double uncertainty;

- (id)description;
- (void).cxx_destruct;
- (double)distanceFromLocation:(id)a0 withTypeRadius:(double)a1;
- (id)initWithLocation:(id)a0 uncertainty:(double)a1;

@end
