@class NSDictionary;

@interface DMFFetchAppsResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *appsByBundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithAppsByBundleIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
