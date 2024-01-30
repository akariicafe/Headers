@class NSString, INImageBundle;

@interface _INBundleImage : INImage

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) INImageBundle *imageBundle;

+ (BOOL)supportsSecureCoding;

- (id)stringRepresentation;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)_name;
- (void)_setName:(id)a0;
- (void).cxx_destruct;
- (id)_identifier;
- (id)_bundleIdentifier;
- (id)_copyWithSubclass:(Class)a0;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)_requiresRetrieval;
- (BOOL)_isSystem;
- (void)_setBundlePath:(id)a0;
- (id)_initWithURLRepresentation:(id)a0;
- (id)_URLRepresentation;
- (void)_setBundleIdentifier:(id)a0;
- (id)_bundlePath;
- (id)initWithStringRepresentation:(id)a0;

@end
