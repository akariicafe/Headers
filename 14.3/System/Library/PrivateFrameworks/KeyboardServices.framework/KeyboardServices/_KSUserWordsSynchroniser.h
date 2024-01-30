@class _KSSystemTask, NSArray, _KSRequestThrottle, _KSCloudKitManager, NSObject, _KSControlFileController;
@protocol OS_dispatch_queue;

@interface _KSUserWordsSynchroniser : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    _KSCloudKitManager *_cloudKitManager;
    _KSControlFileController *_controlFile;
    _KSSystemTask *_pushTask;
    BOOL _taskRun;
    NSArray *_languagesIfOffline;
    BOOL _attemptingConnection;
    BOOL _retryPending;
    BOOL _needRetry;
    _KSRequestThrottle *_identityThrottle;
}

@property (retain, nonatomic) NSArray *requiredLanguages;

+ (id)sharedInstance;
+ (Class)infoClass;
+ (id)generateRecordNameForFilename:(id)a0 withKey:(id)a1;
+ (id)generateKeyWithSize:(unsigned long long)a0;

- (id)containerID;
- (id)init;
- (void).cxx_destruct;
- (void)loadKeyWithCompletion:(id /* block */)a0;
- (void)identitiesDidChange:(id)a0;
- (id)filenameForLanguage:(id)a0;
- (void)dealloc;
- (void)disable;
- (void)deltaDownloadForLanguages:(id)a0;
- (void)accountDidChange:(id)a0;
- (void)generateKeyWithCompletionHandler:(id /* block */)a0;
- (void)checkConfiguration;
- (id)generateRecordListForLanguages:(id)a0;
- (id)initForTestingWithManager:(id)a0 enablePushing:(BOOL)a1;
- (void)saveKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)firstTimeDownloadWithKey:(id)a0;
- (void)deleteZoneWithCompletionHandler:(id /* block */)a0;
- (void)readFilesWithRecordIDs:(id)a0 forColumns:(id)a1 priority:(unsigned long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)dumpAllRecordsWithCompletionHandler:(id /* block */)a0;
- (void)keyboardUsed;
- (void)checkProgress:(int)a0 withInfo:(id)a1;
- (BOOL)checkErrors:(id)a0;
- (id)information;
- (id)recordIDForLanguage:(id)a0 withKey:(id)a1;
- (void)overwriteFilesWithRecords:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)checkForDownload:(id)a0 uploads:(id)a1 allLanguages:(id)a2;
- (void)modifyInformationWithOperations:(id /* block */)a0;

@end
