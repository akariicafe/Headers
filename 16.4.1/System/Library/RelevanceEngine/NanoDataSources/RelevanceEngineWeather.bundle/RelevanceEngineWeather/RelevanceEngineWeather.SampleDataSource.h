@class NSString, NSArray;

@interface RelevanceEngineWeather.SampleDataSource : REElementDataSource

@property (class, nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (class, nonatomic, readonly) NSString *bundleIdentifier;

@property (nonatomic, readonly) NSArray *supportedSections;

- (id)init;
- (void)getElementsInSection:(id)a0 withHandler:(id /* block */)a1;

@end
