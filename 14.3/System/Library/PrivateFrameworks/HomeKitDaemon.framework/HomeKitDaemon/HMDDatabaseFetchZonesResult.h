@class HMBLocalZone, HMBCloudZone;

@interface HMDDatabaseFetchZonesResult : NSObject

@property (readonly) HMBLocalZone *localZone;
@property (readonly) HMBCloudZone *cloudZone;

- (void).cxx_destruct;
- (id)initWithLocalZone:(id)a0 cloudZone:(id)a1;

@end
