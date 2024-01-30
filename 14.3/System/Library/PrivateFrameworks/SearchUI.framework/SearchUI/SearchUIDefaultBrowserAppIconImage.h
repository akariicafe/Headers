@interface SearchUIDefaultBrowserAppIconImage : SearchUIAppIconImage

+ (id)defaultBrowserBundleIdentifier;
+ (void)invalidateDefaultBrowserBundleIdentifier;

- (id)loadImage;
- (BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)a0;
- (id)initWithVariant:(unsigned long long)a0;

@end
