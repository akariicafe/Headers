@class NSUUID, NSString, NSArray, NSPredicate, HMHome, HMActionSetBuilder, NSMutableArray, HMTriggerPolicy;

@interface _HMEventTriggerBuilder : _HMEventOrTimerTriggerBuilder <HMEventTriggerBuilderInternal> {
    BOOL _executeOnce;
    NSPredicate *_predicate;
    unsigned long long _recurrenceDays;
    NSMutableArray *_events;
    NSMutableArray *_endEvents;
}

@property (nonatomic) unsigned long long recurrenceDays;
@property (copy, nonatomic) NSArray *recurrences;
@property (nonatomic) BOOL executeOnce;
@property (copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *events;
@property (copy, nonatomic) NSArray *endEvents;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSArray *actionSets;
@property (retain, nonatomic) HMTriggerPolicy *policy;
@property (readonly, nonatomic) BOOL nameIsConfigured;
@property (readonly, nonatomic) HMActionSetBuilder *triggerOwnedActionSet;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *configuredName;

+ (void)initialize;

- (void)removeEvent:(id)a0;
- (void)addEvent:(id)a0;
- (Class)class;
- (void).cxx_destruct;
- (BOOL)_with:(id)a0 addEvent:(id)a1;
- (void)removeEndEvent:(id)a0;
- (void)updateEvents:(id)a0 completionHandler:(id /* block */)a1;
- (void)_with:(id)a0 addEvent:(id)a1 completion:(id /* block */)a2;
- (BOOL)_with:(id)a0 removeEvent:(id)a1;
- (void)_with:(id)a0 removeEvent:(id)a1 completion:(id /* block */)a2;
- (void)_with:(id)a0 setEvents:(id)a1;
- (void)_with:(id)a0 updateEvents:(id)a1 completion:(id /* block */)a2;
- (void)addEndEvent:(id)a0;
- (void)addEndEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)addEvent:(id)a0 completionHandler:(id /* block */)a1;
- (id)copyAsBuilder;
- (id)initWithContext:(id)a0 home:(id)a1;
- (id)initWithEventTrigger:(id)a0;
- (void)removeEndEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeEvent:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)triggerActivationState;
- (void)updateEndEvents:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateExecuteOnce:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updatePredicate:(id)a0 completionHandler:(id /* block */)a1;

@end
