@class SXViewport, NSString, UITargetedPreview, NSMutableArray;
@protocol SXContextMenuProviding, SXContextMenuManagerDelegate;

@interface SXContextMenuManager : NSObject <UIContextMenuInteractionDelegate, SXContextMenuManager>

@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly, nonatomic) NSMutableArray *providers;
@property (retain, nonatomic) id<SXContextMenuProviding> activeProvider;
@property (retain, nonatomic) UITargetedPreview *activePreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXContextMenuManagerDelegate> delegate;

- (void)addProvider:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void)contextMenuInteractionWillPresent:(id)a0;
- (void).cxx_destruct;
- (void)registerOnView:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithViewport:(id)a0;
- (BOOL)shouldStartPreviewing;
- (void)contextMenuInteractionDidEnd:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willCommitWithAnimator:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)didEndPreviewing;
- (void)willStartPreviewing;

@end
