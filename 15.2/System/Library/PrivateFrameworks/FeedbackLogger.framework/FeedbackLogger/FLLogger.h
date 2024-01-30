@class NSDistributedNotificationCenter, NSMutableDictionary, NSObject;
@protocol OS_os_log, FLLoggingContext, OS_dispatch_source;

@interface FLLogger : NSObject

@property (retain, nonatomic) NSMutableDictionary *persistentStores;
@property (retain, nonatomic) NSObject<FLLoggingContext> *context;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long persistentStoreCacheTTL;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *persistentStoreCacheTTLTimer;
@property (retain, nonatomic) NSDistributedNotificationCenter *notificationCenter;

+ (id)sharedLogger;
+ (id)readSiriCategoryFrom:(id)a0 recursive:(BOOL)a1;
+ (id)categoryForSiriPayload:(id)a0;

- (id)registerSiriInstrumentationObserver:(id)a0 observer:(id /* block */)a1;
- (void)closeAllStores;
- (id)uploadHeaders;
- (id)siriReadingStoreForBundleID:(id)a0;
- (void)reportSiriInstrumentationEvent:(id)a0 forBundleID:(id)a1 completion:(id /* block */)a2;
- (id)parsecStoreId;
- (id)initWithContext:(id)a0;
- (void)removeSiriInstrumentationObserver:(id)a0;
- (void)report:(id)a0 application:(id)a1;
- (void)_resetStoreCacheTimer;
- (id)_nextTimerFireDate;
- (void)write:(id)a0 category:(id)a1 toStoreWithID:(id)a2 completion:(id /* block */)a3;
- (void)_cancelStoreCacheTimer;
- (void).cxx_destruct;
- (id)pathForStore:(id)a0;
- (void)setValue:(id)a0 forUploadHeaderNamed:(id)a1;
- (void)report:(id)a0 application:(id)a1 onComplete:(id /* block */)a2;
- (void)reportParsecFeedback:(id)a0 completion:(id /* block */)a1;
- (void)scheduleImmediateUpload;
- (id)dataUploadStoreIdForApplicationIdentifier:(id)a0;
- (id)siriStoreIdForBundleId:(id)a0;
- (void)closeStoreForApplicationFromNotification:(id)a0;
- (id)parsecCategoryForPayload:(id)a0;
- (void)_cleanPersistantStores;
- (void)_closeAllStores;
- (void)reportDataUploadEvent:(id)a0 application:(id)a1 completion:(id /* block */)a2;
- (id)__dispatched_persistentStoreWithId:(id)a0 category:(id)a1;
- (void)closeStoreForBundleID:(id)a0;
- (id)siriWritingStoreForBundleID:(id)a0 category:(id)a1;
- (id)parsecPersistentStoreForBundleID:(id)a0;
- (void)dealloc;

@end
