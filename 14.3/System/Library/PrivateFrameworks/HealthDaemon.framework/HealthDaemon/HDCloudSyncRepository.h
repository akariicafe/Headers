@class NSMutableArray, NSArray, HDProfile, NSSet, NSString, NSObject, CKContainer;
@protocol OS_dispatch_queue;

@interface HDCloudSyncRepository : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    long long _pullOperationFailureCount;
    NSMutableArray *_ownerIdentifierFetchCompletionBlocks;
}

@property (nonatomic) unsigned long long repositorySettings;
@property (readonly, nonatomic) int deviceMode;
@property (readonly, nonatomic) BOOL shouldPushToUnifiedZone;
@property (readonly, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) CKContainer *primaryCKContainer;
@property (readonly, nonatomic) NSArray *secondaryCKContainers;
@property (readonly, nonatomic) NSSet *allCKContainers;
@property (readonly, copy, nonatomic) NSString *syncCircleIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)unitTest_setShouldPushToUnifiedZone:(BOOL)a0;
- (void)_disableCloudSyncWithCompletion:(id /* block */)a0;
- (id)containerForContainerIdentifier:(id)a0;
- (id)initWithProfile:(id)a0 syncCircleIdentifier:(id)a1 primaryCKContainer:(id)a2 secondaryCKContainers:(id)a3;
- (id)ownerIdentifierForContainer:(id)a0 error:(id *)a1;

@end
