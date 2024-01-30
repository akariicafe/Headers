@class NSNumber, NSDate;

@interface HMDCameraProfileSettingsDerivedPropertiesModel : HMBModel

@property (retain) NSNumber *currentAccessModeField;
@property (retain) NSNumber *currentAccessModeChangeReasonField;
@property (retain) NSDate *currentAccessModeChangeDate;
@property unsigned long long currentAccessMode;
@property long long currentAccessModeChangeReason;

+ (id)hmbProperties;

@end
