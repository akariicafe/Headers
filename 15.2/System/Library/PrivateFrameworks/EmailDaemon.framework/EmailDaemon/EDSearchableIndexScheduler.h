@class NSSet, NSString, NSMutableDictionary, NSMutableSet, NSObject, EDSearchableIndexBudgetConfiguration;
@protocol OS_os_log, OS_dispatch_queue, EDSearchableIndexSchedulable;

@interface EDSearchableIndexScheduler : NSObject <EFLoggable, EDSearchableIndexSchedulableDelegate>

@property (class, readonly, nonatomic) NSSet *activityTypes;
@property (class, readonly, nonatomic) NSSet *deferrableActivityTypes;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) BOOL scheduledDeferralCheck;
@property (copy, nonatomic) NSString *budgetTimeUserDefaultsKey;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexingStateQueue;
@property (retain, nonatomic) NSMutableDictionary *activities;
@property (retain, nonatomic) NSMutableSet *indexingEnabledForActivityTypes;
@property (getter=isDataSourceIndexingPermitted) BOOL dataSourceIndexingPermitted;
@property long long budgetedItemCountRemaining;
@property double budgetedTimeRemaining;
@property double noActivityIndexingTime;
@property double maintenanceIndexingTime;
@property (nonatomic, getter=isScheduling) BOOL scheduling;
@property (readonly, weak, nonatomic) id<EDSearchableIndexSchedulable> schedulable;
@property (readonly, nonatomic) EDSearchableIndexBudgetConfiguration *budgetConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isDeferrableActivityType:(id)a0;
+ (id)budgetTimeUserDefaultsKeyForIndexName:(id)a0;

- (void)deferIndexingForActivityType:(id)a0;
- (double)_budgetTimeFromUserDefaults;
- (void)_beginIndexingForActivityType:(id)a0 activity:(id)a1;
- (void)_setBudgetedTimeRemaining:(double)a0;
- (void)searchableIndexSchedulable:(id)a0 didGenerateImportantPowerEventWithIdentifier:(id)a1 eventData:(id)a2;
- (void)searchableIndexSchedulable:(id)a0 didIndexForTime:(double)a1;
- (void)_stopAllIndexing;
- (id /* block */)_xpcCriteriaBuilderBlockForActivityType:(id)a0;
- (void)indexingDidSuspendForSearchableIndexSchedulable:(id)a0;
- (void)_stopIndexingForActivityType:(id)a0 shouldDeferIfPossible:(BOOL)a1;
- (id)_xpcActivityIdentifierForActivityType:(id)a0;
- (void)_registerActivityForType:(id)a0 builder:(id /* block */)a1 runner:(id /* block */)a2;
- (void)_disableIndexingForActivityType:(id)a0 defer:(BOOL)a1;
- (void).cxx_destruct;
- (void)beginIndexingForActivityType:(id)a0 activity:(id)a1;
- (void)_stopScheduling;
- (void)_startScheduling;
- (void)searchableIndexSchedulable:(id)a0 didIndexItemCount:(long long)a1;
- (id)initWithSchedulable:(id)a0 budgetConfiguration:(id)a1;
- (void)_deferActivitiesIfNecessary;
- (void)_logIndexingPowerEventWithIdentifier:(id)a0 additionalEventData:(id)a1 usePersistentLog:(BOOL)a2;
- (void)searchableIndexSchedulable:(id)a0 didGeneratePowerEventWithIdentifier:(id)a1 eventData:(id)a2;
- (BOOL)_isIndexingEnabledForActivityType:(id)a0;
- (BOOL)isIndexingEnabledForActivityType:(id)a0;
- (void)dealloc;
- (BOOL)_isIndexingEnabledByActivities;
- (void)_periodicallyCheckForDeferralIfNecessary;
- (double)budgetedTimeRemainingForSearchableIndexSchedulable:(id)a0;
- (void)indexingDidResumeForSearchableIndexSchedulable:(id)a0;
- (long long)budgetedItemCountRemainingForSearchableIndexSchedulable:(id)a0;
- (void)_setDataSourceIndexingPermitted:(BOOL)a0;
- (void)didFinishIndexingBacklogForSearchableIndexSchedulable:(id)a0;
- (BOOL)hasAvailableIndexingBudgetForSearchableIndexSchedulable:(id)a0;
- (void)_enableIndexingForActivityType:(id)a0;

@end
