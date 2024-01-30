@class NSString;

@interface WFAppearanceSettingValue : NSObject <WFNaming, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long setting;
@property (readonly, copy, nonatomic) NSString *wfName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSetting:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)valueByInvertingSetting;
- (BOOL)isDarkModeOn;

@end
