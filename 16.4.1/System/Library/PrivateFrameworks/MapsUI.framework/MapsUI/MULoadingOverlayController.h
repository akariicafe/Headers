@class MULoadingView, UIView;

@interface MULoadingOverlayController : NSObject {
    MULoadingView *_loadingView;
    UIView *_contentView;
    UIView *_parentView;
}

- (void).cxx_destruct;
- (id)initWithParentView:(id)a0 contentView:(id)a1;
- (void)attachLoadingOverlay;
- (void)removeLoadingOverlayAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateLayoutForBoundsChange;

@end
