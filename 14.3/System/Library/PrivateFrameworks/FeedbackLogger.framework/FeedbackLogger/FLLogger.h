@class NSDistributedNotificationCenter, NSMutableDictionary, NSObject;
@protocol OS_os_log, FLLoggingContext, OS_dispatch_source;

@interface FLLogger : NSObject

@property (retain, nonatomic) NSMutableDictionary *persistentStores;
@property (retain, nonatomic) NSObject<FLLoggingContext> *context;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *persistentStoreCacheTTLTimer;
@property (nonatomic) unsigned long long persistentStoreCacheTTL;
@property (retain, nonatomic) NSDistributedNotificationCenter *notificationCenter;

+ (id)sharedLogger;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)report:(id)a0 application:(id)a1;
- (void)closeAllStores;
- (BOOL)closeOpenBatches;
- (id)persistentStoreForApplication:(id)a0;
- (BOOL)purgeBatchFromBundle:(id)a0 withIdentifier:(id)a1;
- (BOOL)closeOpenBatchForBundle:(id)a0;
- (void)closeStoreForApplicationFromNotification:(id)a0;
- (void)report:(id)a0 application:(id)a1 onComplete:(id /* block */)a2;
- (id)__dispatched_persistentStoreForApplication:(id)a0;
- (void)resetStoreCacheTimer;
- (id)pathForApplication:(id)a0;
- (void)setValue:(id)a0 forUploadHeaderNamed:(id)a1;
- (id)uploadHeaders;
- (void)scheduleImmediateUpload;

@end
