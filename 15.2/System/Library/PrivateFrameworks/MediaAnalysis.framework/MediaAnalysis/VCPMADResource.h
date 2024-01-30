@interface VCPMADResource : NSObject

@property (readonly, nonatomic) double activeCost;
@property (readonly, nonatomic) double inactiveCost;

- (void)purge;
- (id)description;

@end
