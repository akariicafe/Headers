@class NSArray;

@interface ASDLaunchableAppsRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSArray *bundleIDs;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithBundleIDs:(id)a0;

@end
