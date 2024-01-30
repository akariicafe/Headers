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

- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void)addProvider:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)toolTipInteraction:(id)a0 toolTipAtPoint:(struct CGPoint { double x0; double x1; })a1 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void).cxx_destruct;
- (void)contextMenuInteraction:(id)a0 willCommitWithAnimator:(id)a1;
- (void)contextMenuInteractionWillPresent:(id)a0;
- (void)contextMenuInteractionDidEnd:(id)a0;
- (void)registerOnView:(id)a0;
- (id)initWithViewport:(id)a0;
- (BOOL)shouldStartPreviewing;
- (void)willStartPreviewing;
- (void)didEndPreviewing;

@end
