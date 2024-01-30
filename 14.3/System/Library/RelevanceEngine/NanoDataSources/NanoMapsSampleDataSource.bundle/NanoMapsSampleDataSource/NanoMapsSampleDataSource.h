@interface NanoMapsSampleDataSource : REElementDataSource

+ (id)applicationBundleIdentifier;
+ (id)bundleIdentifier;

- (id)supportedSections;
- (void)getElementsInSection:(id)a0 withHandler:(id /* block */)a1;

@end
