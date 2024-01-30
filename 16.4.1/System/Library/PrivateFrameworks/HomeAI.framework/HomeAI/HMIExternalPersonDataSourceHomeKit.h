@class NSObject, NSString, HMPhotosPersonManager;
@protocol OS_dispatch_queue;

@interface HMIExternalPersonDataSourceHomeKit : HMFObject <HMIExternalPersonManagerDataSource, HMFLogging>

@property (retain) HMPhotosPersonManager *photosPersonManager;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)performCloudPullWithCompletion:(id /* block */)a0;
- (void)fetchAllFaceprintsWithCompletion:(id /* block */)a0;
- (void)fetchAllPersonFaceCropsWithCompletion:(id /* block */)a0;
- (void)fetchAllPersonsWithCompletion:(id /* block */)a0;
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchPersonsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchSettingsWithCompletion:(id /* block */)a0;
- (void)removeFaceprintsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)addFaceprints:(id)a0 completion:(id /* block */)a1;
- (id)initWithHMPhotosPersonManager:(id)a0;

@end
