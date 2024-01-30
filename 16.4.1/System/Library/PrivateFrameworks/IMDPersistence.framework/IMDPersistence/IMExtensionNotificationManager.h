@class NSMutableArray;

@interface IMExtensionNotificationManager : NSObject

@property (retain, nonatomic) NSMutableArray *notificationsContext;

+ (id)sharedInstance;

- (void)populateUserInfoForNotificationContent:(id)a0 messageBalloonBundleID:(id)a1 payloadData:(id)a2;
- (id)notificationCategories;
- (id)init;
- (BOOL)shouldRetractedMessageForBalloonBundleID:(id)a0;
- (BOOL)canPopulateUserInfoForMessageBalloonBundleID:(id)a0;
- (void).cxx_destruct;

@end
