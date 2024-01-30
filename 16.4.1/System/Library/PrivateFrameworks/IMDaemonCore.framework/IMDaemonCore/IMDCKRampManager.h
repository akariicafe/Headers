@class NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCKRampManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) NSTimer *retryTimer;

+ (id)sharedInstance;

- (void)cachedRampState:(id /* block */)a0;
- (void)_fetchLatestRampStateFromCK:(id /* block */)a0;
- (void)_scheduleOperation:(id)a0;
- (void)_persistRampFetchServerError:(BOOL)a0;
- (id)_rampUpRecordID;
- (void)dealloc;
- (id)_CKUtilitiesSharedInstance;
- (id)init;
- (void)fetchLatestRampStateFromCK:(id /* block */)a0;
- (void)_writeRampStateAllowed:(BOOL)a0 promoted:(BOOL)a1 visible:(BOOL)a2 fetchHadServerError:(BOOL)a3;
- (BOOL)_shouldSendPriorityRequest;
- (void).cxx_destruct;
- (void)_performRampCheckWithRetryAfter:(double)a0;

@end
