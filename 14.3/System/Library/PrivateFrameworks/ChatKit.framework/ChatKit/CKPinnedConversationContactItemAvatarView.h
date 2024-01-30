@protocol CKPinnedConversationContactItem;

@interface CKPinnedConversationContactItemAvatarView : CKAvatarView <CKPinnedConversationContactItemView>

@property (retain, nonatomic) id<CKPinnedConversationContactItem> pinnedConversationContactItem;

- (id)init;
- (void).cxx_destruct;
- (void)_updateContactItemViewShadows;
- (void)traitCollectionDidChange:(id)a0;

@end
