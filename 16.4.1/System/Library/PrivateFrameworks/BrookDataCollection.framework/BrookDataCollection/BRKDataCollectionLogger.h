@class BRKDataCollectionScheduler, NSString, NSDateFormatter, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BRKDataCollectionLogger : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_storageDirectory;
    BRKDataCollectionScheduler *_uploadScheduler;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_idsFilesList;
    NSString *_externalDailyDeviceIdentifier;
    unsigned long long _externalDailySessionUploadCount;
    NSDateFormatter *_dateFormatter;
}

@property (readonly, nonatomic) NSString *deviceIdentifier;

+ (id)sharedInstance;

- (id)_deviceIdentifier;
- (id)_init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_internalDeviceIdentifier;
- (id)_pathExtension:(id)a0;
- (void)_triggerUpload:(BOOL)a0;
- (id)_stringByRemovingPathExtension:(id)a0;
- (BOOL)_dataCollectionEnabled;
- (BOOL)_dataCollectionIsAllowedToRunInCurrentProcess;
- (void)_forceUpload;
- (id)_idsFileListPath;
- (void)_logUploadWithPath:(id)a0;
- (void)_purgeFilesForOSUpdate;
- (void)_purgeOutdatedFiles;
- (void)_refreshExternalDeviceMetadata;
- (void)_scheduleUploadTimer;
- (BOOL)_shouldAllowDataCollectionUpload;
- (void)clearCollectedData;
- (id)markFileForUpload:(id)a0;

@end
