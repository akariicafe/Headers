@class NSDictionary;

@interface DNDSAppForegroundTriggerConfiguration : NSObject {
    NSDictionary *_bundleIDToModeIdentifierTriggers;
}

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)triggeringBundleIdentifiers;
- (void)addTriggerForModeWithIdentifier:(id)a0 onForegroundOfApp:(id)a1;
- (id)modeIdentifierForBundleIdentifier:(id)a0;

@end
