@interface EKFrozenReminderReminder : EKFrozenReminderObject

+ (Class)meltedClass;

- (id)attendeesRaw;
- (id)travelStartLocation;
- (id)uniqueID;
- (id)alarms;
- (id)clientLocation;
- (id)URL;
- (id)ekExceptionDates;
- (id)structuredLocationWithoutPrediction;
- (BOOL)hasRecurrences;
- (id)selfAttendee;
- (id)notes;
- (id)appLinkData;
- (BOOL)hasNotes;
- (BOOL)defaultAlarmWasDeleted;
- (id)originalItem;
- (id)allAlarms;
- (id)detachedItems;
- (id)recurrenceRules;
- (BOOL)hasAttendees;
- (id)UUID;
- (id)attachments;
- (id)creationDate;
- (id)organizer;
- (id)startDateComponents;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (unsigned long long)priority;
- (id)timeZone;
- (id)remObjectID;
- (id)action;
- (id)uniqueIdentifier;
- (id)calendar;
- (id)completionDate;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (id)lastModifiedDate;
- (id)calendarItemIdentifier;
- (id)dueDateComponents;
- (id)calendarItemExternalIdentifier;
- (void)_fixAlarmUUIDsForClone:(id)a0 from:(id)a1;
- (id)structuredLocation;
- (id)initNewReminderInStore:(id)a0;
- (id)_copyToNewList:(id)a0 error:(id *)a1;
- (BOOL)defaultAlarmRemoved;
- (id)_reminder;
- (id)title;

@end
