@protocol CKPinnedConversationContactItem;

@interface CKPinnedConversationContactItemAvatarView : CKAvatarView <CKPinnedConversationContactItemView>

@property (retain, nonatomic) id<CKPinnedConversationContactItem> pinnedConversationContactItem;

- (void)_updateContactItemViewShadows;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
