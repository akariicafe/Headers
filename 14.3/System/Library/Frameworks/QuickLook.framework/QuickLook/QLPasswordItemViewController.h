@class QLPreviewContext;

@interface QLPasswordItemViewController : QLItemViewController <UIDocumentPasswordViewDelegate> {
    QLPreviewContext *_context;
    id /* block */ _completionBlock;
}

- (void).cxx_destruct;
- (id)passwordView;
- (void)loadView;
- (void)userDidEnterPassword:(id)a0 forPasswordView:(id)a1;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canSwipeToDismiss;
- (BOOL)canPinchToDismiss;
- (BOOL)canEnterFullScreen;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (void)invalidate;

@end
