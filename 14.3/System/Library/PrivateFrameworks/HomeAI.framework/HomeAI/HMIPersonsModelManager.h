@class HMFTimer, NSDictionary, HMFUnfairLock, NSString;

@interface HMIPersonsModelManager : HMFObject <HMFTimerDelegate, HMFLogging>

@property (class, readonly) HMIPersonsModelManager *sharedInstance;

@property (readonly) NSDictionary *userDefinedPersonLinksByHome;
@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly) HMFTimer *watchdogTimer;
@property (readonly) NSDictionary *personsModelsByHome;
@property (readonly) NSDictionary *equivalencyTablesByHome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)loadModelAtPath:(id)a0 error:(id *)a1;
+ (BOOL)persistModel:(id)a0 toPath:(id)a1 error:(id *)a2;
+ (BOOL)persistUserDefinedPersonLinks:(id)a0 forHomeUUID:(id)a1 error:(id *)a2;
+ (id)getModelStoragePathForModel:(id)a0 error:(id *)a1;
+ (id)getUserDefinedPersonLinksStoragePathForHomeUUID:(id)a0 error:(id *)a1;
+ (id)getRootModelStoragePathWithError:(id *)a0;
+ (id)getModelStoragePathForHome:(id)a0 error:(id *)a1;
+ (id)loadUserDefinedPersonLinksForHomeUUID:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)timerDidFire:(id)a0;
- (id)predictPersonFromFaceObservation:(id)a0 homeUUID:(id)a1 error:(id *)a2;
- (id)summaryForHomeUUID:(id)a0 error:(id *)a1;
- (BOOL)removePersonsModelForHomeUUID:(id)a0 sourceUUID:(id)a1 error:(id *)a2;
- (BOOL)loadModelsWithError:(id *)a0;
- (id)homePersonsModelForHomeWithUUID:(id)a0;
- (id)buildEquivalencyMapForPersonsModels:(id)a0 userDefinedPersonLinks:(id)a1 error:(id *)a2;
- (id)modelURLsFromPath:(id)a0 error:(id *)a1;
- (id)loadPersonsModelFromURL:(id)a0 externalLibrary:(BOOL)a1 homeUUID:(id)a2 error:(id *)a3;
- (BOOL)buildPersonsModelForHomeUUID:(id)a0 sourceUUID:(id)a1 externalLibrary:(BOOL)a2 faceObservationsByPerson:(id)a3 error:(id *)a4;
- (id)predictHomePersonFromFaceObservation:(id)a0 homeUUID:(id)a1 error:(id *)a2;
- (id)equivalencyCellForPerson:(id)a0 homeUUID:(id)a1 error:(id *)a2;

@end
