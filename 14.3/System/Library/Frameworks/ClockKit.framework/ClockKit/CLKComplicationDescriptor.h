@class NSString, CLKUserActivity, NSArray, NSLocale, NSDictionary, NSUserActivity;

@interface CLKComplicationDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL needsAppNotify;
@property (readonly, nonatomic) NSLocale *locale;
@property (retain, nonatomic) CLKUserActivity *clkUserActivity;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSArray *supportedFamilies;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSUserActivity *userActivity;

+ (id)legacyComplicationDescriptor;
+ (id)legacyComplicationDescriptorWithSupportedFamilies:(id)a0;
+ (id)allowedDictionaryClasses;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)validate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)hasUserInfo;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)JSONObjectRepresentation;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 supportedFamilies:(id)a2;
- (id)initWithJSONObjectRepresentation:(id)a0;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 supportedFamilies:(id)a2 userInfo:(id)a3;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 supportedFamilies:(id)a2 userActivity:(id)a3;

@end
