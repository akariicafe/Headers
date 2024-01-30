@class NSArray, NSString;

@interface IMDFamilyInviteNotificationContext : NSObject <IMDFamilyNotificationContextProtocol>

@property (copy, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)populateUserInfoForNotificationContent:(id)a0 messageBalloonBundleID:(id)a1 payloadData:(id)a2;
- (id)notificationCategories;
- (BOOL)inviteeIsTeen;
- (BOOL)canPopulateUserInfoForMessageBalloonBundleID:(id)a0;
- (void).cxx_destruct;

@end
