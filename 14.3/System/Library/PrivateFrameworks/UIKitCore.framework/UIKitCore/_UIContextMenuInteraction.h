@class UIContextMenuInteraction, NSString, UIView, _UIContextMenuPreviewActionGroup;
@protocol _UIContextMenuInteractionDelegate;

@interface _UIContextMenuInteraction : NSObject <UIContextMenuInteractionDelegate, UIInteraction> {
    struct { BOOL shouldBegin; BOOL previewForHighlighting; BOOL previewForDismissing; BOOL willPresent; BOOL didEnd; BOOL actionsForMenuSuggestedActionsPresentingWithStyle; } _delegateImplements;
}

@property (retain, nonatomic) UIContextMenuInteraction *actualInteraction;
@property (retain, nonatomic) _UIContextMenuPreviewActionGroup *actionGroup;
@property (readonly, weak, nonatomic) id<_UIContextMenuInteractionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

- (id)_previewViewController;
- (void)willMoveToView:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void)didMoveToView:(id)a0;
- (void)contextMenuInteractionWillPresent:(id)a0;
- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)contextMenuInteractionDidEnd:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willCommitWithAnimator:(id)a1;
- (id)initWithDelegate:(id)a0;
- (id)_actionsWithSuggestedActions:(id)a0;

@end
