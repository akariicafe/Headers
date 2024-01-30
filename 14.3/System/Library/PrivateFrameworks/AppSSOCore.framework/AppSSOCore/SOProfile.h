@class NSArray, NSString;

@interface SOProfile : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) NSArray *URLPrefix;
@property (retain, nonatomic) NSArray *hosts;
@property (retain, nonatomic) NSString *extensionBundleIdentifier;
@property (retain, nonatomic) NSString *realm;

+ (id)stringWithProfileType:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
