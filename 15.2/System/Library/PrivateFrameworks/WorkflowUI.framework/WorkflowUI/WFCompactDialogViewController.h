@class NSArray, WFDialogRequest, WFCompactDialogAction;
@protocol WFCompactDialogViewControllerDelegate;

@interface WFCompactDialogViewController : WFCompactPlatterViewController

@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) WFCompactDialogAction *preferredAction;
@property (weak, nonatomic) id<WFCompactDialogViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFDialogRequest *request;

- (id)initWithRequest:(id)a0;
- (id)keyCommands;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)prepareForPresentationWithCompletionHandler:(id /* block */)a0;
- (void)platterInteractionRequestedDismissal;
- (BOOL)canHandleFollowUpRequest:(id)a0;
- (void)handleFollowUpRequest:(id)a0;
- (void)configureActionGroupWithActions:(id)a0;
- (void)finishWithResponse:(id)a0;
- (void)finishWithResponse:(id)a0 waitForFollowUpRequest:(BOOL)a1;
- (id)responseForInteractiveDismissal;
- (void)doneKeyPressed;

@end
