@class NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCKRampManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) NSTimer *retryTimer;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_scheduleOperation:(id)a0;
- (id)_CKUtilitiesSharedInstance;
- (void)fetchLatestRampStateFromCK:(id /* block */)a0;
- (id)_rampUpRecordID;
- (BOOL)_shouldSendPriorityRequest;
- (void)_writeRampStateAllowed:(BOOL)a0 promoted:(BOOL)a1 visible:(BOOL)a2 fetchHadServerError:(BOOL)a3;
- (void)_performRampCheckWithRetryAfter:(double)a0;
- (void)_persistRampFetchServerError:(BOOL)a0;
- (void)_fetchLatestRampStateFromCK:(id /* block */)a0;
- (void)cachedRampState:(id /* block */)a0;

@end
