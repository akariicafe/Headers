@class NSString, NSMutableDictionary, NSMutableSet, NSManagedObjectContext;
@protocol HMDCoreDataCloudTransformDelegate;

@interface HMDCoreDataCloudTransform : HMFObject <HMDCoreDataCloudTransformDelegate, HMFLogging, HMDCoreDataNotificationListener> {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
    NSManagedObjectContext *_lazyManagedObjectContext;
    NSMutableSet *_pendingChangedStoreIdentifiers;
    NSMutableSet *_cloudImportInProgressStoreIdentifiers;
    NSString *_cloudStoreConfigurationName;
    NSString *_workingStoreConfigurationName;
    NSMutableDictionary *_historyTokensByStoreIdentifier;
}

@property (class, readonly, nonatomic) HMDCoreDataCloudTransform *sharedInstance;

@property (weak, nonatomic) id<HMDCoreDataCloudTransformDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_new;
+ (id)logCategory;
+ (Class)exportTransformableClassFromEntity:(id)a0;
+ (Class)importTransformableClassFromEntity:(id)a0;
+ (id)exportTransformableEntityFromEntity:(id)a0;
+ (id)localTransformableEntityFromEntity:(id)a0;

- (void).cxx_destruct;
- (BOOL)cloudTransform:(id)a0 isPermittedForHomeWithModelID:(id)a1;
- (void)coreData:(id)a0 cloudKitExportFinishedForStoreWithIdentifier:(id)a1 duration:(double)a2 error:(id)a3;
- (void)coreData:(id)a0 cloudKitImportFinishedForStoreWithIdentifier:(id)a1 duration:(double)a2 error:(id)a3;
- (void)coreData:(id)a0 cloudKitExportStartedForStoreWithIdentifier:(id)a1;
- (void)coreData:(id)a0 cloudKitImportStartedForStoreWithIdentifier:(id)a1;
- (void)coreData:(id)a0 persistentStoreWithIdentifierDidChange:(id)a1;
- (id)initWithCloudStoreConfigurationName:(id)a0 workingStoreConfigurationName:(id)a1;
- (id)managedObjectContextForCoreData:(id)a0;
- (void)runTransformForCoreData:(id)a0 completion:(id /* block */)a1;

@end
