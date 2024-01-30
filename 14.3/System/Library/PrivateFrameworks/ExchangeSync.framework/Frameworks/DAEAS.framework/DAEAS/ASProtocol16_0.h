@interface ASProtocol16_0 : ASProtocol14_1

- (BOOL)supportsAttachments;
- (id)protocolVersion;
- (BOOL)sendUID;
- (BOOL)includeCommentInMeetingResponse;
- (BOOL)sendEmailForMeetingInvitationAndResponse;
- (BOOL)processFullMeetingInvitationData;
- (BOOL)sendDTStamp;
- (BOOL)useStructuredLocation;
- (BOOL)alwaysSendAttendeeRole;
- (BOOL)includeExceptionsInParent;
- (BOOL)useInstanceIdForException;
- (BOOL)useFloatingTimeForAllDayEvents;
- (BOOL)useEmptyRecurrence;
- (BOOL)useEmptyReminderMinutes;
- (BOOL)useEmptyLocation;
- (BOOL)syncSnoozeEvents;
- (BOOL)useEmptyAttendees;
- (unsigned char)shortProtocolVersion;

@end
