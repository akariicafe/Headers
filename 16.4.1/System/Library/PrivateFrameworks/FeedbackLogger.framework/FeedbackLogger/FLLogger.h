@class NSDistributedNotificationCenter, NSMutableDictionary, NSObject;
@protocol OS_os_log, FLLoggingContext, OS_dispatch_source, OS_os_transaction;

@interface FLLogger : NSObject

@property (retain, nonatomic) NSMutableDictionary *dbConnections;
@property (retain, nonatomic) NSMutableDictionary *persistentStores;
@property (retain, nonatomic) NSObject<FLLoggingContext> *context;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long persistentStoreCacheTTL;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *persistentStoreCacheTTLTimer;
@property (retain, nonatomic) NSDistributedNotificationCenter *notificationCenter;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSObject<OS_os_transaction> *writeTransaction;
@property (nonatomic) unsigned long long writeTransactionTTL;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *transactionTTLTimer;

+ (id)sharedLogger;
+ (id)readSiriCategoryFrom:(id)a0 recursive:(BOOL)a1;
+ (id)categoryForSiriPayload:(id)a0;

- (void)dealloc;
- (id)initWithContext:(id)a0;
- (void)closeAllStores;
- (void).cxx_destruct;
- (void)reportDataUploadEvent:(id)a0 application:(id)a1 completion:(id /* block */)a2;
- (void)reportSiriInstrumentationEvent:(id)a0 forBundleID:(id)a1 completion:(id /* block */)a2;
- (void)_closeAllStores;
- (id)__dispatched_databaseConnectionWithId:(id)a0;
- (id)__dispatched_persistentStoreWithId:(id)a0 category:(id)a1;
- (void)_cancelStoreCacheTimer;
- (void)_cancelTransactionTTLTimer;
- (void)_cleanPersistantStores;
- (id)_nextTimerFireDate;
- (void)_scheduleStoreCacheTimer;
- (void)_scheduleTransactionTTLTimer;
- (void)_setupStoreCacheTimer;
- (void)_setupTransactionTTLTimer;
- (void)_transactionTTLTimerDidFire;
- (void)cancelTransactionTTLTimer;
- (void)closeStoreForApplicationFromNotification:(id)a0;
- (void)closeStoreForBundleID:(id)a0;
- (id)dataUploadStoreIdForApplicationIdentifier:(id)a0;
- (id)parsecCategoryForPayload:(id)a0;
- (id)parsecPersistentStoreForBundleID:(id)a0;
- (id)parsecStoreId;
- (id)pathForStore:(id)a0;
- (id)registerSiriInstrumentationObserver:(id)a0 observer:(id /* block */)a1;
- (void)removeSiriInstrumentationObserver:(id)a0;
- (void)report:(id)a0 application:(id)a1;
- (void)report:(id)a0 application:(id)a1 onComplete:(id /* block */)a2;
- (void)reportParsecFeedback:(id)a0 completion:(id /* block */)a1;
- (void)scheduleImmediateUpload;
- (void)setValue:(id)a0 forUploadHeaderNamed:(id)a1;
- (id)siriReadingStoreForBundleID:(id)a0;
- (id)siriStoreIdForBundleId:(id)a0;
- (id)siriWritingStoreForBundleID:(id)a0 category:(id)a1;
- (id)uploadHeaders;
- (void)write:(id)a0 category:(id)a1 toStoreWithID:(id)a2 completion:(id /* block */)a3;

@end
