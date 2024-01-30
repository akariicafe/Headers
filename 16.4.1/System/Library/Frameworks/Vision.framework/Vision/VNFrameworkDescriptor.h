@class NSBundle, VNResourceVersion;

@interface VNFrameworkDescriptor : VNProcessingDescriptor

@property (readonly, nonatomic) NSBundle *frameworkBundle;
@property (readonly, nonatomic) VNResourceVersion *frameworkVersion;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFrameworkBundleIdentifier:(id)a0;

@end
