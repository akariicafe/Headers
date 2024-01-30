@class NSArray, HMMutableArray, NSPredicate, NSString, HMTriggerPolicy;

@interface HMEventTrigger : HMTrigger <HMEventTriggerConfiguration, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSPredicate *internalPredicate;
@property (retain, nonatomic) HMMutableArray *currentEvents;
@property (readonly, copy, nonatomic) NSArray *allEvents;
@property (nonatomic) unsigned long long activationState;
@property (readonly, copy, nonatomic) NSArray *events;
@property (readonly, copy, nonatomic) NSArray *endEvents;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (readonly, copy, nonatomic) NSArray *recurrences;
@property (readonly, nonatomic) BOOL executeOnce;
@property (readonly, nonatomic) unsigned long long triggerActivationState;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) NSArray *actionSets;
@property (readonly, copy, nonatomic) NSString *configuredName;
@property (readonly, nonatomic) HMTriggerPolicy *policy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateForEvaluatingTriggerOccurringBeforeDateWithComponents:(id)a0;
+ (BOOL)__validateRecurrences:(id)a0;
+ (id)_predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)a0 applyingOffset:(id)a1;
+ (id)_predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)a0 applyingOffset:(id)a1;
+ (id)_predicateForEvaluatingTriggerWithCharacteristic:(id)a0 value:(id)a1 valueFormatString:(id)a2;
+ (id)createWithDictionary:(id)a0 home:(id)a1;
+ (BOOL)isActionAffectedByEndEvents:(id)a0;
+ (id)negateOffset:(id)a0;
+ (id)predicateForEvaluatingTriggerOccurringAfterDateWithComponents:(id)a0;
+ (id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)a0;
+ (id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)a0 applyingOffset:(id)a1;
+ (id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)a0;
+ (id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)a0 applyingOffset:(id)a1;
+ (id)predicateForEvaluatingTriggerOccurringBetweenDateWithComponents:(id)a0 secondDateWithComponents:(id)a1;
+ (id)predicateForEvaluatingTriggerOccurringBetweenSignificantEvent:(id)a0 secondSignificantEvent:(id)a1;
+ (id)predicateForEvaluatingTriggerOccurringOnDateWithComponents:(id)a0;
+ (id)predicateForEvaluatingTriggerWithCharacteristic:(id)a0 matchingValue:(id)a1;
+ (id)predicateForEvaluatingTriggerWithCharacteristic:(id)a0 relatedBy:(unsigned long long)a1 toValue:(id)a2;
+ (id)predicateForEvaluatingTriggerWithPresence:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setExecuteOnce:(BOOL)a0;
- (void)setRecurrences:(id)a0;
- (void)_removeEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateEvents:(id)a0 completionHandler:(id /* block */)a1;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)_addEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleAddEventFromResponse:(id)a0 newEventPayload:(id)a1;
- (void)_handleEventsRemovedFromResponse:(id)a0;
- (BOOL)_mergeWithNewObject:(id)a0;
- (BOOL)_mergeWithNewObjectForBuilderUpdates:(id)a0;
- (void)_registerNotificationHandlers;
- (id)_serializeForAdd;
- (void)_updateCharacteristicReference;
- (BOOL)_updateCharacteristicReferenceInNewEvent:(id)a0;
- (void)_updateEvents:(id)a0 endEvent:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_updateEventsFromResponse:(id)a0 responsePayload:(id)a1;
- (void)_updateExecuteOnce:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_updatePredicate:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateRecurrences:(id)a0 completionHandler:(id /* block */)a1;
- (void)addEvent:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)compatibleWithApp;
- (BOOL)containsSharedTriggerActivationBits;
- (id)copyAsBuilder;
- (void)handleActivationStateNotification:(id)a0;
- (id)initInternalWithName:(id)a0 configuredName:(id)a1 events:(id)a2 endEvents:(id)a3 recurrences:(id)a4 predicate:(id)a5;
- (id)initWithDictionary:(id)a0 home:(id)a1;
- (id)initWithName:(id)a0 events:(id)a1 endEvents:(id)a2 recurrences:(id)a3 predicate:(id)a4;
- (id)initWithName:(id)a0 events:(id)a1 predicate:(id)a2;
- (void)removeEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateEndEvents:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateExecuteOnce:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updatePredicate:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateRecurrences:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateWithBuilder:(id)a0 completionHandler:(id /* block */)a1;

@end
