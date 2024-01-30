@interface CADEventOperationGroup : CADOperationGroup <CADEventInterface>

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;
+ (void)monitorLocationAuthorizationStatusChanges:(unsigned long long)a0;
+ (BOOL)requiresEventOrReminderAccess;

- (void)CADDatabaseGetSuggestedEventCalendarWithReply:(id /* block */)a0;
- (void)CADOccurrenceCacheSearchLocationsWithTerm:(id)a0 inCalendars:(id)a1 responseToken:(int)a2 reply:(id /* block */)a3;
- (void)CADDatabaseGetTTLLocationAuthorizationStatus:(id /* block */)a0;
- (void)CADDatabaseSetShowsDeclinedEvents:(BOOL)a0;
- (void)CADDatabaseGetCountOfNotifiableEvents:(id /* block */)a0;
- (void)CADDatabaseActOnSuggestedEvent:(id)a0 action:(int)a1 reply:(id /* block */)a2;
- (void)CADOccurrenceCacheCancelSearchWithReplyID:(int)a0;
- (void)CADDatabaseShouldPermitOrganizerEmailFromJunkChecks:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetEventWithEventIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetBirthdayCalendarEnabledWithReply:(id /* block */)a0;
- (void)CADDatabaseGetSecurityScopedLocalURLWrapperForAttachment:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetDefaultLocalCalendarWithReply:(id /* block */)a0;
- (void)CADOccurrenceCacheAreOccurrencesBeingGenerated:(id /* block */)a0;
- (void)CADDatabaseInsertSuggestedEventCalendarWithReply:(id /* block */)a0;
- (void)CADDatabaseSetDefaultCalendarForNewEvents:(id)a0 delegateSource:(id)a1;
- (void)CADDatabaseGetNaturalLanguageSuggestedEventCalendarWithReply:(id /* block */)a0;
- (void)CADDatabaseGetDefaultCalendarForNewEventsInDelegateSource:(id)a0 withReply:(id /* block */)a1;
- (id)_getDefaultCalendarIDForNewEventsInStoreWithID:(id)a0;
- (void)CADDatabaseGetAllEventsWithUniqueID:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetAttachmentWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetOrCreateSubscribedCalendarsSource:(id /* block */)a0;
- (void)CADDatabaseGetOrCreateBirthdayCalendar:(id /* block */)a0;
- (void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(id)a0 reply:(id /* block */)a1;
- (void)CADOccurrenceCacheGetOccurrenceForCalendars:(id)a0 onDay:(id)a1 reply:(id /* block */)a2;
- (void)CADDatabaseGetEventWithUniqueID:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetCountOfUnacknowledgedEvents:(id /* block */)a0;
- (void)CADDatabaseActOnSuggestedEvent:(id)a0 action:(int)a1 validator:(id)a2 reply:(id /* block */)a3;
- (void)CADOccurrenceCacheSearchWithTerm:(id)a0 inCalendars:(id)a1 responseToken:(int)a2 reply:(id /* block */)a3;
- (void)CADOccurrenceCacheDoEvents:(id)a0 haveOccurrencesAfterDate:(id)a1 reply:(id /* block */)a2;
- (void)CADDatabaseSetBirthdayCalendarEnabled:(BOOL)a0 withReply:(id /* block */)a1;
- (BOOL)_CADDatabaseCanModifySuggestedEventCalendar;
- (void)CADDatabaseCanModifySuggestedEventCalendar:(id /* block */)a0;
- (void)CADOccurrencesExistInRangeForEvent:(id)a0 startDate:(id)a1 endDate:(id)a2 mustStartInInterval:(BOOL)a3 timezone:(id)a4 reply:(id /* block */)a5;
- (void)CADOccurrenceCacheGetOccurrenceDateOfEventWithRowID:(int)a0 nearestDate:(id)a1 prefersForwardSearch:(BOOL)a2 reply:(id /* block */)a3;
- (void)CADDatabaseShouldPermitOrganizerPhoneNumberFromJunkChecks:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(id /* block */)a0;

@end
