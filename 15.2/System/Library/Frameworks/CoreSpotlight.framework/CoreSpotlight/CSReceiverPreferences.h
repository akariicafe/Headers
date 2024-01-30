@class NSDictionary;

@interface CSReceiverPreferences : CoreSpotlightPreferences

@property (readonly, copy, nonatomic) NSDictionary *dictionary;

- (void)enableBundleIdentifier:(id)a0;
- (void)disableBundleIdentifier:(id)a0;
- (id)init;

@end
