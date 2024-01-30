@class NSURL, NSString;

@interface ISBundleIcon : ISConcreteIcon

@property (readonly) NSURL *url;
@property (readonly) NSString *type;
@property (readonly) NSString *tag;
@property (readonly) NSString *tagClass;

+ (BOOL)supportsSecureCoding;

- (id)initWithBundleURL:(id)a0 fileExtension:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBundleURL:(id)a0;
- (double)_aspectRatio;
- (id)description;
- (id)_makeAppResourceProvider;
- (id)initWithBundleURL:(id)a0 type:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleURL:(id)a0 type:(id)a1 tag:(id)a2 tagClass:(id)a3;
- (id)makeResourceProvider;
- (id)_makeDocumentResourceProvider;

@end
