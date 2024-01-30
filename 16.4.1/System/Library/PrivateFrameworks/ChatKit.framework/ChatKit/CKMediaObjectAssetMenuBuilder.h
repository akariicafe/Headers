@protocol CKMediaObjectAssetMenuBuilderDelegate;

@interface CKMediaObjectAssetMenuBuilder : NSObject

@property (weak, nonatomic) id<CKMediaObjectAssetMenuBuilderDelegate> delegate;

- (void).cxx_destruct;
- (void)_copyChatItems:(id)a0;
- (id)_copyActionForChatItems:(id)a0;
- (void)_deleteChatItems:(id)a0;
- (id)_deleteMenuForChatItems:(id)a0;
- (id)_exportActionForChatItems:(id)a0;
- (id)_exportMenuForChatItem:(id)a0;
- (id)_forwardActionForChatItems:(id)a0;
- (id)_forwardAndCopyMenuForChatItems:(id)a0;
- (void)_forwardChatItems:(id)a0;
- (id)_openActionForChatItems:(id)a0;
- (void)_openFile:(id)a0;
- (void)_openFiles:(id)a0;
- (id)_quickLookActionForChatItems:(id)a0 cursorChatItem:(id)a1;
- (id)_quickLookAndOpenActionsForChatItems:(id)a0 cursorChatItem:(id)a1;
- (id)_quickLookAndOpenMenuForChatItems:(id)a0 cursorChatItem:(id)a1;
- (void)_quickLookChatItem:(id)a0;
- (id)_replyActionForChatItem:(id)a0;
- (void)_replyToChatItem:(id)a0;
- (id)_tapbackActionForChatItem:(id)a0;
- (id)_tapbackAndReplyMenuForChatItems:(id)a0;
- (void)_tapbackChatItem:(id)a0;
- (id)contextMenuForChatItems:(id)a0 cursorChatItem:(id)a1 isCMM:(BOOL)a2;

@end
