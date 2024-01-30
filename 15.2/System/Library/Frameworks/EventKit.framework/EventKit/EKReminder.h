@class NSTimeZone, NSDateComponents, NSDate, EKObjectID;

@interface EKReminder : EKCalendarItem

@property (readonly, nonatomic) NSTimeZone *dueDateTimeZone;
@property (retain, nonatomic) EKObjectID *parentID;
@property (copy, nonatomic) NSDateComponents *startDateComponents;
@property (copy, nonatomic) NSDateComponents *dueDateComponents;
@property (nonatomic, getter=isCompleted) BOOL completed;
@property (copy, nonatomic) NSDate *completionDate;
@property (nonatomic) unsigned long long priority;

+ (Class)frozenClass;
+ (id)generateUniqueIDWithReminder:(id)a0 calendar:(id)a1;
+ (id)reminderWithEventStore:(id)a0;
+ (void)_removeSnoozedAlarmsFromReminder:(id)a0 usingDueDate:(id)a1;
+ (id)knownSingleValueKeysForComparison;

- (unsigned long long)entityType;
- (void)rollback;
- (BOOL)_reset;
- (id)dueDate;
- (void)setAllDay:(BOOL)a0;
- (id)dueDateComponents;
- (void)setDueDateComponents:(id)a0;
- (void)forceUpdateFrozenCalendar:(id)a0;
- (id)startTimeZone;
- (id)timeZone;
- (unsigned long long)displayOrder;
- (void)setDisplayOrder:(unsigned long long)a0;
- (void)setStartTimeZone:(id)a0;
- (id)initWithPersistentObject:(id)a0;
- (id)description;
- (id)_generateNewUniqueID;
- (id)reminderIdentifier;
- (id)firstAlertDate;
- (void)setFirstAlertDate:(id)a0;
- (void)clearParentID;
- (id)bestDisplayAlarm;
- (void)snoozeAlarm:(id)a0 withTimeIntervalFromNow:(double)a1;
- (id)startDateForRecurrence;
- (BOOL)isAllDay;
- (void)setStartDateComponents:(id)a0;
- (BOOL)dueDateAllDay;
- (void)_adjustPersistedStartDateComponentsForNewTimeZone:(id)a0;
- (id)startDateComponentsRaw;
- (id)startDateTimeZone;
- (void)setStartDateTimeZone:(id)a0;
- (BOOL)startDateAllDay;
- (void)setDueDate:(id)a0;
- (void)setStartDateAllDay:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)externalURI;
- (BOOL)refresh;
- (BOOL)validate:(id *)a0;
- (id)startDateComponents;
- (void)setTimeZone:(id)a0;
- (void)reset;

@end
