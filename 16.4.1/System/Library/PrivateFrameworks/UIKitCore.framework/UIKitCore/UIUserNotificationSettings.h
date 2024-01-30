@class NSSet;

@interface UIUserNotificationSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long types;
@property (readonly, copy, nonatomic) NSSet *categories;

+ (id)settingsForRegisteredSettings:(id)a0 requestedSettings:(id)a1;
+ (id)settingsForTypes:(unsigned long long)a0 categories:(id)a1;
+ (id)settingsForUserNotificationTypes:(unsigned long long)a0 userNotificationActionSettings:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)allowedUserNotificationTypes;
- (id)initWithTypes:(unsigned long long)a0 categories:(id)a1;
- (id)initWithUserNotificationTypes:(unsigned long long)a0 userNotificationActionSettings:(id)a1;
- (BOOL)mayPresentUserNotificationOfType:(unsigned long long)a0;
- (id)userNotificationActionSettings;
- (id)validatedSettings;

@end
