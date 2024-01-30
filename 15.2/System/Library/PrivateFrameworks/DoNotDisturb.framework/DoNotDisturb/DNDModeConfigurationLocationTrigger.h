@class NSString, CLCircularRegion;

@interface DNDModeConfigurationLocationTrigger : DNDModeConfigurationTrigger

@property (readonly, copy, nonatomic) CLCircularRegion *region;
@property (readonly, copy, nonatomic) NSString *detail;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)hasSecureData;
- (id)initWithRegion:(id)a0 detail:(id)a1 enabledSetting:(unsigned long long)a2;

@end
