@class NSTimeZone, NSString, NSArray, NSCalendar, NSDateComponents, NSDate, HMTriggerPolicy;

@interface HMTimerTrigger : HMTrigger <HMTimerTriggerConfiguration, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSDateComponents *recurrence;
@property (readonly, copy, nonatomic) NSString *significantEvent;
@property (readonly, copy, nonatomic) NSDateComponents *significantEventOffset;
@property (readonly, copy, nonatomic) NSArray *recurrences;
@property (readonly, copy, nonatomic) NSCalendar *recurrenceCalendar;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) NSArray *actionSets;
@property (readonly, copy, nonatomic) NSString *configuredName;
@property (readonly, nonatomic) HMTriggerPolicy *policy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void)setSignificantEvent:(id)a0;
- (void).cxx_destruct;
- (void)setRecurrences:(id)a0;
- (void)_handleTriggerFired:(id)a0;
- (BOOL)_mergeWithNewObject:(id)a0;
- (id)_serializeForAdd;
- (void)_updateFireDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateRecurrence:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateRecurrences:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateSignificantEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateSignificantEventOffset:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateTimeZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateTimerTriggerPropertiesFromResponse:(id)a0;
- (void)_updateTimerTriggerWithResponse:(id /* block */)a0 payloadToSend:(id)a1;
- (id)initWithDictionary:(id)a0 home:(id)a1;
- (id)initWithName:(id)a0 fireDate:(id)a1 recurrence:(id)a2;
- (id)initWithName:(id)a0 fireDate:(id)a1 timeZone:(id)a2 recurrence:(id)a3;
- (id)initWithName:(id)a0 fireDate:(id)a1 timeZone:(id)a2 recurrence:(id)a3 recurrenceCalendar:(id)a4;
- (id)initWithName:(id)a0 fireDate:(id)a1 timeZone:(id)a2 recurrences:(id)a3;
- (id)initWithName:(id)a0 significantEvent:(id)a1 significantEventOffset:(id)a2 recurrences:(id)a3;
- (void)setSignificantEventOffset:(id)a0;
- (void)updateFireDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateRecurrence:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateRecurrences:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateSignificantEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateSignificantEventOffset:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateTimeZone:(id)a0 completionHandler:(id /* block */)a1;

@end
