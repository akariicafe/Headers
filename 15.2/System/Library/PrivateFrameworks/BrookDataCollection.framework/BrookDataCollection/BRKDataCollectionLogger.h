@class BRKDataCollectionScheduler, NSString, NSDateFormatter, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BRKDataCollectionLogger : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_storageDirectory;
    BRKDataCollectionScheduler *_uploadScheduler;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_idsFilesList;
    NSString *_dailyIdentifier;
    NSDate *_dailyIdentifierRefreshDate;
    unsigned long long _dailySessionUploadCount;
    NSDateFormatter *_dateFormatter;
}

@property (readonly, nonatomic) NSString *deviceIdentifier;

+ (id)sharedInstance;

- (id)_deviceIdentifier;
- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (void)_forceUpload;
- (id)_idsFileListPath;
- (void)_purgeOutdatedFiles;
- (void)_scheduleUploadTimer;
- (id)_internalDeviceIdentifier;
- (void)_refreshDailyMetadata;
- (BOOL)_dataCollectionIsAllowedToRunInCurrentProcess;
- (id)_stringByRemovingPathExtension:(id)a0;
- (id)_pathExtension:(id)a0;
- (BOOL)_shouldAllowDataCollectionUpload;
- (void)_logUploadWithPath:(id)a0;
- (BOOL)_dataCollectionEnabled;
- (void)_triggerUpload:(BOOL)a0;
- (void)_purgeFilesForOSUpdate;
- (id)markFileForUpload:(id)a0;
- (void)clearCollectedData;

@end
