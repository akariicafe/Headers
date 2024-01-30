@interface SKINotebookInvocation : NSObject

+ (id)announceRemindersRequestFromNotificationIdentifier:(id)a0 fromApp:(id)a1 synchronousBurstIndex:(id)a2 isSameTypeAsLastAnnouncement:(BOOL)a3 appBundleIdOfLastAnnouncement:(id)a4 timeSinceLastAnnouncement:(double)a5;
+ (id)announceRemindersRequestFromNotificationIdentifier:(id)a0 fromApp:(id)a1 synchronousBurstIndex:(id)a2;

@end
