@class NSNumber;

@interface CODistantAccessoryNumberSetting : CODistantAccessorySetting

@property (readonly, nonatomic) NSNumber *minimumValue;
@property (readonly, nonatomic) NSNumber *maximumValue;
@property (readonly, nonatomic) NSNumber *stepValue;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessorySetting:(id)a0 accessory:(id)a1;

@end
