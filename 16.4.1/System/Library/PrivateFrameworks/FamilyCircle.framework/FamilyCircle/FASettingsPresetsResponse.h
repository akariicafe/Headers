@class NSArray, FASettingsPreset;

@interface FASettingsPresetsResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *availablePresets;
@property (readonly, nonatomic) FASettingsPreset *expectedPreset;
@property (readonly, nonatomic) FASettingsPreset *currentPreset;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAvailablePresets:(id)a0 expectedPreset:(id)a1 currentPreset:(id)a2;

@end
