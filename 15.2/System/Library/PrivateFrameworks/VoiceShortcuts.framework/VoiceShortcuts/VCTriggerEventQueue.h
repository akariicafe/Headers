@class VCTriggerEventRunner, NSString, VCUserNotificationManager, NSObject;
@protocol WFDatabaseProvider, OS_dispatch_queue;

@interface VCTriggerEventQueue : NSObject <VCUserNotificationManagerDelegate, VCTriggerEventRunnerDelegate>

@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) VCUserNotificationManager *notificationManager;
@property (readonly, nonatomic) VCTriggerEventRunner *triggerEventRunner;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldRunTrigger:(id)a0 forEvent:(id)a1 runEvents:(id)a2 error:(id *)a3;
+ (double)rateLimitingTimeoutForTrigger:(id)a0 runEvents:(id)a1;

- (void)runWithConfiguredTrigger:(id)a0 workflowReference:(id)a1 eventInfo:(id)a2;
- (id)nextTriggerEventWithError:(id *)a0;
- (id)databaseWithError:(id *)a0;
- (void)logMetricForTrigger:(id)a0;
- (BOOL)isTriggerEventStale:(id)a0;
- (void)notificationManager:(id)a0 receivedConfirmationToRunTriggerWithIdentifier:(id)a1 pendingTriggerEventIDs:(id)a2;
- (void)removeStalePendingNotificationsAndTriggerEvents;
- (unsigned long long)numberOfEventsInQueueWithConfirmationOnly:(BOOL)a0;
- (void)removeAllStaleTriggerEventsIgnoringValidIDs:(id)a0;
- (BOOL)shouldRunEmailOrMessageTrigger:(id)a0 forEvent:(id)a1 runEvents:(id)a2 error:(id *)a3;
- (id)initWithDatabaseProvider:(id)a0 runCoordinator:(id)a1;
- (BOOL)deleteTriggerEvent:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)setConfirmedForTriggerEventIDs:(id)a0 error:(id *)a1;
- (void)resumeWithConfiguredTrigger:(id)a0 workflowReference:(id)a1 eventInfo:(id)a2;
- (void)notificationManager:(id)a0 didDismissTriggerWithIdentifier:(id)a1 pendingTriggerEventIDs:(id)a2;
- (void)notificationManager:(id)a0 didFailToPostNotificationPromptWithTriggerIdentifier:(id)a1 pendingTriggerEventIDs:(id)a2;
- (void)resume;
- (void)didFinishRunningWithError:(id)a0 cancelled:(BOOL)a1 trigger:(id)a2 runEvent:(id)a3;
- (void)enqueueTriggerWithIdentifier:(id)a0 eventInfo:(id)a1 force:(BOOL)a2 completion:(id /* block */)a3;
- (id)configuredTriggerForIdentifier:(id)a0 workflowReference:(id *)a1 error:(id *)a2;
- (void)removePendingTriggerEventsWithEventIDs:(id)a0;
- (id)triggerEventsForConfiguredTrigger:(id)a0 eventInfo:(id)a1 confirmed:(BOOL)a2 error:(id *)a3;

@end
