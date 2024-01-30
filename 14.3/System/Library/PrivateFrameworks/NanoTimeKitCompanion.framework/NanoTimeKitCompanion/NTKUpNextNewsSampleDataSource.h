@interface NTKUpNextNewsSampleDataSource : REElementDataSource

+ (id)bundleIdentifier;
+ (id)_newCircularTemplate;
+ (id)sampleContent;

- (id)supportedSections;
- (void)getElementsInSection:(id)a0 withHandler:(id /* block */)a1;

@end
