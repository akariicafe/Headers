@class NSString;

@interface _DECAppItem : _DECItem

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) long long sources;
@property (nonatomic) long long reason;

+ (unsigned long long)category;
+ (BOOL)supportsSecureCoding;
+ (id)appWithBundleIdentifier:(id)a0 sources:(long long)a1;
+ (id)appWithBundleIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)a0 sources:(long long)a1;
- (BOOL)_isEqualToDECAppItem:(id)a0;

@end
