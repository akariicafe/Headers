@class _UIMorphingView;

@interface _UIAnchoredClickHighlightPlatterView : _UIHighlightPlatterView

@property (weak, nonatomic) _UIMorphingView *anchorView;

- (void).cxx_destruct;
- (void)anchorToContainer;
- (void)deAnchor;
- (id)initWithTargetedPreview:(id)a0;

@end
