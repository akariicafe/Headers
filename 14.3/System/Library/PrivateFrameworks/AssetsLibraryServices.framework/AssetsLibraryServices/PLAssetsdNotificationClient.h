@interface PLAssetsdNotificationClient : PLAssetsdBaseClient

- (void)asyncNotifyResponseToPhotoStreamInvitationForAlbumWithCloudGUID:(id)a0 acceptInvitation:(BOOL)a1;
- (void)asyncNotifyReportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)a0;
- (void)asyncNotifyUserViewedNotificationWithAlbumCloudGUID:(id)a0;
- (void)asyncNotifyInterestingMemoryNotificationForColletionID:(id)a0 notificationDeliveryDate:(id)a1;
- (void)asyncNotifyInterestingMemoryNotificationViewedForColletionID:(id)a0;
- (void)asyncNotifySuggestedCMMViewedForColletionID:(id)a0;
- (void)asyncNotifySuggestedCMMNotificationForColletionID:(id)a0 notificationDeliveryDate:(id)a1;
- (void)asyncNotifyExpiringMomentShareWithUUIDs:(id)a0 thumbnailImageData:(id)a1 notificationTitle:(id)a2 notificationSubtitle:(id)a3;

@end
