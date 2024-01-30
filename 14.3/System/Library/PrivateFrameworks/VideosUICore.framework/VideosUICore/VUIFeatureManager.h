@class NSDictionary;

@interface VUIFeatureManager : NSObject

@property (retain, nonatomic) NSDictionary *features;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isFeatureEnabled:(id)a0;
- (id)osFeatureFlagsJSON;
- (void)setFeatureValue:(BOOL)a0 forFeature:(id)a1;
- (id)_allFeatures;
- (id)availableFeatures;

@end
