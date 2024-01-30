@class NSMutableDictionary;

@interface DNDSLocationTriggerConfiguration : NSObject {
    NSMutableDictionary *_modeIdentifierByRegionIdentifier;
    NSMutableDictionary *_regionByRegionIdentifier;
}

+ (id)emptyConfiguration;

- (void)addTriggerForModeWithIdentifier:(id)a0 forRegion:(id)a1;
- (id)modeIdentifierForRegion:(id)a0;
- (id)regionForRegionIdentifier:(id)a0;
- (id)regions;
- (void).cxx_destruct;
- (id)init;
- (id)regionIdentifiers;

@end
