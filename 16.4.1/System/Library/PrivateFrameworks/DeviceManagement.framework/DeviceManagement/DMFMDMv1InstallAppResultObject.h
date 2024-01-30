@class NSString;

@interface DMFMDMv1InstallAppResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) unsigned long long state;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 state:(unsigned long long)a1;

@end
