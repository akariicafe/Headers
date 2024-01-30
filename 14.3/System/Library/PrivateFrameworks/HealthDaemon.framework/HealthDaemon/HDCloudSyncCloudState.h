@class NSArray, NSDictionary, HDCloudSyncZone, NSSet;

@interface HDCloudSyncCloudState : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDictionary *zonesByIdentifier;
@property (readonly, copy, nonatomic) NSArray *targets;
@property (readonly, copy, nonatomic) NSArray *pushTargets;
@property (readonly, copy, nonatomic) NSArray *pullTargets;
@property (readonly, nonatomic) HDCloudSyncZone *primaryPushZone;
@property (readonly, nonatomic) NSSet *seizedZones;
@property (readonly, nonatomic) NSSet *pullZones;
@property (readonly, nonatomic) int minimumSupportedProtocolVersion;

- (id)detailedDescription;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)cloudStateByAddingZone:(id)a0;
- (id)cloudStateByReplacingTargets:(id)a0;
- (id)cloudStateByRemovingZones:(id)a0;
- (id)initWithZonesByIdentifier:(id)a0 targets:(id)a1;
- (id)zonesForContainerID:(id)a0;
- (id)cloudStateByAddingZones:(id)a0;
- (id)initWithZones:(id)a0;
- (id)unifiedSyncZoneForContainerID:(id)a0;
- (id)masterZoneForContainerID:(id)a0;
- (id)initWithZones:(id)a0 targets:(id)a1;
- (id)_storeDescriptionForTarget:(id)a0;
- (id)initWithZonesByIdentifier:(id)a0;
- (id)cloudStateWithTargets:(id)a0;
- (id)zoneForRecordID:(id)a0 containerIdentifier:(id)a1;

@end
