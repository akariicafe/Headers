@class NSString, REMStore;

@interface _REMDACalDAVSyncReplicaManagerProvider : NSObject <REMReplicaManagerProviding>

@property (retain, nonatomic) REMStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unsavedReplicaManagersForAccountIDs:(id)a0;
+ (id)replicaManagerForAccountID:(id)a0 withStore:(id)a1;

@end
