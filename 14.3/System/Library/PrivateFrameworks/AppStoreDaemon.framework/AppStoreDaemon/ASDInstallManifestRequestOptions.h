@class ASDJobManifest;

@interface ASDInstallManifestRequestOptions : ASDRequestOptions

@property (copy, nonatomic) ASDJobManifest *manifest;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithManifest:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
