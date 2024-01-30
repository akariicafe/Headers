@class WFCompactDialogAction, WFDialogRequest, NSString, WFInteractionCardProgressViewController, WFInteractionCardViewController;

@interface WFInteractionDialogViewController : WFCompactDialogViewController <WFInteractionCardViewControllerDelegate>

@property (retain, nonatomic) WFInteractionCardViewController *cardViewController;
@property (retain, nonatomic) WFInteractionCardProgressViewController *progressViewController;
@property (retain, nonatomic) WFCompactDialogAction *confirmAction;
@property (retain, nonatomic) WFDialogRequest *followUpRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)allowsInteractiveDismiss;
- (BOOL)canHandleFollowUpRequest:(id)a0;
- (double)contentHeightForWidth:(double)a0 withMaximumVisibleHeight:(double)a1;
- (void)handleFollowUpRequest:(id)a0;
- (void)interactionCardViewControllerDidInvalidateSize:(id)a0;
- (void)interactionCardViewControllerDidLoad:(id)a0;
- (void)interactionCardViewControllerDidRequestCancel:(id)a0;
- (void)interactionCardViewControllerDidRequestPunchout:(id)a0;
- (BOOL)showCheckmarkOnAppear;
- (void)showProgressWithEvent:(unsigned long long)a0;

@end
