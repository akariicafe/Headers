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

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)performCloudPullWithCompletion:(id /* block */)a0;
- (void)associateFaceCropsWithUUIDs:(id)a0 toPersonWithUUID:(id)a1 forSource:(long long)a2 completion:(id /* block */)a3;
- (void)fetchAllFaceprintsWithCompletion:(id /* block */)a0;
- (void)fetchAllPersonFaceCropsWithCompletion:(id /* block */)a0;
- (void)fetchAllPersonsWithCompletion:(id /* block */)a0;
- (void)fetchAllUnassociatedFaceCropsWithCompletion:(id /* block */)a0;
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchPersonsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchSettingsWithCompletion:(id /* block */)a0;
- (void)removeFaceCropsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)removeFaceprintsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)removePersonsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)addFaceCrops:(id)a0 completion:(id /* block */)a1;
- (void)addFaceprints:(id)a0 completion:(id /* block */)a1;
- (void)addPersonFaceCrops:(id)a0 completion:(id /* block */)a1;
- (void)addPersons:(id)a0 completion:(id /* block */)a1;
- (id)initWithHMHomePersonManager:(id)a0;

@end
