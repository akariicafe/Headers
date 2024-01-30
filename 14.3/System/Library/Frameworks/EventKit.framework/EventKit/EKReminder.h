@class NSTimeZone, NSDateComponents, NSDate, EKObjectID;

@interface EKReminder : EKCalendarItem

@property (readonly, nonatomic) NSTimeZone *dueDateTimeZone;
@property (retain, nonatomic) EKObjectID *parentID;
@property (copy, nonatomic) NSDateComponents *startDateComponents;
@property (copy, nonatomic) NSDateComponents *dueDateComponents;
@property (nonatomic, getter=isCompleted) BOOL completed;
@property (copy, nonatomic) NSDate *completionDate;
@property (nonatomic) unsigned long long priority;

+ (id)knownSingleValueKeysForComparison;
+ (id)generateUniqueIDWithReminder:(id)a0 calendar:(id)a1;
+ (void)_removeSnoozedAlarmsFromReminder:(id)a0 usingDueDate:(id)a1;
+ (id)reminderWithEventStore:(id)a0;
+ (Class)frozenClass;

- (void)setTimeZone:(id)a0;
- (BOOL)_reset;
- (void)rollback;
- (BOOL)refresh;
- (void)setStartTimeZone:(id)a0;
- (void)setStartDateComponents:(id)a0;
- (unsigned long long)entityType;
- (id)init;
- (id)_generateNewUniqueID;
- (id)externalURI;
- (void)snoozeAlarm:(id)a0 withTimeIntervalFromNow:(double)a1;
- (void).cxx_destruct;
- (id)startDateForRecurrence;
- (id)startTimeZone;
- (id)dueDate;
- (void)setDisplayOrder:(unsigned long long)a0;
- (void)reset;
- (unsigned long long)displayOrder;
- (id)startDateComponents;
- (id)timeZone;
- (BOOL)isAllDay;
- (id)description;
- (void)setAllDay:(BOOL)a0;
- (id)reminderIdentifier;
- (id)firstAlertDate;
- (void)clearParentID;
- (void)setFirstAlertDate:(id)a0;
- (id)bestDisplayAlarm;
- (void)setDueDate:(id)a0;
- (id)dueDateComponents;
- (void)setDueDateComponents:(id)a0;
- (void)forceUpdateFrozenCalendar:(id)a0;
- (id)initWithPersistentObject:(id)a0;
- (BOOL)validate:(id *)a0;
- (BOOL)dueDateAllDay;
- (BOOL)startDateAllDay;
- (void)_adjustPersistedStartDateComponentsForNewTimeZone:(id)a0;
- (id)startDateComponentsRaw;
- (id)startDateTimeZone;
- (void)setStartDateTimeZone:(id)a0;
- (void)setStartDateAllDay:(BOOL)a0;

@end
