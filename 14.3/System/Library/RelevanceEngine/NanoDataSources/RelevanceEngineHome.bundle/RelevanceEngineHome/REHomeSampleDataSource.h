@interface REHomeSampleDataSource : REElementDataSource

+ (id)bundleIdentifier;

- (id)supportedSections;
- (void)getElementsInSection:(id)a0 withHandler:(id /* block */)a1;

@end
