@class NSUUID, REMReplicaIDSource, NSString, REMReplicaManager;
@protocol REMReplicaIDHelperOwner, REMReplicaManagerProviding, REMReplicaClockProviding;

@interface REMReplicaIDHelper : NSObject <REMReplicaManagerClient>

@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource;
@property (weak, nonatomic) id<REMReplicaIDHelperOwner> owner;
@property (retain, nonatomic) NSUUID *acquiredReplicaUUID;
@property (retain, nonatomic) id<REMReplicaManagerProviding> lazilyCachedReplicaManagerProvider;
@property (readonly, nonatomic) REMReplicaManager *replicaManager;
@property (retain, nonatomic) id<REMReplicaClockProviding> replicaClockProvider;
@property (readonly, nonatomic) NSString *crdtID;
@property (readonly, nonatomic) NSUUID *replicaUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)replicaUUIDForCreation;
+ (id)nonEditingReplicaUUID;

- (void)didCopy;
- (void)willEdit;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didSerialize;
- (id)clockElementListForReplicaUUID:(id)a0;
- (id)initWithReplicaIDSource:(id)a0 owner:(id)a1 replicaClockProvider:(id)a2;

@end
