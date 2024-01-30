@class CKContainerID, NSString, NSDate, NSHashTable, CKContainer, BRCTransferStream, BRCAccountSession, NSMutableSet, NSObject, BRCUserDefaults, BRCThrottleBase;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface BRCSyncContext : NSObject {
    CKContainer *_ckContainer;
    BOOL _isCancelled;
    int _notifyTokenForFramework;
    NSMutableSet *_foregroundClients;
    NSString *_lastForegroundClientDescription;
    NSDate *_dateWhenLastForegroundClientLeft;
    NSObject<OS_dispatch_source> *_timerForGraceForegroundPeriod;
    NSObject<OS_dispatch_source> *_timerForForcedForegroundPeriod;
    NSObject<OS_dispatch_queue> *_foregroundStateQueue;
    unsigned long long _foregroundState;
    NSHashTable *_nonDiscretionaryModifyOperations;
    NSHashTable *_discretionaryModifyOperations;
}

@property (readonly, nonatomic) BRCAccountSession *session;
@property (readonly, nonatomic) NSString *contextIdentifier;
@property (readonly, nonatomic) BRCUserDefaults *defaults;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) CKContainer *ckContainer;
@property (readonly, nonatomic) CKContainerID *ckContainerID;
@property (readonly, nonatomic) BRCTransferStream *uploadStream;
@property (readonly, nonatomic) BRCTransferStream *downloadStream;
@property (readonly, nonatomic) BRCThrottleBase *readerThrottle;
@property (readonly, nonatomic) BRCThrottleBase *applyThrottle;
@property (readonly, nonatomic) BRCThrottleBase *uploadThrottle;
@property (readonly, nonatomic) BRCThrottleBase *uploadFileModifiedThrottle;
@property (readonly, nonatomic) BRCThrottleBase *perItemSyncUpThrottle;
@property (readonly, nonatomic) BRCThrottleBase *downloadThrottle;

+ (id)transferContextForServerZone:(id)a0 appLibrary:(id)a1;
+ (id)transferContextIdentifierForMangledID:(id)a0;
+ (id)metadataContextIdentifierForMangledID:(id)a0;
+ (id)_contextIdentifierForMangledID:(id)a0 metadata:(BOOL)a1;

- (void)setupIfNeeded;
- (BOOL)allowsCellularAccess;
- (id)_database;
- (void)close;
- (void)didReceiveHandoffRequest;
- (BOOL)isForeground;
- (void)removeForegroundClient:(id)a0;
- (void)dumpToContext:(id)a0;
- (void)addOperation:(id)a0 allowsCellularAccess:(id)a1;
- (void)addOperation:(id)a0 allowsCellularAccess:(id)a1 nonDiscretionary:(id)a2;
- (id)description;
- (id)foregroundClients;
- (void).cxx_destruct;
- (void)_notifyFrameworkContainersMonitorWithState:(BOOL)a0;
- (void)waitForAllOperations;
- (void)_armForegroundGraceTimerForClientDescription:(id)a0;
- (void)forceContainerForegroundForDuration:(double)a0;
- (void)addOperation:(id)a0 nonDiscretionary:(BOOL)a1;
- (void)resume;
- (id)initWithSession:(id)a0 contextIdentifier:(id)a1 isShared:(BOOL)a2;
- (void)dealloc;
- (void)cancel;
- (void)_preventConcurrentModifyRecordsOperations:(id)a0 nonDiscretionary:(BOOL)a1;
- (void)_notifyContainerBeingNowForeground;
- (void)addOperation:(id)a0;
- (void)notifyDuetFromAccessByBundleID:(id)a0;
- (void)addForegroundClient:(id)a0;

@end
