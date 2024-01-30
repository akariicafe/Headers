@class ICAttachment, UIViewController, NSString, MURemoteViewController, MarkupViewController;

@interface ICMarkupPresenter : NSObject <ICMarkupDismissalDelegate>

@property (retain) ICAttachment *attachment;
@property (retain, nonatomic) MURemoteViewController *markupRemoteViewController;
@property (retain, nonatomic) MarkupViewController *markupViewController;
@property (weak) UIViewController *presentingViewController;
@property (nonatomic) unsigned long long inkStyle;
@property (copy, nonatomic) id /* block */ frameBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ startPresentBlock;
@property (copy, nonatomic) id /* block */ dismissCompletionBlock;
@property (nonatomic) BOOL markupWasDismissedByUserInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cleanupMarkup;
+ (void)markupAttachment:(id)a0 fromView:(id)a1 presentingViewController:(id)a2 inkStyle:(unsigned long long)a3 frameBlock:(id /* block */)a4 startPresentBlock:(id /* block */)a5 completionBlock:(id /* block */)a6 dismissCompletionBlock:(id /* block */)a7;

- (void).cxx_destruct;
- (void)dismissMarkupViewController;
- (void)handleReturnedURL:(id)a0;
- (void)markupCancelAction:(id)a0;
- (void)markupDoneAction:(id)a0;
- (void)markupViewWillDissappear;
- (void)presentMarkupFromView:(id)a0;
- (void)presentMarkupUsingExtensionFromView:(id)a0;
- (void)presentMarkupViewControllerFromView:(id)a0;
- (void)saveChangesAndDismiss;

@end
