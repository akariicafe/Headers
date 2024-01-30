@class HMFTimer, NSDictionary, NSString;

@interface HMIPersonsModelManager : HMFObject <HMFTimerDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMIPersonsModelManager *sharedInstance;

@property (readonly) NSDictionary *userDefinedPersonLinksByHome;
@property (readonly) HMFTimer *watchdogTimer;
@property (readonly) NSDictionary *personsModelsByHome;
@property (readonly) NSDictionary *torsoModelsByHome;
@property (readonly) NSDictionary *torsoToFaceCropByHome;
@property (readonly) NSDictionary *equivalencyTablesByHome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)persistModel:(id)a0 toPath:(id)a1 error:(id *)a2;
+ (id)loadModelAtPath:(id)a0 error:(id *)a1;
+ (id)personsModelWithFaceObservationsByID:(id)a0 error:(id *)a1;
+ (BOOL)persistUserDefinedPersonLinks:(id)a0 forHomeUUID:(id)a1 error:(id *)a2;
+ (id)getModelStoragePathForModel:(id)a0 error:(id *)a1;
+ (id)getUserDefinedPersonLinksStoragePathForHomeUUID:(id)a0 error:(id *)a1;
+ (id)minimumUUIDInEquivalencyCell:(id)a0;
+ (id)faceObservationFromTorsoprint:(id)a0;
+ (id)getTorsoModelStoragePathForHomeUUID:(id)a0 error:(id *)a1;
+ (BOOL)persistTorsoToFaceCrop:(id)a0 forHomeUUID:(id)a1 error:(id *)a2;
+ (BOOL)persistTorsoprinterVersionForHomeUUID:(id)a0 error:(id *)a1;
+ (id)loadTorsoprinterVersion:(id)a0 error:(id *)a1;
+ (id)getRootModelStoragePathWithError:(id *)a0;
+ (id)getModelStoragePathForHome:(id)a0 error:(id *)a1;
+ (id)getTorsoSubdirectoryPathForHomeUUID:(id)a0 error:(id *)a1;
+ (id)getTorsoToFaceCropStoragePathForHomeUUID:(id)a0 error:(id *)a1;
+ (id)getTorsoprinterVersionStoragePathForHomeUUID:(id)a0 error:(id *)a1;
+ (id)loadUserDefinedPersonLinksForHomeUUID:(id)a0 error:(id *)a1;
+ (id)loadTorsoToFaceCrop:(id)a0 error:(id *)a1;

- (void)_reset;
- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (id)predictPersonFromFaceObservation:(id)a0 homeUUID:(id)a1 error:(id *)a2;
- (BOOL)updateTorsoModelForHome:(id)a0 torsoAnnotations:(id)a1 error:(id *)a2;
- (id)summaryForHomeUUID:(id)a0 error:(id *)a1;
- (BOOL)removePersonsModelForHomeUUID:(id)a0 sourceUUID:(id)a1 error:(id *)a2;
- (id)personsModelWithFaceObservations:(id)a0 error:(id *)a1;
- (BOOL)loadModelsWithError:(id *)a0;
- (id)homePersonsModelForHomeWithUUID:(id)a0;
- (id)buildEquivalencyMapForPersonsModels:(id)a0 userDefinedPersonLinks:(id)a1 error:(id *)a2;
- (BOOL)_isTorsoFaceCropMapStale:(id)a0;
- (BOOL)_hasTorsoprinterVersionChangedForHome:(id)a0;
- (id)equivalencyCellForPerson:(id)a0 homeUUID:(id)a1 error:(id *)a2;
- (id)modelURLsFromPath:(id)a0 error:(id *)a1;
- (id)loadPersonsModelFromURL:(id)a0 externalLibrary:(BOOL)a1 homeUUID:(id)a2 error:(id *)a3;
- (void)_loadTorsoDataForHomeUUID:(id)a0 intoTorsoModelsByHome:(id)a1 torsoToFaceCropByHome:(id)a2;
- (BOOL)_resetStaleTorsoStateForHome:(id)a0 torsoToFaceCropMap:(id)a1;
- (BOOL)buildPersonsModelForHomeUUID:(id)a0 sourceUUID:(id)a1 externalLibrary:(BOOL)a2 faceObservationsByPerson:(id)a3 error:(id *)a4;
- (id)predictHomePersonFromFaceObservation:(id)a0 homeUUID:(id)a1 error:(id *)a2;
- (id)faceCropFromTorsoModelForHomeUUID:(id)a0 personUUID:(id)a1 sourceUUID:(id)a2;
- (id)predictPersonFromTorsoObservation:(id)a0 homeUUID:(id)a1 error:(id *)a2;
- (id)linkedPredictionsForPrediction:(id)a0 homeUUID:(id)a1 error:(id *)a2;

@end
