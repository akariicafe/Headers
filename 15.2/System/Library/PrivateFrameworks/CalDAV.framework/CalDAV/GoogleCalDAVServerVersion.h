@interface GoogleCalDAVServerVersion : CalDAVConcreteServerVersion

- (id)supportedCalendarComponentSets;
- (BOOL)requiresOpeningAttachmentAsLink;
- (id)init;
- (BOOL)shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;
- (id)type;

@end
