@class NSArray;

@interface CKPinnedConversationActivitySnapshot : NSObject

@property (readonly, copy, nonatomic) NSArray *activityItems;
@property (readonly, copy, nonatomic) NSArray *contactItems;

+ (id)emptySnapshot;

- (long long)_firstContactItemAlignmentForContactItem:(id)a0 previousSnapshot:(id)a1 totalNumberOfContactItemIdentifiersWithUnreadMessages:(long long)a2;
- (void).cxx_destruct;
- (id)initWithActivityItems:(id)a0 contactItems:(id)a1;
- (double)_contentScaleForMessage:(id)a0 amongRecentMessagesInPinnedConversations:(id)a1;
- (long long)_contactItemAlignmentForItemAtIndex:(long long)a0 firstItemAlignment:(long long)a1;
- (double)_contentScaleForContactItemAtIndex:(long long)a0 withMessageContentScale:(double)a1;
- (id)_contactItemMatchingIdentifier:(id)a0;
- (id)initWithConversation:(id)a0 recentMessagesInPinnedConversations:(id)a1 previousSnapshot:(id)a2;

@end
