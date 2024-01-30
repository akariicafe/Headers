@class HMIPersonManager, NSString, HMIHomePersonManager, HMIExternalPersonManager, NSObject;
@protocol OS_dispatch_queue, HMDPersonDataSource;

@interface HMDHomeAIPersonDataInterface : HMFObject <HMIPersonManagerDataSource, HMDPersonDataInterface>

@property (readonly) HMIPersonManager *personManager;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) id<HMDPersonDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMIHomePersonManager *homePersonManager;
@property (readonly) HMIExternalPersonManager *photosPersonManager;

- (void).cxx_destruct;
- (void)performCloudPullWithCompletion:(id /* block */)a0;
- (void)fetchAllFaceprintsWithCompletion:(id /* block */)a0;
- (void)fetchAllPersonFaceCropsWithCompletion:(id /* block */)a0;
- (void)fetchAllPersonsWithCompletion:(id /* block */)a0;
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchPersonsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)configureWithDataSource:(id)a0 home:(id)a1;
- (void)handleRemovedFaceCropWithUUID:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleRemovedFaceprintWithUUID:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleRemovedPersonWithUUID:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleUpdatedFaceprint:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleUpdatedIsCurrentDeviceAvailableResident:(BOOL)a0;
- (void)handleUpdatedIsDataSyncInProgress:(BOOL)a0;
- (void)handleUpdatedPerson:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleUpdatedPersonFaceCrop:(id)a0 mirrorOutputFuture:(id)a1;
- (id)initWithPersonManager:(id)a0 workQueue:(id)a1;

@end
