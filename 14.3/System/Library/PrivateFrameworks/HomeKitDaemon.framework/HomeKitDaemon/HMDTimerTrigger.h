@class NSTimeZone, NSString, NSArray, NSTimer, NSDate, NSDateComponents;

@interface HMDTimerTrigger : HMDTrigger {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDate *currentFireDate;
}

@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSTimeZone *fireDateTimeZone;
@property (copy, nonatomic) NSString *significantEvent;
@property (copy, nonatomic) NSDateComponents *significantEventOffset;
@property (copy, nonatomic) NSDateComponents *fireRepeatInterval;
@property (copy, nonatomic) NSArray *recurrences;
@property (retain, nonatomic) NSString *timerID;
@property (retain, nonatomic) NSTimer *timer;
@property (readonly) NSDate *currentFireDate;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
+ (id)validateTriggerModel:(id)a0 message:(id)a1 currentFireDate:(id)a2;
+ (id)validateWholeMinuteDate:(id)a0 onCalendar:(id)a1;
+ (id)getCalendar:(id)a0;
+ (id)validateRecurrence:(id)a0 calendar:(id)a1 fireDate:(id)a2;
+ (id)validateRecurrences:(id)a0;
+ (id)validateSignificantOffset:(id)a0;

- (void)_startTimer:(id)a0;
- (void).cxx_destruct;
- (id)_nextFireDate;
- (void)dealloc;
- (id)_serializeForAdd;
- (void)_activateWithCompletion:(id /* block */)a0;
- (unsigned long long)triggerType;
- (void)_timerTriggered;
- (void)timerFired:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (void)_stopTimer;
- (id)description;
- (void)_registerForMessages;
- (id)initWithName:(id)a0 uuid:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)_startTimerWithFireDate:(id)a0;
- (BOOL)shouldActivateOnLocalDevice;
- (id)emptyModelObject;
- (void)_transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)_transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)initWithModel:(id)a0 home:(id)a1 message:(id)a2;
- (void)configure:(id)a0 messageDispatcher:(id)a1 queue:(id)a2;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)backingStoreObjects:(long long)a0;
- (void)completeConfiguration;
- (id)getCalendar;
- (id)getFireInterval;
- (void)setCurrentFireDate:(id)a0;
- (void)_handleUpdateTimerTriggerPropertiesRequest:(id)a0;
- (void)_handleUpdateTimerTriggerPropertiesModel:(id)a0 message:(id)a1;
- (BOOL)_reactivateFireDateTrigger;
- (BOOL)_reactivateSignificantEventTrigger;
- (void)_disableTimerOffReactivationFailure;
- (id)_nextSignificantEventFireDate;
- (void)_startTimerWithSignificantEventDate:(id)a0;
- (void)_reactiveTriggerAfterDelay;
- (void)_closestDatesForStartDate:(id)a0 earliestDate:(id)a1 timeZone:(id)a2 deliveryRepeatInterval:(id)a3 returnDateBefore:(id *)a4 returnDateAfter:(id *)a5;
- (BOOL)_shouldExecuteActionSet;
- (BOOL)_reactivateTrigger;
- (void)_handleTimerTriggerUpdate:(id)a0 message:(id)a1;
- (void)timerTriggered;
- (void)nsTimerTriggered:(id)a0;

@end
