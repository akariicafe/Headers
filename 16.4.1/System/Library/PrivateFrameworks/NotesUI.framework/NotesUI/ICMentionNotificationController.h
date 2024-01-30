@class NSObject;
@protocol OS_dispatch_queue;

@interface ICMentionNotificationController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationSerialQueue;

+ (id)sharedController;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfMention:(id)a0;
+ (id)coalesceMentions:(id)a0;
+ (id)noteTitleForMentions:(id)a0;
+ (id)pendingMentionsInContext:(id)a0 createdBeforeDate:(id)a1;
+ (id)predicateForMentionsInState:(int)a0 inContext:(id)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfParagraphForMention:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSentenceAfterMention:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSentenceBeforeMention:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSentenceForMention:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSnippetForMentions:(id)a0;
+ (id)sameNoteMentionsFrom:(id)a0;
+ (id)senderNameForMentions:(id)a0;
+ (id)snippetForMentions:(id)a0;
+ (void)triggerNotificationForMentionAttachments:(id)a0 context:(id)a1;

- (void)applicationDidEnterBackground;
- (void)reachabilityChanged:(id)a0;
- (void)listenForReachabilityChange;
- (void)sendPendingNotifications;
- (void)sendPendingNotificationsCreatedBefore:(id)a0;

@end
