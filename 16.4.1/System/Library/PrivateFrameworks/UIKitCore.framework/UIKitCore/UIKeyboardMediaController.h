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

- (void)requestInsertionPointCompletion:(id /* block */)a0;
- (void)prefetchRecentsViewControllerWithCompletion:(id /* block */)a0;
- (void)_displayiMessageAppWithID:(id)a0;
- (void)_keyboardDidChangeFrame:(id)a0;
- (BOOL)recentsViewWillBeVisible;
- (void)_instantiateViewServiceRecentlyUsedMediaWithCompletionHandler:(id /* block */)a0;
- (void)_didPresentCard;
- (void)_didInsertMedia;
- (void)dismissCardAnimated;
- (void)presentCard;
- (void)_instantiateCardFromViewService;
- (void)showRecentlyUsedMediaInView:(id)a0;
- (void)dismissCard;
- (BOOL)shouldPrefetchRemoteView;
- (void)pasteImageAtFileHandle:(id)a0;
- (void)releaseRecentlyUsedMediaViewIfNeeded;
- (void)_tearDownRemoteViews;
- (void)_embedRecentlyUsedMediaViewInView:(id)a0 animated:(BOOL)a1;
- (void)draggedStickerToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)dismissCardIfNeeded;
- (void)stageStickerWithFileHandle:(id)a0 url:(id)a1 accessibilityLabel:(id)a2;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
