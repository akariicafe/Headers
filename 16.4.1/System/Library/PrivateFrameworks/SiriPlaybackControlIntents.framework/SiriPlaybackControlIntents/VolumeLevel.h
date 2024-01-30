@class NSNumber;

@interface VolumeLevel : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) NSNumber *volumeSettingValue;
@property (nonatomic) long long volumeSettingState;
@property (nonatomic) long long volumeSettingUnit;
@property (nonatomic) long long volumeSettingQualifier;
@property (nonatomic, retain) NSNumber *resolvedVolumeOutput;
@property (nonatomic, retain) NSNumber *currentVolumeOutput;
@property (nonatomic) long long volumeSettingType;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
