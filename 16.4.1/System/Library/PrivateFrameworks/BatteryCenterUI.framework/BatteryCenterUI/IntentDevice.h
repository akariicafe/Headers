@class NSNumber, NSString;

@interface IntentDevice : INObject

@property (copy, nonatomic) NSNumber *isLowBattery;
@property (copy, nonatomic) NSNumber *isLowPowerModeActive;
@property (copy, nonatomic) NSNumber *percentCharge;
@property (copy, nonatomic) NSString *systemImageName;
@property (copy, nonatomic) NSNumber *isCustomImage;
@property (copy, nonatomic) NSString *accessoryIdentifier;
@property (copy, nonatomic) NSNumber *isInternal;
@property (copy, nonatomic) NSNumber *isSynthesized;
@property (copy, nonatomic) NSNumber *parts;
@property (copy, nonatomic) NSNumber *isCharging;

@end
