@class NSPredicate, NSArray, HMMutableArray;

@interface HMEventTrigger : HMTrigger <NSSecureCoding>

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

+ (id)createWithDictionary:(id)a0 home:(id)a1;
+ (BOOL)__validateRecurrences:(id)a0;
+ (id)negateOffset:(id)a0;
+ (BOOL)isActionAffectedByEndEvents:(id)a0;
+ (id)_predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)a0 applyingOffset:(id)a1;
+ (id)_predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)a0 applyingOffset:(id)a1;
+ (id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)a0;
+ (id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)a0;
+ (id)predicateForEvaluatingTriggerOccurringAfterDateWithComponents:(id)a0;
+ (id)predicateForEvaluatingTriggerOccurringBeforeDateWithComponents:(id)a0;
+ (id)predicateForEvaluatingTriggerOccurringOnDateWithComponents:(id)a0;
+ (id)predicateForEvaluatingTriggerWithCharacteristic:(id)a0 relatedBy:(unsigned long long)a1 toValue:(id)a2;
+ (id)_predicateForEvaluatingTriggerWithCharacteristic:(id)a0 value:(id)a1 valueFormatString:(id)a2;
+ (id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)a0 applyingOffset:(id)a1;
+ (id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)a0 applyingOffset:(id)a1;
+ (id)predicateForEvaluatingTriggerOccurringBetweenSignificantEvent:(id)a0 secondSignificantEvent:(id)a1;
+ (id)predicateForEvaluatingTriggerWithPresence:(id)a0;
+ (id)predicateForEvaluatingTriggerOccurringBetweenDateWithComponents:(id)a0 secondDateWithComponents:(id)a1;
+ (id)predicateForEvaluatingTriggerWithCharacteristic:(id)a0 matchingValue:(id)a1;

- (void).cxx_destruct;
- (id)_serializeForAdd;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)compatibleWithApp;
- (id)initInternalWithName:(id)a0 events:(id)a1 endEvents:(id)a2 recurrences:(id)a3 predicate:(id)a4;
- (id)initWithName:(id)a0 events:(id)a1 endEvents:(id)a2 recurrences:(id)a3 predicate:(id)a4;
- (void)_addEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleAddEventFromResponse:(id)a0 newEventPayload:(id)a1;
- (void)setRecurrences:(id)a0;
- (void)_removeEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleEventsRemovedFromResponse:(id)a0;
- (void)_updateEvents:(id)a0 endEvent:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_updateEventsFromResponse:(id)a0 responsePayload:(id)a1;
- (BOOL)_updateCharacterisiticReferenceInNewEvent:(id)a0;
- (void)_updatePredicate:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateRecurrences:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateExecuteOnce:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setExecuteOnce:(BOOL)a0;
- (id)addedEvent:(id)a0;
- (void)handleActivationStateNotification:(id)a0;
- (BOOL)containsSharedTriggerActivationBits;
- (id)initWithName:(id)a0 events:(id)a1 predicate:(id)a2;
- (void)addEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateEvents:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateEndEvents:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateCharacteristicReference;
- (void)updatePredicate:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateRecurrences:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateExecuteOnce:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_registerNotificationHandlers;
- (void)encodeWithCoder:(id)a0;

@end
