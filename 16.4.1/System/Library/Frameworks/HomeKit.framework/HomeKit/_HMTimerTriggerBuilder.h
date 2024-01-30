@class NSDate, NSString, NSArray, NSUUID, HMHome, HMActionSetBuilder, NSDateComponents, NSTimeZone, HMTriggerPolicy;

@interface _HMTimerTriggerBuilder : _HMEventOrTimerTriggerBuilder <HMTimerTriggerBuilderInternal> {
    NSDate *_fireDate;
    NSTimeZone *_timeZone;
    NSDateComponents *_recurrence;
    NSString *_significantEvent;
    NSDateComponents *_significantEventOffset;
}

@property (readonly, copy, nonatomic) NSDate *fireDateIfSet;
@property (copy, nonatomic) NSString *significantEvent;
@property (copy, nonatomic) NSDateComponents *significantEventOffset;
@property (nonatomic) unsigned long long recurrenceDays;
@property (copy, nonatomic) NSArray *recurrences;
@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSDateComponents *recurrence;
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

- (Class)class;
- (void).cxx_destruct;
- (void)_setSignificantEventOffset:(id)a0;
- (id)recurrenceCalendar;
- (void)updateFireDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateRecurrence:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateSignificantEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateSignificantEventOffset:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateTimeZone:(id)a0 completionHandler:(id /* block */)a1;

@end
