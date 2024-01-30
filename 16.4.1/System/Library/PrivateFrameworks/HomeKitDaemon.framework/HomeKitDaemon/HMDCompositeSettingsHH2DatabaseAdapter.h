@class NSUUID, NSString, HMCContext, NSObject;
@protocol OS_dispatch_queue, HMDCompositeSettingsDatabaseAdapterDelegate;

@interface HMDCompositeSettingsHH2DatabaseAdapter : NSObject <HMFLogging, HMDCompositeSettingsDatabaseAdapter>

@property (weak, nonatomic) id<HMDCompositeSettingsDatabaseAdapterDelegate> delegate;
@property (readonly, nonatomic) NSUUID *accessoryID;
@property (readonly, nonatomic) NSUUID *homeID;
@property (readonly, nonatomic) HMCContext *context;
@property (readonly, nonatomic) NSString *strongRawDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) id rawDatabase;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)startWithDelegate:(id)a0;
- (void)addModel:(id)a0 withOptionsLabel:(id)a1 completion:(id /* block */)a2;
- (id)emptyModelWithID:(id)a0 parentModelID:(id)a1 modelClass:(Class)a2;
- (id)fetchModelWithID:(id)a0;
- (void)startObservingModelWithID:(id)a0;
- (void)stopObservingModelWithID:(id)a0;
- (void)_copySettingsFromModel:(id)a0 toAccessory:(id)a1;
- (void)_handleAccessoryUpdateTransaction:(id)a0;
- (id)_modelFromAccessory:(id)a0;
- (void)_setDefaultVersionsOnModel:(id)a0;
- (id)initWithAccessory:(id)a0 homeID:(id)a1 workingManagedObjectContext:(id)a2 queue:(id)a3 notificationCenter:(id)a4;

@end
