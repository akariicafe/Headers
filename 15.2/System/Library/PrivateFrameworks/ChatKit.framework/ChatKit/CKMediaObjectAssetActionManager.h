@class CKMessagePartChatItem, NSMutableDictionary, NSString, CKMediaObjectAssetMenuBuilder, UIMenu;
@protocol CKMediaObjectAssetActionHelper;

@interface CKMediaObjectAssetActionManager : PXAssetActionManager <CKMediaObjectAssetMenuBuilderDelegate> {
    CKMediaObjectAssetMenuBuilder *_menuBuilder;
}

@property (readonly, nonatomic) NSMutableDictionary *performerClassByType;
@property (readonly, nonatomic) CKMessagePartChatItem *chatItem;
@property (readonly, weak, nonatomic) id<CKMediaObjectAssetActionHelper> chatActionHelper;
@property (readonly, nonatomic) UIMenu *actionContextMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)menuBuilder:(id)a0 quickLookChatItem:(id)a1;
- (void)menuBuilder:(id)a0 tapbackChatItem:(id)a1;
- (void)menuBuilder:(id)a0 replyChatItem:(id)a1;
- (void)menuBuilder:(id)a0 forwardChatItems:(id)a1;
- (void)menuBuilder:(id)a0 copyChatItems:(id)a1;
- (void)menuBuilder:(id)a0 deleteChatItems:(id)a1;
- (id)contextMenuForChatItems:(id)a0 cursorChatItem:(id)a1 isCMM:(BOOL)a2;
- (id)actionPerformerForActionType:(id)a0;
- (id)barButtonItemForActionType:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)canPerformActionType:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsActionType:(id)a0;
- (id)previewActionForActionType:(id)a0;
- (id)_selectionSnapshotForPerformerClass:(Class)a0;
- (id)contextMenu;
- (SEL)_barButtonSelectorByActionType:(id)a0;
- (void)_handlePreviewAction:(id)a0 actionType:(id)a1;
- (void)_keyCommandQuickLook:(id)a0;
- (id)_currentlySelectedChatItemsOutCursorItem:(id *)a0;
- (void)_keyCommandDelete:(id)a0;
- (void)_keyCommandReply:(id)a0;
- (void)_keyCommandTapback:(id)a0;
- (void)_keyCommandSelectAll:(id)a0;
- (void)_keyCommandCopy:(id)a0;
- (void)_runDeleteActionPerformer;
- (void)_handleAddToLibraryBarButtonItem:(id)a0;
- (void)_handleReplyBarButtonItem:(id)a0;
- (void)_handleDeleteBarButtonItem:(id)a0;
- (void)executeActionForActionType:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)supportsContextMenu;
- (id)initWithChatItem:(id)a0 chatActionHelper:(id)a1 selectionManager:(id)a2;
- (id)previewActionForActionType:(id)a0 image:(id)a1;
- (id)actionKeyCommands;

@end
