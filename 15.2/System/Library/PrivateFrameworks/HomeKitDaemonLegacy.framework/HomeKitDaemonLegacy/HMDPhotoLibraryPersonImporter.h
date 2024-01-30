@class NSUUID, NSString, HMFTimer, HMIHomePersonManager, HMDCloudPhotosSettingObserver, HMDPhotoLibrary, NSObject, HMIExternalPersonManager;
@protocol OS_dispatch_queue, HMMLogEventSubmitting, HMDPersonDataSource;

@interface HMDPhotoLibraryPersonImporter : HMFObject <HMDPhotoLibraryChangeDelegate, HMFTimerDelegate, HMFLogging, HMDPersonDataReceiver>

@property (readonly, copy) NSUUID *UUID;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDPhotoLibrary *photoLibrary;
@property (weak) id<HMDPersonDataSource> dataSource;
@property (retain) HMFTimer *frequentUpdateTimer;
@property (retain) HMFTimer *infrequentUpdateTimer;
@property (readonly) HMDCloudPhotosSettingObserver *cloudPhotosSettingObserver;
@property (copy) id /* block */ frequentUpdateTimerFactory;
@property (copy) id /* block */ infrequentUpdateTimerFactory;
@property (retain) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMIHomePersonManager *homePersonManager;
@property (readonly) HMIExternalPersonManager *photosPersonManager;

+ (id)logCategory;

- (id)initWithUUID:(id)a0;
- (void)_configure;
- (void)timerDidFire:(id)a0;
- (void)_registerForNotifications;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_unconfigure;
- (void)configureWithDataSource:(id)a0 home:(id)a1;
- (void)photoLibraryPersonsDidChange;
- (id)initWithUUID:(id)a0 photoLibrary:(id)a1 workQueue:(id)a2 cloudPhotosSettingObserver:(id)a3;
- (void)_updatePersonsAndFaceCrops:(BOOL)a0;
- (void)_updatePersonsUsingBatchChange:(id)a0;
- (void)_updateFaceCropsForAllPersonsUsingBatchChange:(id)a0;
- (void)_updateFaceCropsForPersonsWithUpdatedPhotosFaceCropsUsingBatchChange:(id)a0;
- (void)_updateFaceCropsForPersons:(id)a0 usingBatchChange:(id)a1;
- (void)_updateFaceCropsWithCurrentPhotoLibraryFaceCrops:(id)a0 forPersonWithUUID:(id)a1 usingBatchChange:(id)a2;
- (void)_setUpAndStartUpdateTimers;
- (void)_submitLogEventsForUpdatedPersonsWithCurrentPersons:(id)a0 previousPersons:(id)a1;
- (void)_submitLogEventForFaceCrops:(id)a0;
- (void)_handleUpdatedCloudPhotosSetting;
- (void)handleCloudPhotosEnabledDidChangeNotification:(id)a0;

@end
