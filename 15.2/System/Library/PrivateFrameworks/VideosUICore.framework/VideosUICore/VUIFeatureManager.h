@class NSDictionary;

@interface VUIFeatureManager : NSObject

@property (retain, nonatomic) NSDictionary *features;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isFeatureEnabled:(id)a0;
- (void)setFeatureValue:(BOOL)a0 forFeature:(id)a1;
- (id)osFeatureFlagsJSON;
- (id)_allFeatures;
- (id)availableFeatures;

@end
