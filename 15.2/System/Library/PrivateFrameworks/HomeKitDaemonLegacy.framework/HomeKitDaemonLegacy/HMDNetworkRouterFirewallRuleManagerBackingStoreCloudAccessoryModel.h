@class NSUUID, NSData, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCloudAccessoryModel : HMBModel <HMFLogging>

@property (class, readonly, nonatomic) NSUUID *namespaceID;

@property (retain, nonatomic) NSData *networkDeclarationsData;
@property (retain, nonatomic) NSData *pairedMetadataData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)hmbProperties;
+ (id)modelIDForRecordID:(id)a0;

@end
