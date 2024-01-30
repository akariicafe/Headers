@interface VCPMADResource : NSObject

@property (readonly, nonatomic) long long activeCost;
@property (readonly, nonatomic) long long inactiveCost;

- (void)purge;
- (id)description;

@end
