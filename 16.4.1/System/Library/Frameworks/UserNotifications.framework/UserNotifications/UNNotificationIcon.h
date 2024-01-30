@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding> {
    id _iconInfo;
    long long _iconInfoType;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)iconForSystemImageNamed:(id)a0;
+ (id)iconAtPath:(id)a0;
+ (id)iconNamed:(id)a0;
+ (id)iconForApplicationIdentifier:(id)a0;

- (id)path;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithIconInfo:(id)a0 type:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)applicationIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)systemImageName;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)name;

@end
