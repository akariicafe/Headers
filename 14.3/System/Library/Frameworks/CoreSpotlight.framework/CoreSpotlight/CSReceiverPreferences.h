@class NSDictionary;

@interface CSReceiverPreferences : CoreSpotlightPreferences

@property (readonly, copy, nonatomic) NSDictionary *dictionary;

- (id)init;
- (void)disableBundleIdentifier:(id)a0;
- (void)enableBundleIdentifier:(id)a0;

@end
