@interface ASProtocol14_0 : ASProtocol12_1

- (id)protocolVersion;
- (BOOL)useSmartMailTasks;
- (BOOL)sendEmailInWBXML;
- (BOOL)usesTopLevelStatusCodes;
- (BOOL)fetchAttachmentsWithItemOperations;
- (BOOL)allAttachmentsAreBase64ed;
- (BOOL)sendCalendarInfoInRecurrence;
- (BOOL)sendUserAgentInDeviceInfo;
- (BOOL)supportsAttendeesInExceptions;
- (BOOL)processFullMeetingInvitationData;
- (BOOL)alwaysSendTimezone;
- (unsigned char)shortProtocolVersion;

@end
