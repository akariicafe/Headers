@class CODistantAccessorySetting;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface COHomeKitSettingUpdateRequest : COMeshRequest

@property (readonly, copy, nonatomic) CODistantAccessorySetting *setting;
@property (readonly, nonatomic) id<NSObject, NSCopying, NSSecureCoding> value;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessorySetting:(id)a0 value:(id)a1;

@end
