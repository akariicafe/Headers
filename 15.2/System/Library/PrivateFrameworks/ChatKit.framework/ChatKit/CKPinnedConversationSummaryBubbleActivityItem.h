@class IMMessage, NSString, IMChat, NSAttributedString;

@interface CKPinnedConversationSummaryBubbleActivityItem : NSObject <CKPinnedConversationActivityItem>

@property (readonly, nonatomic) IMMessage *message;
@property (readonly, nonatomic) IMChat *chat;
@property (readonly, nonatomic) NSString *attachedContactItemIdentifier;
@property (readonly, nonatomic) NSAttributedString *summaryText;
@property (readonly, nonatomic) NSString *activityItemIdentifier;
@property (readonly, nonatomic) BOOL activityItemAppearsWithAnimation;
@property (readonly, nonatomic) BOOL activityItemDisappearsWithAnimation;
@property (readonly, nonatomic) double activityItemContentScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
