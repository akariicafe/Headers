@class NSString;

@interface BCSMeasurementFactory : NSObject <BCSMeasurementFactoryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shardCloudKitFetchTimingMeasurementForType:(long long)a0 identifier:(unsigned long long)a1;
- (id)itemCacheHitMeasurementForItemIdentifier:(id)a0;
- (id)businessLinkChoppedFetchTimingMeasurementForItemIdentifier:(id)a0;
- (id)shardCacheHitMeasurementForShardIdentifier:(id)a0;
- (id)megashardCloudKitFetchTimingMeasurementForType:(long long)a0 identifier:(unsigned long long)a1;
- (id)itemFetchTimingMeasurementForItemIdentifier:(id)a0;
- (id)itemCloudKitFetchAndDecodeTimingMeasurementForType:(long long)a0 identifier:(unsigned long long)a1;
- (id)configCacheHitMeasurementForConfigType:(long long)a0;
- (id)megashardCloudKitFetchAndDecodeTimingMeasurementForType:(long long)a0 identifier:(unsigned long long)a1;
- (id)configCloudKitFetchAndDecodeTimingMeasurementForType:(long long)a0 identifier:(unsigned long long)a1;
- (id)itemCloudKitFetchTimingMeasurementForType:(long long)a0 identifier:(unsigned long long)a1;
- (id)itemIsRegisteredTimingMeasurementForItemIdentifier:(id)a0;
- (id)businessLinkFetchByHashTimingMeasurementForItemIdentifier:(id)a0;
- (id)configResolutionTimingMeasurementForConfigType:(long long)a0;
- (id)configCloudKitFetchTimingMeasurementForType:(long long)a0 identifier:(unsigned long long)a1;
- (id)shardResolutionTimingMeasurementForShardIdentifier:(id)a0;
- (id)shardCloudKitFetchAndDecodeTimingMeasurementForType:(long long)a0 identifier:(unsigned long long)a1;
- (id)itemResolutionTimingMeasurementForItemIdentifier:(id)a0;

@end
