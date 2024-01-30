@class NSString, NSArray;

@interface HealthPlatformCore.FeedItemREElementDataSource : REElementDataSource {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ sourceProfiles;
}

@property (class, nonatomic, readonly) NSString *bundleIdentifier;
@property (class, nonatomic, readonly) NSString *applicationBundleIdentifier;

@property (nonatomic, readonly) NSArray *supportedSections;

+ (id)contentAttributes;

- (id)init;
- (void).cxx_destruct;
- (void)getElementsInSection:(id)a0 withHandler:(id /* block */)a1;

@end
