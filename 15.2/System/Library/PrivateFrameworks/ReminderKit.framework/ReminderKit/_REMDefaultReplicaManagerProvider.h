@class NSString, REMStore;

@interface _REMDefaultReplicaManagerProvider : NSObject <REMReplicaManagerProviding>

@property (readonly, nonatomic) REMStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)unsavedReplicaManagersForAccountIDs:(id)a0;
- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)replicaManagerForAccountID:(id)a0;

@end
