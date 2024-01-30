@class BRKDataCollectionScheduler, NSString, DCManager, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BRKDataCollectionLogger : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_storageDirectory;
    unsigned long long _authorization;
    BOOL _needsAuthorizationUpdate;
    DCManager *_manager;
    BRKDataCollectionScheduler *_uploadScheduler;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_idsFilesList;
    NSString *_dailyIdentifier;
    NSDate *_dailyIdentifierRefreshDate;
    unsigned long long _dailySessionUploadCount;
}

@property (readonly, nonatomic) NSString *deviceIdentifier;

+ (id)sharedInstance;
+ (unsigned long long)dataCollectionAuthorization;

- (id)_deviceIdentifier;
- (void).cxx_destruct;
- (void)_logEvent:(id)a0;
- (void)dealloc;
- (id)_init;
- (void)_forceUpload;
- (unsigned long long)_dataCollectionAuthorization;
- (id)_idsFileListPath;
- (BOOL)_dataCollectionIsAllowedToRunInCurrentProcess;
- (id)_dcsManager;
- (void)_makeNeedsAuthorizationUpdate;
- (void)_purgeOutdatedFiles;
- (void)_scheduleUploadTimer;
- (void)_refreshDailyMetadata;
- (unsigned long long)_determineDataCollectionAuthorization;
- (unsigned long long)_lock_dataCollectionAuthorization;
- (id)_s3Credentials;
- (id)_stringByRemovingPathExtension:(id)a0;
- (id)_pathExtension:(id)a0;
- (BOOL)_shouldAllowDataCollectionUpload;
- (void)_logUploadWithPath:(id)a0;
- (BOOL)_dcsEnabled;
- (void)_triggerUpload:(BOOL)a0;
- (void)_purgeFilesForOSUpdate;
- (id)markFileForUpload:(id)a0;
- (void)clearCollectedData;

@end
