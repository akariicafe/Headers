@class NSString, HMHomePersonManager, NSObject;
@protocol OS_dispatch_queue;

@interface HMIHomePersonDataSourceHomeKit : HMFObject <HMIHomePersonManagerDataSource, HMFLogging>

@property (retain) HMHomePersonManager *homePersonManager;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)performCloudPullWithCompletion:(id /* block */)a0;
- (void)fetchPersonsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllPersonsWithCompletion:(id /* block */)a0;
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllPersonFaceCropsWithCompletion:(id /* block */)a0;
- (void)fetchAllUnassociatedFaceCropsWithCompletion:(id /* block */)a0;
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllFaceprintsWithCompletion:(id /* block */)a0;
- (void)associateFaceCropsWithUUIDs:(id)a0 toPersonWithUUID:(id)a1 completion:(id /* block */)a2;
- (void)removePersonsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)removeFaceCropsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)removeFaceprintsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchSettingsWithCompletion:(id /* block */)a0;
- (id)logIdentifier;
- (void)addFaceprints:(id)a0 completion:(id /* block */)a1;
- (void)addFaceCrops:(id)a0 completion:(id /* block */)a1;
- (void)addPersons:(id)a0 completion:(id /* block */)a1;
- (void)addPersonFaceCrops:(id)a0 completion:(id /* block */)a1;
- (id)initWithHMHomePersonManager:(id)a0;

@end
