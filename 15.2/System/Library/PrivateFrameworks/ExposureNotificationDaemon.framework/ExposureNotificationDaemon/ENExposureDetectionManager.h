@class ENXPCServiceClient, ENConfigurationStore, NSBackgroundActivityScheduler, ENDownloadManager, ENExposureDatabase, NSObject;
@protocol OS_dispatch_queue, ENExposureDetectionManagerDelegate;

@interface ENExposureDetectionManager : NSObject {
    ENConfigurationStore *_configurationStore;
    ENDownloadManager *_downloadManager;
    ENExposureDatabase *_exposureDatabase;
    ENXPCServiceClient *_xpcServiceClient;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    BOOL _activated;
}

@property (weak, nonatomic) id<ENExposureDetectionManagerDelegate> delegate;
@property (readonly, nonatomic) NSBackgroundActivityScheduler *detectionScheduler;
@property (nonatomic) BOOL enableNativeExposureDetection;
@property (nonatomic) BOOL scheduleDetectionAutomatically;

- (void)_invalidate;
- (void).cxx_destruct;
- (void)activate;
- (void)_activate;
- (void)invalidate;
- (id)initWithConfigurationStore:(id)a0 downloadManager:(id)a1 exposureDatabase:(id)a2 queue:(id)a3;
- (void)scheduleNativeExposureDetectionForced:(BOOL)a0;
- (id)createDetectionSessionForClient:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)createFileSession;
- (void)performNativeExposureDetectionWithResultHandler:(id /* block */)a0;
- (id)createScheduler;
- (void)_downloadsDidBecomeAvailable:(id)a0;
- (void)_unscheduleNativeExposureDetection;
- (id)createXPCServiceClient;
- (id)_getDelegateWithError:(id *)a0;
- (BOOL)_applyRegionalConfigurationToDetectionSession:(id)a0 delegate:(id)a1 error:(id *)a2;
- (id)_createDetectionSessionWithError:(id *)a0;
- (void)_performNativeExposureDetectionWithScheduler:(id)a0 resultHandler:(id /* block */)a1;
- (id)createNativeDetectionSessionWithError:(id *)a0;
- (id)_publicKeyForRegion:(id)a0 dictionary:(id)a1;
- (long long)_processFileAtURL:(id)a0 publicKey:(id)a1 endpoint:(id)a2 session:(id)a3 error:(id *)a4;
- (void)_exposureDetectionSession:(id)a0 finishedWithResult:(id)a1;
- (void)_scheduleNativeExposureDetectionForced:(BOOL)a0;
- (BOOL)_scheduleNativeExposureDetection;

@end
