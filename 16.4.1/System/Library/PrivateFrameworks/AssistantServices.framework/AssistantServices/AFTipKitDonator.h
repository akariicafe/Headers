@interface AFTipKitDonator : NSObject

+ (void)_donateToTipsWithIdentifier:(id)a0 bundleID:(id)a1 context:(id)a2 userInfo:(id)a3;
+ (void)donateAnnounceNotificationsInCarPlaySettingsChange:(long long)a0;
+ (void)donateCallHangUpAvailabilityChanged:(BOOL)a0;
+ (void)donateDictationEventStartedForBundleId:(id)a0 context:(id)a1 userInfo:(id)a2;
+ (void)donateMessageSentForBundleId:(id)a0 context:(id)a1 userInfo:(id)a2;
+ (void)donateSiriEventStartedForBundleId:(id)a0 context:(id)a1 userInfo:(id)a2;

@end
