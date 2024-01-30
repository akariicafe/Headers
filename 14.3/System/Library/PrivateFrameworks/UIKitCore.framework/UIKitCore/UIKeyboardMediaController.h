@class NSString, _UIAsyncInvocation, UIView, _UITextDragCaretView, UIViewController;
@protocol UIKeyboardMediaControllerDelegate;

@interface UIKeyboardMediaController : NSObject <UIKeyboardMediaServiceRemoteViewControllerDelegate> {
    UIViewController *_remoteCardViewController;
    _UIAsyncInvocation *_remoteCardViewControllerRequest;
    UIViewController *_recentlyUsedMediaViewController;
    _UIAsyncInvocation *_recentlyUsedMediaViewControllerRequest;
    UIView *_targetViewAwaitingRecents;
    BOOL _hasRequestedRecentlyUsedMediaViewController;
    unsigned long long _viewServiceTerminationCount;
    _UITextDragCaretView *_dropCaret;
}

@property (weak, nonatomic) id<UIKeyboardMediaControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL shouldRetryFetchingRecents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedKeyboardMediaController;

- (void)dismissCard;
- (void)dismissCardIfNeeded;
- (void)showRecentlyUsedMediaInView:(id)a0;
- (void).cxx_destruct;
- (void)_embedRecentlyUsedMediaViewInView:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldPrefetchRemoteView;
- (void)draggedStickerToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_tearDownRemoteViews;
- (void)_didInsertMedia;
- (void)_displayiMessageAppWithID:(id)a0;
- (void)presentCard;
- (void)_didPresentCard;
- (void)_instantiateViewServiceRecentlyUsedMediaWithCompletionHandler:(id /* block */)a0;
- (void)stageStickerWithFileHandle:(id)a0 url:(id)a1 accessibilityLabel:(id)a2;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)pasteImageAtFileHandle:(id)a0;
- (void)dismissCardAnimated;
- (void)prefetchRecentsViewControllerWithCompletion:(id /* block */)a0;
- (void)_instantiateCardFromViewService;
- (void)_keyboardDidChangeFrame:(id)a0;
- (void)requestInsertionPointCompletion:(id /* block */)a0;
- (BOOL)recentsViewWillBeVisible;
- (void)releaseRecentlyUsedMediaViewIfNeeded;

@end
