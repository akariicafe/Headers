@class NSMutableDictionary;

@interface DNDSLocationTriggerConfiguration : NSObject {
    NSMutableDictionary *_modeIdentifierByRegionIdentifier;
    NSMutableDictionary *_regionByRegionIdentifier;
}

+ (id)emptyConfiguration;

- (id)regionForRegionIdentifier:(id)a0;
- (id)regionIdentifiers;
- (id)regions;
- (id)init;
- (id)modeIdentifierForRegion:(id)a0;
- (void)addTriggerForModeWithIdentifier:(id)a0 forRegion:(id)a1;
- (void).cxx_destruct;

@end
