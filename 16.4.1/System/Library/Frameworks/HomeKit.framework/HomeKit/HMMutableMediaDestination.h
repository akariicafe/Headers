@class NSUUID;

@interface HMMutableMediaDestination : HMMediaDestination

@property unsigned long long supportedOptions;
@property (copy) NSUUID *audioGroupIdentifier;

+ (id)logCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
