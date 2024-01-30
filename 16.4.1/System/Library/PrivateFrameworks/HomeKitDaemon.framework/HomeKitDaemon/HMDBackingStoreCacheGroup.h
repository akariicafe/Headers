@class CKServerChangeToken, NSString, HMDBackingStoreCacheZone, CKRecordZoneSubscription;

@interface HMDBackingStoreCacheGroup : HMFObject

@property long long groupID;
@property (retain) CKServerChangeToken *serverChangeToken;
@property (retain) CKRecordZoneSubscription *subscription;
@property (readonly, weak) HMDBackingStoreCacheZone *zone;
@property (readonly) NSString *rootRecordName;
@property (readonly) NSString *subscriptionName;
@property (readonly) NSString *owner;

- (void).cxx_destruct;
- (id)dumpDebug;
- (id)initWithGroupID:(long long)a0 zone:(id)a1 rootRecord:(id)a2 serverChangeToken:(id)a3 subscriptionName:(id)a4 owner:(id)a5 subscription:(id)a6;

@end
