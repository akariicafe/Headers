@class NSString;

@interface _DECAppItem : _DECItem

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) long long sources;
@property (nonatomic) long long reason;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)category;
+ (id)appWithBundleIdentifier:(id)a0 sources:(long long)a1;
+ (id)appWithBundleIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEquivalent:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 sources:(long long)a1;
- (BOOL)_isEqualToDECAppItem:(id)a0;

@end
