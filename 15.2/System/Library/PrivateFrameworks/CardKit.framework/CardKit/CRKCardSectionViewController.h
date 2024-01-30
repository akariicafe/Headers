@class NSArray, INUIRemoteViewController, NSString, UIView, CRKCardSectionViewConfiguration, CRKOverlayButton;
@protocol CRCardSection, CRKCardSectionViewControllerDelegate, CRKCardSectionView;

@interface CRKCardSectionViewController : UIViewController <CRKCardSectionViewControllingDelegate, SFFeedbackListener, CRKFeedbackDelegate, CRKEventResponding> {
    CRKOverlayButton *_overlayButton;
    BOOL _childVCDesiresInteractivity;
}

@property (retain, nonatomic, getter=_extraCommands, setter=_setExtraCommands:) NSArray *extraCommands;
@property (readonly, nonatomic) INUIRemoteViewController *_remoteViewController;
@property (weak, nonatomic) CRKCardSectionViewConfiguration *viewConfiguration;
@property (weak, nonatomic) id<CRKCardSectionViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView<CRKCardSectionView> *view;
@property (retain, nonatomic) id<CRCardSection> cardSection;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCardSectionViewController;
+ (id)cardSectionClasses;
+ (id)cardSectionViewControllerForCardSection:(id)a0;
+ (id)cardSectionViewControllerForViewConfiguration:(id)a0;
+ (void)_registerWithCardKit;

- (void)cardSectionViewDidInvalidateSize:(id)a0 animate:(BOOL)a1;
- (void)viewDidLoad;
- (void)didEngageCardSection:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (id)_commands;
- (void)loadView;
- (void)presentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)willDismissViewController:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)cardSectionViewDidInvalidateSize:(id)a0;
- (void)cardEventDidOccur:(unsigned long long)a0 withIdentifier:(id)a1 userInfo:(id)a2;
- (void)userDidEngageCardSection:(id)a0 withEngagementFeedback:(id)a1;
- (void)cardViewWillAppearForCard:(id)a0 withAppearanceFeedback:(id)a1;
- (void)cardViewDidAppearForCard:(id)a0 withAppearanceFeedback:(id)a1;
- (void)cardViewDidDisappearForCard:(id)a0 withDisappearanceFeedback:(id)a1;
- (void)cardSectionViewWillAppearForCardSection:(id)a0 withAppearanceFeedback:(id)a1;
- (void)cardSectionViewDidAppearForCardSection:(id)a0 withAppearanceFeedback:(id)a1;
- (void)cardSectionViewDidDisappearForCardSection:(id)a0 withDisappearanceFeedback:(id)a1;
- (void)controllerForCard:(id)a0 didRequestAsyncCard:(id)a1 withAsyncCardRequestFeedback:(id)a2;
- (void)controllerForCard:(id)a0 didReceiveAsyncCard:(id)a1 withAsyncCardReceiptFeedback:(id)a2;
- (void)cardSectionViewDidInvalidateSizeForCardSection:(id)a0;
- (BOOL)shouldHandleEngagement:(id)a0 forCardSection:(id)a1;
- (void)_loadCardSectionView;
- (void)_finishLoadingViewIfNecessary;
- (void)_cancelTouchesIfNecessary;
- (void)_resumeTouchesIfNecessary;
- (BOOL)_shouldRenderButtonOverlay;
- (BOOL)_shouldHideButtonOverlay;
- (id)_preferredPunchoutCommand;
- (id)_destinationPunchout;
- (void)_performAllCommands;
- (BOOL)_checkIfCardSectionIsNull:(id)a0;
- (void)_setupCardSectionButtons;
- (void)_buttonOverlayWasTouchedUpInside:(id)a0;
- (void)_buttonOverlayWasTouchedUpOutside:(id)a0;
- (void)_buttonOverlayWasTouchedDown:(id)a0;
- (void)_buttonOverlayTouchWasCanceled:(id)a0;
- (id)_generateCardSectionViewAppearanceFeedback;
- (BOOL)performCommand:(id)a0 forViewController:(id)a1;
- (id)_initWithCardSection:(id)a0;
- (void)_performCommand:(id)a0;
- (BOOL)_hasCorrespondingSearchUIView;
- (BOOL)_expectsSearchUIView;
- (BOOL)_isLoadedWithIntentsUIView;
- (void)_cardSectionTapped;
- (BOOL)_isIndicatingActivity;
- (id)_backingCardSection;
- (void)_setViewExternally:(id)a0;

@end
