@class BSAbsoluteMachTimer, UIHoverGestureRecognizer;
@protocol SFTabHoverPreviewItem, SFTabHoverPreviewControllerDelegate;

@interface SFTabHoverPreviewController : NSObject {
    id<SFTabHoverPreviewItem> _itemShowingPreview;
    id<SFTabHoverPreviewItem> _itemPendingPreview;
    struct CGPoint { double x; double y; } _pendingHoverLocation;
    BSAbsoluteMachTimer *_tabHoverPreviewShowTimer;
    BSAbsoluteMachTimer *_disableHoverTimer;
    double _lastTimeHoverPreviewWasDismissed;
}

@property (weak) id<SFTabHoverPreviewControllerDelegate> delegate;
@property (retain, nonatomic) UIHoverGestureRecognizer *hoverRecognizer;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)dismiss;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_cancelOrCloseHoverPreviewWithGracePeriod:(BOOL)a0;
- (void)_showHoverPreviewForItem:(id)a0;
- (void)_temporarilyDisableHover;
- (void)setNeedsSnapshotUpdate;
- (void)updateWithItem:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;

@end
