@class NSString, NSArray, AXAuditer, AXAuditThrottler, NSObject;
@protocol OS_dispatch_queue, AXAuditAutomationDelegate;

@interface AXAuditAutomationSupport : NSObject <AXAuditerDelegate>

@property (copy) NSString *_auditTimestamp;
@property (retain, nonatomic) AXAuditer *_auditor;
@property (retain, nonatomic) AXAuditThrottler *_screenChangedThrottler;
@property (nonatomic) long long _singleAuditPendingCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_auditQueue;
@property (nonatomic) BOOL _runningContinuousAudit;
@property (nonatomic) struct __AXObserver { } *_axEventObserver;
@property (nonatomic) BOOL _registeredForNotifications;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_backgroudQueue;
@property (copy, nonatomic) id /* block */ _completionBlock;
@property (retain, nonatomic) NSArray *auditWarningsToCapture;
@property (retain, nonatomic) NSArray *auditWarningsToIgnore;
@property (nonatomic) BOOL runContinuousAudit;
@property (weak, nonatomic) id<AXAuditAutomationDelegate> delegate;
@property (nonatomic) int targetPid;
@property (copy, nonatomic) NSArray *auditTypes;
@property (retain, nonatomic) NSArray *elementIdentifiersToIgnore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)_currentTimestamp;
+ (struct __AXUIElement { } *)createAXElementForAuditIssue:(id)a0;
+ (id)longDescriptionForAuditIssue:(id)a0;
+ (id)shortDescriptionForAuditIssue:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_registerForAXNotifications:(BOOL)a0;
- (void)_captureScreenshot;
- (void)auditer:(id)a0 didCompleteWithResults:(id)a1;
- (void)_informDelegateOfResults:(id)a0 error:(id)a1;
- (id)fetchScreenshot;
- (id)_accessibilityNotificationsForContinuousAudit;
- (BOOL)_initializeAXObserverIfNeeded;
- (void)_runAudit;
- (void)_runNextAuditIfNeeded;
- (void)_runNextContinuousAudit;
- (void)_screenChangedNotification;
- (void)_screenChangedThrottled;
- (void)_sendResultsToDelegate:(id)a0;
- (void)_setupAudit;
- (id)_setupWarningsFromAuditTypes;
- (void)_startContinuousAudit;
- (void)_stopContinuousAudit;
- (void)auditer:(id)a0 didAppendLogWithMessage:(id)a1;
- (void)auditer:(id)a0 didEncounterIssue:(id)a1;
- (BOOL)runningContinuousAudit;
- (BOOL)runningSingleAudit;
- (id)screenshotHighlightingIssue:(id)a0;
- (void)startAuditWithCompletionBlock:(id /* block */)a0;
- (void)startContinuousAudit;
- (void)startSingleAudit;
- (void)stopContinuousAudit;

@end
