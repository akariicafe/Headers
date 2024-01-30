@class NSString, INImageBundle;

@interface _INBundleImage : INImage

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) INImageBundle *imageBundle;

+ (BOOL)supportsSecureCoding;

- (id)_copyWithSubclass:(Class)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithStringRepresentation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringRepresentation;
- (void)_setName:(id)a0;
- (id)_identifier;
- (BOOL)_requiresRetrieval;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_name;
- (id)_bundleIdentifier;
- (id)_bundlePath;
- (void)_setBundlePath:(id)a0;
- (id)_URLRepresentation;
- (id)_initWithURLRepresentation:(id)a0;
- (BOOL)_isSystem;
- (void)_setBundleIdentifier:(id)a0;

@end
