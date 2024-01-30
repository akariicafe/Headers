@interface SKIPhoneInvocation : NSObject

+ (id)readHomeAnnouncementRequestFromApp:(id)a0;
+ (id)startPhoneCallRequestFromApp:(id)a0;
+ (id)announceVoicemailRequestForNotification:(id)a0 synchronousBurstIndex:(id)a1 isSameTypeAsLastAnnouncement:(BOOL)a2 appBundleIdOfLastAnnouncement:(id)a3 timeSinceLastAnnouncement:(double)a4;
+ (id)announceGroupFaceTimeInviteNotification:(id)a0 synchronousBurstIndex:(id)a1 isSameTypeAsLastAnnouncement:(BOOL)a2 appBundleIdOfLastAnnouncement:(id)a3 timeSinceLastAnnouncement:(double)a4;
+ (id)announceHomeAnnouncementRequestFromApp:(id)a0 withAnnouncementIdentifier:(id)a1 withUserNotificationType:(long long)a2 synchronousBurstIndex:(id)a3;
+ (id)announceIncomingCallerRequestForCallUUID:(id)a0 callProviderIdentifier:(id)a1 callProviderBundleId:(id)a2 callerContactIdentifiers:(id)a3 handle:(id)a4 isVideo:(BOOL)a5 isCallerIDBlocked:(BOOL)a6;
+ (id)announceVoicemailRequestForNotification:(id)a0 synchronousBurstIndex:(id)a1;
+ (id)announceGroupFaceTimeInviteNotification:(id)a0 synchronousBurstIndex:(id)a1;

@end
