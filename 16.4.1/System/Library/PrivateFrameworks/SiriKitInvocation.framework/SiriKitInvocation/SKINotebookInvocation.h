@interface SKINotebookInvocation : NSObject

+ (id)announceRemindersRequestFromAnnounceDirectInvocationPayload:(id)a0;
+ (id)announceRemindersRequestFromNotificationIdentifier:(id)a0 fromApp:(id)a1 synchronousBurstIndex:(id)a2 isSameTypeAsLastAnnouncement:(BOOL)a3 appBundleIdOfLastAnnouncement:(id)a4 timeSinceLastAnnouncement:(double)a5;

@end
