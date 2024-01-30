@interface HMDCloudHomeZone : HMDCloudZone

@property (readonly, nonatomic, getter=isSharedHome) BOOL sharedHome;

+ (id)zoneRootRecordName;
+ (id)zoneSubscriptionName:(id)a0;
+ (id)zoneSharedRootRecordName;
+ (void)createHomeZoneWithName:(id)a0 owner:(id)a1 cacheZone:(id)a2 cloudCache:(id)a3 completion:(id /* block */)a4;

- (id)description;
- (void)setServerChangeToken:(id)a0;
- (id)createCloudZoneChangeTemporaryCache:(BOOL)a0;

@end
