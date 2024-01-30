@class NSString, NSDate;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface HPSSetting : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) id homeAdapterLegacySettingValue;
@property (readonly, nonatomic) NSString *lastModifiedDescription;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) id<NSObject, NSCopying, NSSecureCoding> value;

+ (Class)valueClass;
+ (id)settingWithKeyPath:(id)a0 value:(id)a1;
+ (id)valueClasses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithKeyPath:(id)a0 value:(id)a1;
- (BOOL)isEqualToSetting:(id)a0;
- (BOOL)isEquivalentToSetting:(id)a0;

@end
