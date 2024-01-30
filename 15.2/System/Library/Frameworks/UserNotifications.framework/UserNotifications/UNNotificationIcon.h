@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding> {
    id _iconInfo;
    long long _iconInfoType;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)iconNamed:(id)a0;
+ (id)iconForApplicationIdentifier:(id)a0;
+ (id)iconForSystemImageNamed:(id)a0;
+ (id)iconAtPath:(id)a0;

- (id)systemImageName;
- (id)applicationIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (id)path;
- (unsigned long long)hash;
- (id)_initWithIconInfo:(id)a0 type:(long long)a1;

@end
