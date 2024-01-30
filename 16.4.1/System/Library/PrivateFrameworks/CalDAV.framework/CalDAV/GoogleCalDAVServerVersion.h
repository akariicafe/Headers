@interface GoogleCalDAVServerVersion : CalDAVConcreteServerVersion

- (id)supportedCalendarComponentSets;
- (BOOL)shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;
- (id)type;
- (BOOL)requiresOpeningAttachmentAsLink;
- (id)init;

@end
