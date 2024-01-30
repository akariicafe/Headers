@class NSDictionary;

@interface DNDSAppForegroundTriggerConfiguration : NSObject {
    NSDictionary *_bundleIDToModeIdentifierTriggers;
}

- (id)triggeringBundleIdentifiers;
- (void)addTriggerForModeWithIdentifier:(id)a0 onForegroundOfApp:(id)a1;
- (id)modeIdentifierForBundleIdentifier:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
