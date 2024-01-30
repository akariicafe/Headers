@class NSString, UITapGestureRecognizer, APUIShortLookViewController, ATXAction, PLPlatterView, NSLayoutConstraint, UIViewController, CRKCardPresentation;
@protocol CRKCardViewControllerDelegate, APUIActionFeedbackDelegate;

@interface APUIActionPlatterView : UIView <CRKCardViewControllerDelegate, CRKCardPresentationDelegate> {
    ATXAction *_atxAction;
    unsigned long long _displayType;
    UIViewController *_parentViewController;
    APUIShortLookViewController *_shortLookViewController;
    PLPlatterView *_platterView;
    NSLayoutConstraint *_heightConstraint;
    UITapGestureRecognizer *_tapRecognizer;
}

@property (retain, nonatomic) CRKCardPresentation *cardPresentation;
@property (retain, nonatomic) UIViewController *currentCardViewController;
@property (nonatomic) long long displayContext;
@property (weak, nonatomic) id<APUIActionFeedbackDelegate> actionFeedbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<CRKCardViewControllerDelegate> cardViewControllerDelegate;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_tapRecognized:(id)a0;
- (long long)cardPresentation:(id)a0 compareCardSectionViewProviderOne:(id)a1 providerTwo:(id)a2;
- (void)cardViewControllerDidLoad:(id)a0;
- (void)cardViewControllerBoundsDidChange:(id)a0;
- (id)initWithATXAction:(id)a0 parentViewController:(id)a1 displayType:(unsigned long long)a2;
- (id)initWithATXAction:(id)a0 parentViewController:(id)a1;

@end
