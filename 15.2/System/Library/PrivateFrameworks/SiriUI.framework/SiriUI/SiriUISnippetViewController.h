@class NSUUID, NSString, SAUIConfirmationOptions, NSArray, NSAttributedString, SAUIAppPunchOut, UIView, UICollectionReusableView, UIColor;
@protocol SiriUISnippetViewControllerDelegate, SiriUIReusableView;

@interface SiriUISnippetViewController : SiriUIBaseSnippetViewController {
    UICollectionReusableView<SiriUIReusableView> *_headerView;
    UICollectionReusableView<SiriUIReusableView> *_footerView;
    UICollectionReusableView<SiriUIReusableView> *_transparentHeaderView;
    UICollectionReusableView<SiriUIReusableView> *_transparentFooterView;
}

@property (nonatomic, getter=_willAnimateConfirmation, setter=_setWillAnimateConfirmation:) BOOL willAnimateConfirmation;
@property (nonatomic, getter=_willAnimateCancellation, setter=_setWillAnimateCancellation:) BOOL willAnimateCancellation;
@property (retain, nonatomic, getter=_previousConfirmationOptions, setter=_setPreviousConfirmationOptions:) SAUIConfirmationOptions *previousConfirmationOptions;
@property (nonatomic, getter=_isAwaitingSuccessOrFailureEvent, setter=_setAwaitingSuccessOrFailureEvent:) BOOL awaitingSuccessOrFailureEvent;
@property (nonatomic) BOOL showHeaderChevron;
@property (nonatomic, getter=_isProvisional, setter=_setProvisional:) BOOL provisional;
@property (weak, nonatomic) id<SiriUISnippetViewControllerDelegate> delegate;
@property (retain, nonatomic) NSUUID *instrumentationTurnIdentifier;
@property (copy, nonatomic) UIColor *titleTextColor;
@property (copy, nonatomic) UIColor *titleBackgroundColor;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (copy, nonatomic) NSString *navigationTitle;
@property (copy, nonatomic) NSArray *requestContext;
@property (retain, nonatomic) SAUIAppPunchOut *headerPunchOut;
@property (retain, nonatomic) SAUIAppPunchOut *snippetPunchOut;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } defaultViewInsets;
@property (nonatomic) BOOL wantsConfirmationInsets;
@property (nonatomic) BOOL isFullPadWidth;
@property (nonatomic) BOOL isTransparent;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic, getter=isConfirmed) BOOL confirmed;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic, getter=isUserConfirmationEnabled) BOOL userConfirmationEnabled;
@property (weak, nonatomic) UIView *containingView;
@property (readonly, nonatomic, getter=isVirgin) BOOL virgin;
@property (readonly, nonatomic, getter=isIndicatingActivity) BOOL indicatingActivity;
@property (nonatomic, getter=isNavigating) BOOL navigating;
@property (nonatomic) long long defaultKeylineType;

- (id)_headerView;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_footerView;
- (void).cxx_destruct;
- (void)cancelButtonTapped:(id)a0;
- (id)_privateDelegate;
- (void)viewDidAppear:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)confirmSnippet;
- (void)setManageBackgroundColor:(BOOL)a0;
- (BOOL)usePlatterStyle;
- (Class)footerViewClass;
- (void)configureReusableFooterView:(id)a0;
- (double)desiredHeightForFooterView;
- (BOOL)shouldHidePriorViews;
- (BOOL)removedAfterDialogProgresses;
- (void)_setVirgin:(BOOL)a0;
- (long long)_pinAnimationType;
- (long long)_insertionAnimation;
- (long long)_replacementAnimation;
- (BOOL)logContentsIfApplicable;
- (id)_instrumentationManager;
- (void)willCancel;
- (void)willConfirm;
- (Class)transparentHeaderViewClass;
- (BOOL)hasGeneratedNewInstrumentationTurnForPunchOutAceCommand:(id)a0 url:(id)a1;
- (void)configureReusableTransparentHeaderView:(id)a0;
- (double)desiredHeightForTransparentHeaderView;
- (BOOL)_hasConfirmationOrCancelledInsets;
- (void)siriWillLayoutSnippetView;
- (void)_cellDidLayoutSubviews;
- (void)siriDidLayoutSnippetView;
- (BOOL)_hasConfirmationButtons;
- (double)desiredHeightForHeaderView;
- (double)desiredHeightForTransparentFooterView;
- (id)_transparentHeaderView;
- (id)_transparentFooterView;
- (void)_snippetPunchOutButtonTapped;
- (Class)headerViewClass;
- (id)_createReusableViewIfNeededWithClass:(Class)a0;
- (void)configureReusableHeaderView:(id)a0;
- (void)_cancelTouchesIfNecessary;
- (void)_resumeTouchesIfNecessary;
- (void)configureReusableTransparentFooterView:(id)a0;
- (void)headerTapped:(id)a0;
- (void)confirmButtonTapped:(id)a0;
- (Class)transparentFooterViewClass;
- (void)_instrumentConfirmationOptionInteractionWithPreviousTurn:(id)a0;
- (BOOL)isMemoryIntensive;
- (void)_snippetViewControllerWillBeRemoved;
- (id)alternativeAceCommandsToPerformIfNotExposingViews;
- (BOOL)wantsToManageBackgroundColor;
- (void)setTopKeylineHidden:(BOOL)a0;

@end
