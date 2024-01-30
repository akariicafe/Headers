@interface EKFrozenReminderReminder : EKFrozenReminderObject

+ (Class)meltedClass;

- (id)uniqueID;
- (id)organizer;
- (id)alarms;
- (id)URLString;
- (id)creationDate;
- (id)calendar;
- (id)remObjectID;
- (unsigned long long)priority;
- (id)syncError;
- (id)lastModifiedDate;
- (id)UUID;
- (id)unlocalizedTitle;
- (id)startDateComponents;
- (id)notes;
- (id)timeZone;
- (id)structuredLocation;
- (id)uniqueIdentifier;
- (id)originalItem;
- (id)clientLocation;
- (BOOL)hasNotes;
- (id)completionDate;
- (id)calendarItemIdentifier;
- (id)actionString;
- (id)_reminder;
- (id)dueDateComponents;
- (BOOL)hasAttendees;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)_copyToNewList:(id)a0 error:(id *)a1;
- (void)_fixAlarmUUIDsForClone:(id)a0 from:(id)a1;
- (id)allAlarmsSet;
- (id)appLinkData;
- (id)attachmentsSet;
- (id)attendeesRaw;
- (id)calendarItemExternalIdentifier;
- (BOOL)defaultAlarmRemoved;
- (BOOL)defaultAlarmWasDeleted;
- (id)detachedItems;
- (id)ekExceptionDates;
- (BOOL)hasRecurrenceRules;
- (id)initNewReminderInStore:(id)a0;
- (id)recurrenceRulesSet;
- (id)selfAttendee;
- (id)structuredLocationWithoutPrediction;
- (id)travelStartLocation;

@end
