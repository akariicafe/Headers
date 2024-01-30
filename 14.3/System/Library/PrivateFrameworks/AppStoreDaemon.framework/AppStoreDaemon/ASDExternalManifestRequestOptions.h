@class NSURL;

@interface ASDExternalManifestRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSURL *manifestURL;
@property (nonatomic) BOOL shouldHideUserPrompts;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
