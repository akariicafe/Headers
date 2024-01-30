@interface EKFrozenReminderReminder : EKFrozenReminderObject

+ (Class)meltedClass;

- (id)uniqueID;
- (id)alarms;
- (id)calendar;
- (id)remObjectID;
- (id)allAlarmsSet;
- (BOOL)hasAttendees;
- (id)URLString;
- (id)recurrenceRulesSet;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)calendarItemIdentifier;
- (id)dueDateComponents;
- (id)calendarItemExternalIdentifier;
- (void)_fixAlarmUUIDsForClone:(id)a0 from:(id)a1;
- (id)structuredLocation;
- (id)initNewReminderInStore:(id)a0;
- (id)_copyToNewList:(id)a0 error:(id *)a1;
- (BOOL)defaultAlarmRemoved;
- (id)UUID;
- (id)title;
- (id)completionDate;
- (id)timeZone;
- (id)creationDate;
- (id)uniqueIdentifier;
- (id)actionString;
- (id)selfAttendee;
- (id)notes;
- (id)attendeesRaw;
- (id)detachedItems;
- (id)travelStartLocation;
- (BOOL)hasNotes;
- (id)organizer;
- (id)attachmentsSet;
- (unsigned long long)priority;
- (id)ekExceptionDates;
- (id)appLinkData;
- (id)clientLocation;
- (id)_reminder;
- (id)lastModifiedDate;
- (id)startDateComponents;
- (id)structuredLocationWithoutPrediction;
- (id)originalItem;
- (BOOL)hasRecurrenceRules;
- (BOOL)defaultAlarmWasDeleted;

@end
