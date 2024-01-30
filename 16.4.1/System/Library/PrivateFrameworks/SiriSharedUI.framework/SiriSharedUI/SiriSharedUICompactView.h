@class NSLayoutConstraint, NSArray, SiriSharedUIContentPlatterView, UIView, SiriSharedUIRectSet;
@protocol SiriSharedUICompactResultViewHosting, SiriSharedUICompactViewDelegate, SiriSharedUIViewStackContainerHosting, SiriSharedUICompactConversationViewHosting;

@interface SiriSharedUICompactView : SiriSharedUIStandardView <SiriSharedUICompactConversationViewDelegate, SiriSharedUICompactResultViewDelegate, SiriSharedUIStackableContentActionHandling, SiriSharedUIAccessibilityFocusing> {
    id<SiriSharedUICompactConversationViewHosting> _conversationView;
    id<SiriSharedUICompactResultViewHosting> _resultView;
    UIView *_textRequestView;
    NSLayoutConstraint *_textRequestViewBottomConstraint;
    NSLayoutConstraint *_conversationExpansionConstraint;
    UIView *_fullScreenEffectContainerView;
}

@property (copy, nonatomic, getter=_transitionalContentViewFrames, setter=_setTransitionalContentViewFrames:) SiriSharedUIRectSet *transitionalContentViewFrames;
@property (readonly, nonatomic) id<SiriSharedUIViewStackContainerHosting> viewStackContainer;
@property (weak, nonatomic) id<SiriSharedUICompactViewDelegate> delegate;
@property (readonly, nonatomic) SiriSharedUIContentPlatterView *snippetView;
@property (copy, nonatomic) NSArray *serverUtterances;
@property (copy, nonatomic) NSArray *conversationSnippetViews;
@property (readonly, nonatomic) id<SiriSharedUICompactConversationViewHosting> conversationView;
@property (readonly, nonatomic) id<SiriSharedUICompactResultViewHosting> resultView;
@property (nonatomic) BOOL hidesTextRequestView;
@property (nonatomic) double bottomContentInset;
@property (readonly, nonatomic) double effectiveBottomContentInset;

- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)alwaysShowRecognizedSpeech;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_analytics;
- (void)setResultView:(id)a0;
- (void)contentDidUpdate:(BOOL)a0;
- (void)setSpeechRecognitionHypothesis:(id)a0;
- (void)_clearTransitionalContentViewFrameSnapshots;
- (id)_instrumentationManager;
- (void)_snapshotContentViewFramesForTransition;
- (void)_textRequestViewVisibilityDidChange;
- (void)_updateBottomPadding;
- (void)_updateBottomPaddingAnimatedWithContext:(id)a0;
- (void)_updateBottomPaddingAnimatedWithContext:(id)a0 alongsideAnimations:(id /* block */)a1;
- (void)_updateExpansionConstraints:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForResultView:(id)a0;
- (void)conversationView:(id)a0 didUpdateHeightDuringExpansionTransition:(double)a1 didCompleteGesture:(BOOL)a2;
- (void)conversationView:(id)a0 viewDidAppearForAceObject:(id)a1;
- (void)conversationView:(id)a0 viewDidDisappearForAceObject:(id)a1;
- (void)conversationViewContentScrolled:(id)a0 toContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })conversationViewContentSize;
- (void)conversationViewDidBeginExpandTransition:(id)a0;
- (void)conversationViewDidResetExpandedState:(id)a0;
- (void)conversationViewDidTransitionToCollapsedState:(id)a0;
- (void)conversationViewDidTransitionToExpandedState:(id)a0;
- (void)conversationViewDidUpdatePresentedContentHeight:(id)a0;
- (BOOL)conversationViewShouldAlwaysShowSpeechFeedback:(id)a0;
- (double)expectedExpandedHeightForConversationView:(id)a0;
- (BOOL)hasContentAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundBlurView:(id)a1 navigationView:(id)a2 resultView:(id)a3 conversationView:(id)a4 textRequestView:(id)a5 viewStackContainer:(id)a6;
- (double)maximumHeightForConversationView:(id)a0;
- (double)maximumHeightForResultView:(id)a0;
- (id)parserSpeakableObjectProviderForConversationView:(id)a0;
- (void)prepareForUpdatesWithDiff:(unsigned long long)a0 updateBlock:(id /* block */)a1;
- (void)resultViewContentDidLoad:(id)a0;
- (void)resultViewContentDidScroll:(id)a0;
- (void)resultViewContentScrolled:(id)a0 toContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })resultViewContentSize;
- (void)resultViewDarkenedContentWasTapped:(id)a0;
- (void)setBottomContentInset:(double)a0 animatedWithContext:(id)a1;
- (void)setConversationView:(id)a0;
- (void)setConversationViewHidden:(BOOL)a0;
- (void)setResultViewAlpha:(double)a0;
- (void)setShowSnippetView:(BOOL)a0 animated:(BOOL)a1;
- (void)setSnippetView:(id)a0 completion:(id /* block */)a1;
- (void)showFullScreenEffect:(id)a0;
- (void)snippetLayoutDidUpdateForView:(id)a0;
- (void)tapToEditRequestedFromView:(id)a0;

@end
