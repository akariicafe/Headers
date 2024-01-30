@interface NSRESampleDataSource : REElementDataSource

+ (id)applicationBundleIdentifier;
+ (id)bundleIdentifier;
+ (id)overrideLocalizedDataSourceName;
+ (id)overrideDataSourceImage;

- (void)getElementsInSection:(id)a0 withHandler:(id /* block */)a1;
- (id)supportedSections;

@end
