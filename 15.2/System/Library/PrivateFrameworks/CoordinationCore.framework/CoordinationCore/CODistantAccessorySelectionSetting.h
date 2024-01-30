@class NSArray;

@interface CODistantAccessorySelectionSetting : CODistantAccessorySetting

@property (readonly, copy, nonatomic) NSArray *items;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessorySetting:(id)a0 accessory:(id)a1;

@end
