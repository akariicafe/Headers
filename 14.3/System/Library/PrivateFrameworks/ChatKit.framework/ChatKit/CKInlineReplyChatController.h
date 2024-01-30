@class NSString, UIVisualEffectView, CKInlineReplyCollectionViewController, IMMessageItem, CKInlineReplyTransitionContext, UINavigationBarAppearance;
@protocol CKInlineReplyInteractionDelegate;

@interface CKInlineReplyChatController : CKChatController

@property (readonly, nonatomic) CKInlineReplyCollectionViewController *inlineCollectionViewController;
@property (nonatomic) BOOL isInitialLoad;
@property (nonatomic) BOOL isInitialSizing;
@property (nonatomic) BOOL animatingIn;
@property (nonatomic) BOOL animatingOut;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (retain, nonatomic) IMMessageItem *threadOriginator;
@property (retain, nonatomic) CKInlineReplyTransitionContext *transitionContext;
@property (nonatomic) BOOL showNavbarKeyline;
@property (retain, nonatomic) UINavigationBarAppearance *navBarAppearance;
@property (weak, nonatomic) id<CKInlineReplyInteractionDelegate> interactionDelegate;

+ (Class)transcriptControllerClass;
+ (Class)_gradientReferenceViewClass;

- (BOOL)becomeFirstResponder;
- (id)inputAccessoryView;
- (void)messageEntryViewDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (id)inputViewController;
- (void)viewDidLayoutSubviews;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)a0;
- (void)transcriptCollectionViewController:(id)a0 collectionViewContentSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)transcriptCollectionViewControllerRestingStateDidChange:(id)a0;
- (double)transcriptCollectionViewController:(id)a0 targetAlphaForChatItem:(id)a1;
- (void)transcriptCollectionViewController:(id)a0 didScroll:(struct CGPoint { double x0; double x1; })a1;
- (void)setTargetFirstResponder:(long long)a0;
- (void)updateScrollGeometry;
- (void)_updateNavigationUI;
- (long long)targetFirstResponder;
- (void)_restoreDraftState;
- (void)_saveDraftState;
- (void)reloadEntryViewIfNeeded;
- (void)sendMessage:(id)a0 forConversation:(id)a1 newComposition:(BOOL)a2;
- (void)_didSendCompositionInConversation:(id)a0;
- (void)cleanUpDarkEffectStyle;
- (id)_defaultTranscriptNavBarAppearance;
- (void)setUpStyleForDarkEffect;
- (void)sendMessage:(id)a0 forConversation:(id)a1 onService:(id)a2 newComposition:(BOOL)a3;
- (BOOL)isInline;
- (void)dismissController;
- (id)initWithConversation:(id)a0 threadIdentifier:(id)a1 threadOriginator:(id)a2 transitionContext:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })gradientFrameWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)stageAssetArchive:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)reloadInputViews;
- (BOOL)shouldListParticipantsInTitle;
- (void)setIsShowingPreview:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)inputController;
- (void)_animateIn;
- (double)accessoryViewHeight;
- (void)tapGestureRecognized:(id)a0;
- (BOOL)getContainerWidth:(double *)a0 offset:(double *)a1;
- (void)viewDidLoad;
- (void)_animateOut;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetForSendAnimation;
- (id)_visibleGUIDs;
- (id)_imMessageForIMMessageItem:(id)a0;
- (id)_navigationBarAppearanceWithKeyline:(BOOL)a0;
- (void)_requestDismissal;
- (void)_setInitialScrollPositionIfNecessary;
- (struct CGSize { double x0; double x1; })contentSizeForPinning;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })navigationBarInsetsWithoutPalette;
- (double)throwAnimationFinalFrameOffset:(id)a0;
- (double)throwAnimationManagerTopHeaderHeight:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_initialFrameForCollectionView;

@end
