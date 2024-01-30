@class NSString;

@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *path;

+ (id)iconAtPath:(id)a0;
+ (id)iconNamed:(id)a0;
+ (id)iconForApplicationIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithName:(id)a0 path:(id)a1 applicationIdentifier:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
