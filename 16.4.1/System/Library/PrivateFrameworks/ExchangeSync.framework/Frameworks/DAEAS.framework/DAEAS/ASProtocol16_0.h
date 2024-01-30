@interface ASProtocol16_0 : ASProtocol14_1

- (BOOL)supportsAttachments;
- (id)protocolVersion;
- (BOOL)sendUID;
- (BOOL)includeCommentInMeetingResponse;
- (BOOL)alwaysSendAttendeeRole;
- (BOOL)includeExceptionsInParent;
- (BOOL)processFullMeetingInvitationData;
- (BOOL)sendDTStamp;
- (BOOL)sendEmailForMeetingInvitationAndResponse;
- (unsigned char)shortProtocolVersion;
- (BOOL)syncSnoozeEvents;
- (BOOL)useEmptyAttendees;
- (BOOL)useEmptyLocation;
- (BOOL)useEmptyRecurrence;
- (BOOL)useEmptyReminderMinutes;
- (BOOL)useFloatingTimeForAllDayEvents;
- (BOOL)useInstanceIdForException;
- (BOOL)useStructuredLocation;

@end
