@class NSArray, WFDialogRequest, WFCompactDialogAction;
@protocol WFCompactDialogViewControllerDelegate;

@interface WFCompactDialogViewController : WFCompactPlatterViewController

@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) WFCompactDialogAction *preferredAction;
@property (weak, nonatomic) id<WFCompactDialogViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFDialogRequest *request;

- (id)initWithRequest:(id)a0;
- (id)keyCommands;
- (void).cxx_destruct;
- (void)loadView;
- (void)prepareForPresentationWithCompletionHandler:(id /* block */)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canHandleFollowUpRequest:(id)a0;
- (void)handleFollowUpRequest:(id)a0;
- (void)configureActionGroupWithActions:(id)a0;
- (void)finishWithResponse:(id)a0;
- (void)finishWithResponse:(id)a0 waitForFollowUpRequest:(BOOL)a1;
- (void)doneKeyPressed;

@end
