@class ASDJobManifest;

@interface ASDInstallManifestRequestOptions : ASDRequestOptions

@property (copy, nonatomic) ASDJobManifest *manifest;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithManifest:(id)a0;

@end
