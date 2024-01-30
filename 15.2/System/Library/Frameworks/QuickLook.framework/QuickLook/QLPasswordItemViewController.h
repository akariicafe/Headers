@class QLPreviewContext;

@interface QLPasswordItemViewController : QLItemViewController <UIDocumentPasswordViewDelegate> {
    QLPreviewContext *_context;
    id /* block */ _completionBlock;
}

- (void)userDidEnterPassword:(id)a0 forPasswordView:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)invalidate;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canSwipeToDismiss;
- (BOOL)canPinchToDismiss;
- (BOOL)canEnterFullScreen;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (id)passwordView;

@end
