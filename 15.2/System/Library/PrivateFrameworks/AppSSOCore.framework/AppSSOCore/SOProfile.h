@class NSArray, NSString;

@interface SOProfile : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) NSArray *URLPrefix;
@property (retain, nonatomic) NSArray *hosts;
@property (retain, nonatomic) NSString *extensionBundleIdentifier;
@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSArray *deniedBundleIdentifiers;
@property (nonatomic) long long screenLockedBehavior;

+ (id)stringWithProfileType:(long long)a0;
+ (id)stringWithScreenLockedBehavior:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
