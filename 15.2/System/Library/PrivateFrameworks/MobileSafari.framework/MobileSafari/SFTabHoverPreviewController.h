@class WBSDispatchSourceTimer, UIHoverGestureRecognizer;
@protocol SFTabHoverPreviewItem, SFTabHoverPreviewControllerDelegate;

@interface SFTabHoverPreviewController : NSObject {
    id<SFTabHoverPreviewItem> _itemShowingPreview;
    WBSDispatchSourceTimer *_tabHoverPreviewShowTimer;
    WBSDispatchSourceTimer *_disableHoverTimer;
    double _lastTimeHoverPreviewWasDismissed;
}

@property (weak) id<SFTabHoverPreviewControllerDelegate> delegate;
@property (retain, nonatomic) UIHoverGestureRecognizer *hoverRecognizer;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithItem:(id)a0;
- (void)cancel;
- (void)setNeedsSnapshotUpdate;
- (void)_cancelOrCloseHoverPreviewWithGracePeriod:(BOOL)a0;
- (void)_showHoverPreviewForItem:(id)a0;
- (void)_temporarilyDisableHover;

@end
