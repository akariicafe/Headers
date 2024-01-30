@interface PLAssetsdNotificationClient : PLAssetsdBaseClient

- (void)asyncNotifyStartOfInterestForUnrenderedCinematicVideoItems;
- (void)asyncNotifyEndOfInterestForUnrenderedCinematicVideoItems;
- (void)asyncNotifyResponseToPhotoStreamInvitationForAlbumWithCloudGUID:(id)a0 acceptInvitation:(BOOL)a1;
- (void)asyncNotifyReportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)a0;
- (void)asyncNotifyInterestingMemoryNotificationViewedForColletionID:(id)a0;
- (void)asyncNotifyExpiringMomentShareWithUUIDs:(id)a0 thumbnailImageData:(id)a1 notificationTitle:(id)a2 notificationSubtitle:(id)a3;
- (void)asyncNotifySuggestedCMMNotificationForColletionID:(id)a0 notificationDeliveryDate:(id)a1;
- (void)asyncNotifySuggestedCMMViewedForColletionID:(id)a0;
- (void)asyncNotifyInterestingMemoryNotificationForColletionID:(id)a0 notificationDeliveryDate:(id)a1;
- (void)asyncNotifyUserViewedNotificationWithAlbumCloudGUID:(id)a0;

@end
