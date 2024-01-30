@class NSString, UNNotificationIcon, UNNotificationSourceSettings;

@interface UNNotificationSource : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL isHiddenFromSettings;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) UNNotificationIcon *icon;
@property (readonly, copy, nonatomic) UNNotificationSourceSettings *sourceSettings;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 isHidden:(BOOL)a1 displayName:(id)a2 icon:(id)a3 settings:(id)a4;

@end
