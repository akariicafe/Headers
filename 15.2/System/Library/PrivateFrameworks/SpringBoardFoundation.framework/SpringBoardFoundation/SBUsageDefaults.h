@class NSNumber;

@interface SBUsageDefaults : BSAbstractDefaultDomain

@property (retain, nonatomic) NSNumber *standbyTime;
@property (retain, nonatomic) NSNumber *batteryUsageTime;
@property (nonatomic) BOOL hasChargedPartially;

- (void)_bindAndRegisterDefaults;
- (void)clearUsageDefaults;

@end
