@interface ISIconFactory : ISIcon

+ (id)_iconForURL:(id)a0;
+ (id)_iconForURL:(id)a0 options:(unsigned long long)a1;

- (id)initWithURL:(id)a0 options:(unsigned long long)a1;
- (id)initWithImages:(id)a0;
- (id)initWithApplicationBundleIdentifier:(id)a0;
- (id)initWithApplicationExtensionBundleIdentifier:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithBundleURL:(id)a0 fileExtension:(id)a1;
- (id)initWithFileExtension:(id)a0;
- (id)initWithMIMEType:(id)a0;
- (id)initWithModelCode:(id)a0;
- (id)initWithBundleURL:(id)a0 type:(id)a1;
- (id)_init;
- (id)initWithType:(id)a0;
- (id)initWithResourceProxy:(id)a0;

@end
