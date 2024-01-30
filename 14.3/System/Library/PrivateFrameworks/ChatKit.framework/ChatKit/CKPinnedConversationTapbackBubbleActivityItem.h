@class NSString, IMMessage;

@interface CKPinnedConversationTapbackBubbleActivityItem : NSObject <CKPinnedConversationActivityItem>

@property (readonly, nonatomic) IMMessage *message;
@property (readonly, nonatomic) NSString *attachedContactItemIdentifier;
@property (readonly, nonatomic) NSString *activityItemIdentifier;
@property (readonly, nonatomic) BOOL activityItemAppearsWithAnimation;
@property (readonly, nonatomic) BOOL activityItemDisappearsWithAnimation;
@property (readonly, nonatomic) double activityItemContentScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityItemView;
- (id)initWithMessage:(id)a0 contentScale:(double)a1 attachedContactItemIdentifier:(id)a2;

@end
