@interface WFAccessResourceAvailabilityBlockRegistry : NSObject

@property (class, copy, nonatomic) id /* block */ contactAccessResourceAvailabilityBlock;
@property (class, copy, nonatomic) id /* block */ remoteServerAccessResourceAvailabilityBlock;

+ (void)rediscoverAvailabilityBlocksIfNeeded;

@end
