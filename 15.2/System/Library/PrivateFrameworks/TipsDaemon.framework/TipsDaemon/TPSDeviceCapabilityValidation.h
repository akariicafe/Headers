@class NSDictionary;

@interface TPSDeviceCapabilityValidation : TPSTargetingValidation

@property (readonly, copy, nonatomic) NSDictionary *queries;

- (id)initWithQueries:(id)a0;

@end
