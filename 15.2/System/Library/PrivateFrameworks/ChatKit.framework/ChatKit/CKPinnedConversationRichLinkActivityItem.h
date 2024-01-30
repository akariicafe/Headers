@class IMMessage, NSString, IMChatContext, LPLinkView;

@interface CKPinnedConversationRichLinkActivityItem : NSObject <CKPinnedConversationActivityItem>

@property (readonly, nonatomic) IMMessage *message;
@property (readonly, nonatomic) IMChatContext *chatContext;
@property (readonly, nonatomic) NSString *attachedContactItemIdentifier;
@property (readonly, nonatomic) LPLinkView *linkView;
@property (readonly, nonatomic) NSString *activityItemIdentifier;
@property (readonly, nonatomic) BOOL activityItemAppearsWithAnimation;
@property (readonly, nonatomic) BOOL activityItemDisappearsWithAnimation;
@property (readonly, nonatomic) double activityItemContentScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
