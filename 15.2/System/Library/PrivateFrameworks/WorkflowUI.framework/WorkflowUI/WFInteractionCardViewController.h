@class INInteraction, UIActivityIndicatorView, NSString, CRKCardPresentation, WFCompactUnlockService;
@protocol CRKCardViewControllerDelegate, WFInteractionCardViewControllerDelegate;

@interface WFInteractionCardViewController : UIViewController <CRKCardPresentationDelegate>

@property (retain, nonatomic) CRKCardPresentation *cardPresentation;
@property (weak, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (readonly, nonatomic) WFCompactUnlockService *unlockService;
@property (readonly, nonatomic) INInteraction *interaction;
@property (weak, nonatomic) id<WFInteractionCardViewControllerDelegate> delegate;
@property (readonly, nonatomic) id<CRKCardViewControllerDelegate> cardViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)cardViewController;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithInteraction:(id)a0;
- (double)contentHeightForWidth:(double)a0;
- (void)updateWithInteraction:(id)a0;
- (void)cardViewControllerDidLoad:(id)a0;
- (void)cardViewControllerBoundsDidChange:(id)a0;
- (id)cardRequestForInteraction:(id)a0;
- (void)updateCardViewSize;
- (void)buttonOverlayWasTouchedUpInside:(id)a0;
- (void)buttonOverlayWasTouchedUpOutside:(id)a0;
- (void)buttonOverlayWasTouchedDown:(id)a0;
- (void)buttonOverlayTouchWasCancelled:(id)a0;

@end
