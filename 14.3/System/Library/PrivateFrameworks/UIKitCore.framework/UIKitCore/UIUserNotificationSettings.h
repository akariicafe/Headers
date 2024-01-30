@class NSSet;

@interface UIUserNotificationSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long types;
@property (readonly, copy, nonatomic) NSSet *categories;

+ (id)settingsForTypes:(unsigned long long)a0 categories:(id)a1;
+ (id)settingsForUserNotificationTypes:(unsigned long long)a0 userNotificationActionSettings:(id)a1;
+ (id)settingsForRegisteredSettings:(id)a0 requestedSettings:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)validatedSettings;
- (id)initWithUserNotificationTypes:(unsigned long long)a0 userNotificationActionSettings:(id)a1;
- (id)initWithTypes:(unsigned long long)a0 categories:(id)a1;
- (BOOL)mayPresentUserNotificationOfType:(unsigned long long)a0;
- (unsigned long long)allowedUserNotificationTypes;
- (id)userNotificationActionSettings;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
