@class NSUUID, NSSet, NSData, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel : HMBModel <HMFLogging>

@property (class, readonly, nonatomic) NSUUID *modelID;
@property (class, readonly, nonatomic) NSUUID *parentModelID;

@property (retain, nonatomic) NSData *archivedLastSynchronizedRecordIDs;
@property (retain, nonatomic) NSSet *lastSynchronizedRecordIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hmbProperties;
+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;

@end
