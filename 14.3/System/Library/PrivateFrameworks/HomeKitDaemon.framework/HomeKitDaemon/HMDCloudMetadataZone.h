@class HMDCloudRecord;

@interface HMDCloudMetadataZone : HMDCloudZone

@property (retain, nonatomic) HMDCloudRecord *metadataRecord;

+ (id)zoneRootRecordName;
+ (id)zoneSubscriptionName:(id)a0;
+ (void)createMetadataZoneWithName:(id)a0 owner:(id)a1 cacheZone:(id)a2 cloudCache:(id)a3 completion:(id /* block */)a4;

- (void).cxx_destruct;
- (void)setServerChangeToken:(id)a0;

@end
