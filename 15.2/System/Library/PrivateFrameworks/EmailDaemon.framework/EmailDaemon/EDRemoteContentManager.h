@class NSDate, NSLock, EMRemoteContentURLSession, NSBackgroundActivityScheduler, ECRemoteContentParser, EDRemoteContentPersistence, EFCancelationToken, EFLocked;
@protocol EFScheduler, EDRemoteContentManagerTestDelegate;

@interface EDRemoteContentManager : NSObject {
    NSBackgroundActivityScheduler *_requestScheduler;
    id<EFScheduler> _unconditionalRequestScheduler;
    unsigned long long _remainingCountToSchedule;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestSchedulerLock;
    ECRemoteContentParser *_remoteContentParser;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _remoteContentParserLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timeoutLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _schedulingLock;
    EFCancelationToken *_token;
    EFCancelationToken *_contentRuleListsObservationToken;
    EFLocked *_currentContentRuleLists;
    EFLocked *_remoteLinkVerificationTimes;
}

@property (readonly, nonatomic) EDRemoteContentPersistence *remoteContentPersistence;
@property (readonly, nonatomic) ECRemoteContentParser *remoteContentParser;
@property (readonly, nonatomic) EMRemoteContentURLSession *urlSession;
@property (readonly, nonatomic) id<EFScheduler> backgroundWorkScheduler;
@property (readonly, nonatomic) id<EFScheduler> unconditionalRequestScheduler;
@property (readonly, nonatomic) NSLock *requestLock;
@property (nonatomic) unsigned long long requestedSinceLastPrune;
@property (nonatomic) double minimumTimeout;
@property (nonatomic) double maximumTimeout;
@property (retain, nonatomic) NSDate *timeoutLastUpdate;
@property (nonatomic) double requestInterval;
@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic) NSDate *schedulingLastUpdate;
@property (weak, nonatomic) id<EDRemoteContentManagerTestDelegate> testDelegate;
@property (copy, nonatomic) id /* block */ requestSchedulerBlock;
@property (nonatomic) unsigned long long pruneFrequency;

- (void)scheduleRecurringActivity;
- (void)contentRuleListMangager:(id)a0 didRemoveRuleList:(id)a1;
- (void)noteViewOfRemoteContentLinks:(id)a0;
- (id)_requestSchedulerWithInterval:(double)a0;
- (void)addRemoteContentLinks:(id)a0 andVerifyWithHTMLData:(id)a1 defaultCharsetName:(id)a2;
- (void)contentRuleListMangager:(id)a0 didAddRuleList:(id)a1;
- (void)_scheduleRequestForLinks:(unsigned long long)a0 unconditionally:(BOOL)a1 withDelay:(double)a2 completionHandler:(id /* block */)a3;
- (void)test_tearDown;
- (double)_getTimeout;
- (void)addRemoteContentLinksFromHTMLData:(id)a0;
- (void)_addRemoteContentLinks:(id)a0 andVerify:(BOOL)a1 withHTMLData:(id)a2 defaultCharsetName:(id)a3;
- (void)addRemoteContentLinks:(id)a0;
- (void)_scheduleBackgroundRequests;
- (void)_updateScheduling;
- (unsigned long long)_requestRemoteLinksInBackground:(unsigned long long)a0 unconditionally:(BOOL)a1 hasMoreLinks:(BOOL *)a2 deferBlock:(id /* block */)a3;
- (unsigned long long)_performRequests:(unsigned long long)a0 unconditionally:(BOOL)a1 withDeferBlock:(id /* block */)a2 completedCount:(unsigned long long *)a3;
- (BOOL)shouldAddRemoteContentLinksForMessage:(id)a0 logMessage:(id *)a1;
- (void)contentRuleListMangager:(id)a0 didUpdateContentRuleList:(id)a1 oldContentRuleList:(id)a2;
- (void).cxx_destruct;
- (void)_setRemoteContentRuleLists:(id)a0;
- (id)initWithRemoteContentPersistence:(id)a0 contentRuleListManager:(id)a1 urlSession:(id)a2;
- (void)dealloc;
- (BOOL)shouldAddRemoteContentLinksForMessageWithDateReceived:(id)a0;
- (void)addRemoteContentLinksFromHTMLData:(id)a0 defaultCharsetName:(id)a1;
- (void)_updateTimeoutSettingDefaultIfNeeded:(BOOL)a0;
- (void)_addRemoteContentLinks:(id)a0 requiredParsing:(BOOL)a1;
- (BOOL)shouldVerifyRemoteLinks;
- (id)_viewDurationsFromBiome;
- (id)_issueAndWaitForBatch:(id)a0 deferBlock:(id /* block */)a1 successful:(unsigned long long *)a2 failed:(unsigned long long *)a3 canceled:(unsigned long long *)a4 deferred:(unsigned long long *)a5;

@end
