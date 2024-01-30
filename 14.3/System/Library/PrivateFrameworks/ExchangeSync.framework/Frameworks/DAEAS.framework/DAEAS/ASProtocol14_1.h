@interface ASProtocol14_1 : ASProtocol14_0

- (id)protocolVersion;
- (BOOL)useEventIdsInMeetingResponse;
- (BOOL)sendFirstDayOfWeekInRecurrence;
- (BOOL)sendDeviceInfoOnProvision;
- (BOOL)supportsGALPhotos;
- (unsigned char)shortProtocolVersion;

@end
