@class NSTimeZone, NSString, NSArray, NSCalendar, NSDateComponents, NSDate;

@interface HMTimerTrigger : HMTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSDateComponents *recurrence;
@property (readonly, copy, nonatomic) NSString *significantEvent;
@property (readonly, copy, nonatomic) NSDateComponents *significantEventOffset;
@property (readonly, copy, nonatomic) NSArray *recurrences;
@property (readonly, copy, nonatomic) NSCalendar *recurrenceCalendar;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)_serializeForAdd;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_handleTriggerFired:(id)a0;
- (void)setRecurrences:(id)a0;
- (void)updateRecurrences:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateRecurrences:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithName:(id)a0 fireDate:(id)a1 timeZone:(id)a2 recurrence:(id)a3 recurrenceCalendar:(id)a4;
- (id)initWithName:(id)a0 fireDate:(id)a1 timeZone:(id)a2 recurrences:(id)a3;
- (id)initWithName:(id)a0 significantEvent:(id)a1 significantEventOffset:(id)a2 recurrences:(id)a3;
- (void)setSignificantEvent:(id)a0;
- (void)setSignificantEventOffset:(id)a0;
- (void)updateFireDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateFireDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateTimeZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateTimeZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateSignificantEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateSignificantEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateSignificantEventOffset:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateSignificantEventOffset:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateRecurrence:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateRecurrence:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateTimerTriggerWithResponse:(id /* block */)a0 payloadToSend:(id)a1;
- (void)_updateTimerTriggerPropertiesFromResponse:(id)a0;

@end
