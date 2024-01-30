@class NSSet, NSMutableDictionary, NSData, NSDate, NSString;

@interface PPSettingsGuardedData : NSObject {
    double _cachedWeightMultiplier;
    NSSet *_donationDisabledBundleIdentifiers;
    NSSet *_cloudKitDisabledBundleIdentifiers;
    NSMutableDictionary *_donationDisabledChangeHandlers;
    NSMutableDictionary *_queryPlanLoggingChangeHandlers;
    int _nextChangeHandlerToken;
    BOOL _appConnectionsLocationsEnabled;
    NSDate *_entitiesBackfillTimestamp;
    NSData *_entitiesMappingTrieSha256;
    NSString *_abGroupOverride;
}

- (void).cxx_destruct;

@end
