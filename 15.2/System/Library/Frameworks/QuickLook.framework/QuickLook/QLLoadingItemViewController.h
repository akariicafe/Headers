@class UILabel, UIActivityIndicatorView;

@interface QLLoadingItemViewController : QLItemViewController {
    UILabel *_loadingLabel;
    UIActivityIndicatorView *_spinner;
}

- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canSwipeToDismiss;
- (BOOL)canPinchToDismiss;
- (BOOL)canEnterFullScreen;
- (void)previewBecameFullScreen:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateLoadingLabel;

@end
