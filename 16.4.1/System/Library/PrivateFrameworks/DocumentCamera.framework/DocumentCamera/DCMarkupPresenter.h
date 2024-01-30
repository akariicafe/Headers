@class UIViewController, ICDocCamDocumentInfo, MURemoteViewController, ICDocCamImageCache, MarkupViewController;

@interface DCMarkupPresenter : NSObject

@property (retain) ICDocCamDocumentInfo *documentInfo;
@property (retain) ICDocCamImageCache *imageCache;
@property (retain, nonatomic) MURemoteViewController *markupRemoteViewController;
@property (retain, nonatomic) MarkupViewController *markupViewController;
@property (weak) UIViewController *presentingViewController;
@property (nonatomic) unsigned long long inkStyle;
@property (copy, nonatomic) id /* block */ frameBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ startPresentBlock;
@property (copy, nonatomic) id /* block */ dismissCompletionBlock;

+ (void)cleanupMarkup;
+ (void)markupDocumentInfo:(id)a0 imageCache:(id)a1 fromView:(id)a2 presentingViewController:(id)a3 inkStyle:(unsigned long long)a4 frameBlock:(id /* block */)a5 startPresentBlock:(id /* block */)a6 completionBlock:(id /* block */)a7 dismissCompletionBlock:(id /* block */)a8;

- (void).cxx_destruct;
- (void)dismissMarkupViewController;
- (void)handleReturnedURL:(id)a0;
- (void)markupCancelAction:(id)a0;
- (void)markupDoneAction:(id)a0;
- (void)presentMarkupFromView:(id)a0;
- (void)presentMarkupViewControllerFromView:(id)a0;

@end
