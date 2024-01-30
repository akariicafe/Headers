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

+ (id)logCategory;
+ (id)hmbProperties;

- (void).cxx_destruct;
- (id)init;

@end
