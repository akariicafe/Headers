@class NSNumber;

@interface VolumeLevel : INObject

@property (copy, nonatomic) NSNumber *volumeSettingValue;
@property (nonatomic) long long volumeSettingState;
@property (nonatomic) long long volumeSettingUnit;
@property (nonatomic) long long volumeSettingQualifier;
@property (copy, nonatomic) NSNumber *resolvedVolumeOutput;
@property (copy, nonatomic) NSNumber *currentVolumeOutput;

@end
