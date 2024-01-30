@class NSDate, NSString, HDAssertion, NSUUID, HDCloudSyncRepository, HDCloudSyncCachedCloudState, CKOperationGroup, HDCloudSyncContext, NSDictionary, HDCloudSyncComputedState, NSSet, NSMutableSet;

@interface HDCloudSyncOperationConfiguration : NSObject {
    NSMutableSet *_finishedTags;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property BOOL canceled;
@property (readonly, nonatomic) HDCloudSyncRepository *repository;
@property (readonly, nonatomic) CKOperationGroup *operationGroup;
@property (readonly, copy, nonatomic) NSString *syncContainerPrefix;
@property (readonly, copy, nonatomic) HDCloudSyncContext *context;
@property (readonly, nonatomic) HDAssertion *accessibilityAssertion;
@property (readonly, copy, nonatomic) NSUUID *syncIdentifier;
@property (readonly, copy, nonatomic) NSDate *syncDate;
@property (readonly, copy, nonatomic) NSDictionary *analyticsDictionary;
@property (readonly, copy, nonatomic) NSString *shortSyncIdentifier;
@property (readonly, copy, nonatomic) NSString *shortProfileIdentifier;
@property (readonly, copy, nonatomic) HDCloudSyncCachedCloudState *cachedCloudState;
@property (retain) HDCloudSyncComputedState *computedState;
@property (readonly, copy) NSSet *finishedOperationTags;
@property (readonly, nonatomic) BOOL rebaseProhibited;

- (void)cancelAllOperations;
- (void)dealloc;
- (void).cxx_destruct;
- (id)descriptionForSignpost;
- (void)didFinishOperationTag:(id)a0;
- (id)initWithRepository:(id)a0 operationGroup:(id)a1 syncContainerPrefix:(id)a2 context:(id)a3 accessibilityAssertion:(id)a4 syncIdentifier:(id)a5 syncDate:(id)a6;
- (id)pushStoreWithIdentifier:(id)a0 container:(id)a1 error:(id *)a2;
- (id)pushStoresForContainer:(id)a0 error:(id *)a1;
- (BOOL)satisfiesOperationTagDependencies:(id)a0 error:(id *)a1;

@end
