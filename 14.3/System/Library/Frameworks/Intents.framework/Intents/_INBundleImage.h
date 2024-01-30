@class NSString, INImageBundle;

@interface _INBundleImage : INImage

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) INImageBundle *imageBundle;

+ (BOOL)supportsSecureCoding;

- (void)_setName:(id)a0;
- (void).cxx_destruct;
- (id)_identifier;
- (id)stringRepresentation;
- (id)_name;
- (id)initWithCoder:(id)a0;
- (id)initWithStringRepresentation:(id)a0;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (BOOL)_requiresRetrieval;
- (id)_copyWithSubclass:(Class)a0;
- (id)_bundleIdentifier;
- (BOOL)_isSystem;
- (void)_setBundlePath:(id)a0;
- (id)_initWithURLRepresentation:(id)a0;
- (void)_setBundleIdentifier:(id)a0;
- (id)_URLRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_bundlePath;

@end
