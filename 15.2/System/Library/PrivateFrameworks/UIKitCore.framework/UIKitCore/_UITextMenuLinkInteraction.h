@class NSString, UIContextMenuInteraction, NSMapTable;

@interface _UITextMenuLinkInteraction : _UITextSimpleLinkInteraction <UIContextMenuInteractionDelegate> {
    UIContextMenuInteraction *_contextMenuInteraction;
    NSMapTable *_configurationItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)didMoveToView:(id)a0;
- (id)_contextMenuInteraction;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)willMoveToView:(id)a0;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_contextMenuInteraction:(id)a0 shouldAttemptToPresentConfiguration:(id)a1;
- (id)_contextMenuInteraction:(id)a0 overrideSuggestedActionsForConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_contextMenuInteraction:(id)a0 failedToBeginForSecondaryClickAtLocation:(struct CGPoint { double x0; double x1; })a1;

@end
