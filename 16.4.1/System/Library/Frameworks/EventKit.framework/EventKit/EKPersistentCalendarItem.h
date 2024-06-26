@interface EKPersistentCalendarItem : EKPersistentObject

+ (id)relations;
+ (id)propertyKeyForUniqueIdentifier;
+ (id)defaultPropertiesToLoad;
+ (id)propertiesToUnloadOnCommit;

- (id)uniqueID;
- (void)setExternalModificationTag:(id)a0;
- (void)addAlarm:(id)a0;
- (void)removeAlarm:(id)a0;
- (id)organizer;
- (BOOL)isAllDay;
- (void)setUnlocalizedTitle:(id)a0;
- (id)externalData;
- (int)sequenceNumber;
- (id)URLString;
- (id)creationDate;
- (id)calendar;
- (void)setSequenceNumber:(int)a0;
- (void)setStartDate:(id)a0;
- (void)setCalendar:(id)a0;
- (void)setPriority:(int)a0;
- (void)setCreationDate:(id)a0;
- (id)endLocation;
- (void)setUniqueID:(id)a0;
- (int)priority;
- (id)syncError;
- (id)lastModifiedDate;
- (id)UUID;
- (void)setNotes:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)unlocalizedTitle;
- (void)setLastModifiedDate:(id)a0;
- (void)setExternalID:(id)a0;
- (void)setUUID:(id)a0;
- (void)setExternalData:(id)a0;
- (void)setSyncError:(id)a0;
- (id)externalID;
- (void)setIsAllDay:(BOOL)a0;
- (id)notes;
- (id)externalModificationTag;
- (id)title;
- (id)startDate;
- (void)setTitle:(id)a0;
- (void)setEndLocation:(id)a0;
- (id)originalItem;
- (void)setOriginalItem:(id)a0;
- (id)clientLocation;
- (BOOL)hasNotes;
- (void)setOrganizer:(id)a0;
- (void)setURLString:(id)a0;
- (id)actionString;
- (BOOL)hasAttendees;
- (void)setSharedItemCreatedByLastName:(id)a0;
- (id)sharedItemModifiedByDisplayName;
- (id)endTimeZoneName;
- (void)removeAttendee:(id)a0;
- (void)addAttendee:(id)a0;
- (void)addRecurrenceRule:(id)a0;
- (id)allAlarmsSet;
- (id)attachmentsSet;
- (id)attendeesRaw;
- (id)calendarScale;
- (BOOL)defaultAlarmWasDeleted;
- (id)detachedItems;
- (id)ekExceptionDates;
- (id)externalScheduleID;
- (BOOL)hasRecurrenceRules;
- (id)localStructuredData;
- (unsigned int)modifiedProperties;
- (BOOL)phantomMaster;
- (id)recurrenceRulesSet;
- (void)removeRecurrenceRule:(id)a0;
- (id)selfAttendee;
- (int)selfParticipantStatusRaw;
- (void)setActionString:(id)a0;
- (void)setAllAlarmsSet:(id)a0;
- (void)setAttachmentsSet:(id)a0;
- (void)setAttendeesRaw:(id)a0;
- (void)setCalendarScale:(id)a0;
- (void)setClientLocation:(id)a0;
- (void)setDefaultAlarmWasDeleted:(BOOL)a0;
- (void)setDetachedItems:(id)a0;
- (void)setEkExceptionDates:(id)a0;
- (void)setEndTimeZoneName:(id)a0;
- (void)setExternalScheduleID:(id)a0;
- (void)setHasAttendees:(BOOL)a0;
- (void)setHasNotes:(BOOL)a0;
- (void)setHasRecurrenceRules:(BOOL)a0;
- (void)setLocalStructuredData:(id)a0;
- (void)setModifiedProperties:(unsigned int)a0;
- (void)setPhantomMaster:(BOOL)a0;
- (void)setRecurrenceRulesSet:(id)a0;
- (void)setSelfAttendee:(id)a0;
- (void)setSelfParticipantStatusRaw:(int)a0;
- (void)setSharedItemCreatedByAddressString:(id)a0;
- (void)setSharedItemCreatedByDisplayName:(id)a0;
- (void)setSharedItemCreatedByFirstName:(id)a0;
- (void)setSharedItemCreatedDate:(id)a0;
- (void)setSharedItemCreatedTimeZoneName:(id)a0;
- (void)setSharedItemModifiedByAddressString:(id)a0;
- (void)setSharedItemModifiedByDisplayName:(id)a0;
- (void)setSharedItemModifiedByFirstName:(id)a0;
- (void)setSharedItemModifiedByLastName:(id)a0;
- (void)setSharedItemModifiedDate:(id)a0;
- (void)setSharedItemModifiedTimeZoneName:(id)a0;
- (void)setSingleRecurrenceRule:(id)a0;
- (void)setStartDateRaw:(id)a0;
- (void)setStartTimeZoneName:(id)a0;
- (void)setStructuredData:(id)a0;
- (void)setStructuredLocationWithoutPrediction:(id)a0;
- (void)setSuppressNotificationForChanges:(BOOL)a0;
- (void)setTravelStartLocation:(id)a0;
- (id)sharedItemCreatedByAddressString;
- (id)sharedItemCreatedByDisplayName;
- (id)sharedItemCreatedByFirstName;
- (id)sharedItemCreatedByLastName;
- (id)sharedItemCreatedDate;
- (id)sharedItemCreatedTimeZoneName;
- (id)sharedItemModifiedByAddressString;
- (id)sharedItemModifiedByFirstName;
- (id)sharedItemModifiedByLastName;
- (id)sharedItemModifiedDate;
- (id)sharedItemModifiedTimeZoneName;
- (id)singleRecurrenceRule;
- (id)startDateRaw;
- (id)startTimeZoneName;
- (id)structuredData;
- (id)structuredLocationWithoutPrediction;
- (BOOL)suppressNotificationForChanges;
- (id)travelStartLocation;

@end
