@interface EKPersistentCalendarItem : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (void)addAttendee:(id)a0;
- (id)sharedItemCreatedByDisplayName;
- (id)sharedItemModifiedTimeZoneName;
- (id)attendeesRaw;
- (void)setAllAlarms:(id)a0;
- (void)setSharedItemModifiedByAddress:(id)a0;
- (void)setEndLocation:(id)a0;
- (id)externalScheduleID;
- (id)travelStartLocation;
- (id)uniqueID;
- (void)setIsAllDay:(BOOL)a0;
- (void)setSharedItemModifiedDate:(id)a0;
- (void)setHasNotes:(BOOL)a0;
- (id)clientLocation;
- (id)URL;
- (void)setSharedItemModifiedByLastName:(id)a0;
- (void)setUUID:(id)a0;
- (void)setClientLocation:(id)a0;
- (id)sharedItemCreatedTimeZoneName;
- (void)setSharedItemCreatedByFirstName:(id)a0;
- (id)endTimeZoneName;
- (int)selfParticipantStatusRaw;
- (id)ekExceptionDates;
- (void)setCreationDate:(id)a0;
- (void)setLocalStructuredData:(id)a0;
- (id)sharedItemCreatedDate;
- (id)calendarScale;
- (void)setHasRecurrences:(BOOL)a0;
- (void)setPhantomMaster:(BOOL)a0;
- (void)setSharedItemModifiedByDisplayName:(id)a0;
- (void)setPriority:(int)a0;
- (void)setModifiedProperties:(unsigned int)a0;
- (void)setSelfAttendee:(id)a0;
- (void)removeAlarm:(id)a0;
- (id)structuredLocationWithoutPrediction;
- (void)setUniqueID:(id)a0;
- (void)setSharedItemCreatedByDisplayName:(id)a0;
- (void)setEndTimeZoneName:(id)a0;
- (void)setAttendeesRaw:(id)a0;
- (void)addRecurrenceRule:(id)a0;
- (void)setStartTimeZoneName:(id)a0;
- (id)sharedItemCreatedByFirstName;
- (void)setCalendarScale:(id)a0;
- (BOOL)hasRecurrences;
- (void)setSharedItemModifiedTimeZoneName:(id)a0;
- (id)localStructuredData;
- (void)setSharedItemCreatedTimeZoneName:(id)a0;
- (id)selfAttendee;
- (id)notes;
- (id)endLocation;
- (void)addAlarm:(id)a0;
- (void)setHasAttendees:(BOOL)a0;
- (void)removeAttachment:(id)a0;
- (id)sharedItemModifiedByDisplayName;
- (id)sharedItemModifiedByLastName;
- (id)appLinkData;
- (BOOL)phantomMaster;
- (void)setNotes:(id)a0;
- (void)setTravelStartLocation:(id)a0;
- (void)setSharedItemModifiedByFirstName:(id)a0;
- (BOOL)hasNotes;
- (id)sharedItemCreatedByAddress;
- (void)setLastModifiedDate:(id)a0;
- (id)sharedItemModifiedByAddress;
- (void)removeAttendee:(id)a0;
- (void)setOriginalItem:(id)a0;
- (id)externalData;
- (BOOL)defaultAlarmWasDeleted;
- (void)setSharedItemCreatedDate:(id)a0;
- (int)sequenceNumber;
- (void)setEkExceptionDates:(id)a0;
- (void)setExternalScheduleID:(id)a0;
- (id)startDateRaw;
- (void)setSingleRecurrenceRule:(id)a0;
- (id)sharedItemCreatedByLastName;
- (id)sharedItemModifiedByFirstName;
- (void)setDefaultAlarmWasDeleted:(BOOL)a0;
- (void)addAttachment:(id)a0;
- (void)setStructuredLocationWithoutPrediction:(id)a0;
- (id)originalItem;
- (void)setExternalData:(id)a0;
- (void)setExternalModificationTag:(id)a0;
- (void)setOrganizer:(id)a0;
- (id)allAlarms;
- (void)setDetachedItems:(id)a0;
- (id)detachedItems;
- (id)singleRecurrenceRule;
- (void)setSharedItemCreatedByAddress:(id)a0;
- (id)externalModificationTag;
- (id)startTimeZoneName;
- (unsigned int)modifiedProperties;
- (id)recurrenceRules;
- (void)setStartDateRaw:(id)a0;
- (void)setSequenceNumber:(int)a0;
- (void)setExternalID:(id)a0;
- (BOOL)hasAttendees;
- (id)sharedItemModifiedDate;
- (void)removeRecurrenceRule:(id)a0;
- (void)setSharedItemCreatedByLastName:(id)a0;
- (void)setAppLinkData:(id)a0;
- (void)setRecurrenceRules:(id)a0;
- (void)setStructuredData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)UUID;
- (void)setAttachments:(id)a0;
- (id)attachments;
- (id)creationDate;
- (id)organizer;
- (id)startDate;
- (int)priority;
- (id)action;
- (id)structuredData;
- (BOOL)isAllDay;
- (void)setURL:(id)a0;
- (void)setTitle:(id)a0;
- (id)calendar;
- (id)externalID;
- (void)setAction:(id)a0;
- (id)lastModifiedDate;
- (void)setStartDate:(id)a0;
- (void)setCalendar:(id)a0;
- (id)title;

@end
