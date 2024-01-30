@interface GoogleCalDAVServerVersion : CalDAVConcreteServerVersion

- (id)init;
- (BOOL)shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;
- (id)type;
- (id)supportedCalendarComponentSets;
- (BOOL)requiresOpeningAttachmentAsLink;

@end
