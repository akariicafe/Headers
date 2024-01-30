@class NSString;

@interface BCSRealTimeTimingSignposter : BCSRealTimeSignposter <BCSRealTimeTimingMeasurementHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signposterForBCSType:(long long)a0;
+ (id)signposterForBCSType:(long long)a0 signpostIdentifier:(unsigned long long)a1;
+ (id)signposterForShardIdentifier:(id)a0;
+ (id)signposterForItemIdentifier:(id)a0;

- (void)_handleCloudKitConfigFetch:(long long)a0;
- (void)_handleCloudKitShardFetch:(long long)a0;
- (void)_handleCloudKitItemFetch:(long long)a0;
- (void)_handleCloudKitMegashardFetch:(long long)a0;
- (void)_handleCloudKitConfigFetchAndDecode:(long long)a0;
- (void)_handleCloudKitShardFetchAndDecode:(long long)a0;
- (void)_handleCloudKitItemFetchAndDecode:(long long)a0;
- (void)_handleCloudKitMegashardFetchAndDecode:(long long)a0;
- (void)_handleConfigResolution:(long long)a0;
- (void)_handleShardResolution:(long long)a0;
- (void)_handleItemResolution:(long long)a0;
- (void)_handleItemFetch:(long long)a0;
- (void)_handleBusinessLinkChoppedFetch:(long long)a0;
- (void)_handleBusinessLinkHashFetch:(long long)a0;
- (void)_handleItemIsRegistered:(long long)a0;
- (void)timingMeasurementDidBegin:(id)a0;
- (void)timingMeasurementDidEnd:(id)a0;

@end
