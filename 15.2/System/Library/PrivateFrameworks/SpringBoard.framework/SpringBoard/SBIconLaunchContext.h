@class NSSet, SBActivationSettings;

@interface SBIconLaunchContext : NSObject

@property (retain, nonatomic) SBActivationSettings *activationSettings;
@property (copy, nonatomic) NSSet *actions;

- (void).cxx_destruct;

@end
