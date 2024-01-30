@class SXViewport, NSString, UITargetedPreview, NSMutableArray;
@protocol SXInteractionContextProviding, SXInteractionContextManagerDelegate;

@interface SXInteractionContextManager : NSObject <UIContextMenuInteractionDelegate, UIToolTipInteractionDelegate, SXInteractionContextManager>

@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly, nonatomic) NSMutableArray *providers;
@property (retain, nonatomic) id<SXInteractionContextProviding> activeProvider;
@property (retain, nonatomic) UITargetedPreview *activePreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXInteractionContextManagerDelegate> delegate;

- (void)addProvider:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (void)contextMenuInteraction:(id)a0 willCommitWithAnimator:(id)a1;
- (void)contextMenuInteractionDidEnd:(id)a0;
- (void)contextMenuInteractionWillPresent:(id)a0;
- (id)toolTipInteraction:(id)a0 configurationAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithViewport:(id)a0;
- (void)registerOnView:(id)a0;
- (void)didEndPreviewing;
- (BOOL)shouldStartPreviewing;
- (void)willStartPreviewing;

@end
