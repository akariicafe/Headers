@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IDSMessageHashStore : NSObject

@property (nonatomic) unsigned long long initialProcessTime;
@property (nonatomic) unsigned long long initialServerTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *databaseCloseTimer;
@property (nonatomic) double databaseLastUpdateTime;
@property (retain, nonatomic) NSMutableArray *recentlySeenHashes;

+ (id)sharedInstance;

- (void)_startCleanupTimer;
- (void)addMessageHash:(id)a0;
- (BOOL)containsMessageHash:(id)a0;
- (void)_setDatabaseCloseTimerOnIvarQueue;
- (void)_performInitialHousekeeping;
- (void).cxx_destruct;
- (id)init;
- (void)updateCreationDateForHash:(id)a0;
- (void)closeDatabase;
- (unsigned long long)_currentLocalTime;
- (void)_runCleanup;

@end
