@class NSString, LPVerticalTextStackView, LPCaptionBarPresentationProperties, LPCaptionBarStyle, LPPlayButtonView, LPComponentView, LPCaptionBarAccessoryView, LPInlineMediaPlaybackInformation, LPCaptionBarButtonView;
@protocol LPTextStyleable;

@interface LPCaptionBarView : LPComponentView <CAAnimationDelegate> {
    LPCaptionBarStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
    LPComponentView *_leftIconView;
    LPComponentView *_rightIconView;
    LPPlayButtonView *_playButton;
    LPCaptionBarAccessoryView *_leftAccessoryView;
    LPCaptionBarAccessoryView *_rightAccessoryView;
    LPCaptionBarButtonView *_buttonView;
    LPComponentView<LPTextStyleable> *_aboveTopCaptionView;
    LPComponentView<LPTextStyleable> *_topCaptionView;
    LPComponentView<LPTextStyleable> *_bottomCaptionView;
    LPComponentView<LPTextStyleable> *_belowBottomCaptionView;
    LPVerticalTextStackView *_textStackView;
    LPInlineMediaPlaybackInformation *_inlinePlaybackInformation;
    BOOL _hasEverBuilt;
}

@property (nonatomic) BOOL useProgressSpinner;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textSafeAreaInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateInWithBaseAnimation:(id)a0 currentTime:(double)a1;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithStyle:(id)a0 presentationProperties:(id)a1;
- (void)setPlaybackInformation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_buildViewsForCaptionBarIfNeeded;
- (struct CGSize { double x0; double x1; })_layoutCaptionBarForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;
- (id)button;
- (void)animateOut;
- (void)layoutComponentView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
