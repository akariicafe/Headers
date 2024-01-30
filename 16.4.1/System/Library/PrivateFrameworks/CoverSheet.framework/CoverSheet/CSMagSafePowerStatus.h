@interface CSMagSafePowerStatus : NSObject

@property (nonatomic) unsigned long long powerStatus;
@property (nonatomic) int chargeState;
@property (nonatomic) double powerPercent;

- (id)init;

@end
