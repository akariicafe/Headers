@class NSString;
@protocol BLSHBacklightSceneHostEnvironment;

@interface SBFBacklightSceneHostEnvironmentProviderEntry : NSObject

@property (readonly, nonatomic) id<BLSHBacklightSceneHostEnvironment> environment;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (id)entryWithSceneHostEnvironment:(id)a0 bundleIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)initWithSceneHostEnvironment:(id)a0 bundleIdentifier:(id)a1;

@end
