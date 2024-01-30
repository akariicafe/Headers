@class NSString, LPVerticalTextStackView, LPCaptionBarPresentationProperties, LPCaptionBarStyle, LPComponentView, LPPlayButtonView, LPCaptionBarAccessoryView, LPInlineMediaPlaybackInformation, NSRegularExpression, LPCaptionBarButtonView;
@protocol LPTextStyleable;

@interface LPCaptionBarView : LPComponentView <CAAnimationDelegate, LPComponentMediaPlayable> {
    LPCaptionBarStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
    LPComponentView *_leftIconView;
    LPComponentView *_rightIconView;
    LPPlayButtonView *_playButton;
    LPCaptionBarAccessoryView *_leftAccessoryView;
    LPCaptionBarAccessoryView *_rightAccessoryView;
    LPCaptionBarButtonView *_buttonView;
    LPComponentView *_leftIconBadgeView;
    LPComponentView *_rightIconBadgeView;
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
@property (copy, nonatomic) NSRegularExpression *emphasizedTextExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)animateOut;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)playable;
- (void).cxx_destruct;
- (id)button;
- (id)initWithHost:(id)a0;
- (void)layoutComponentView;
- (void)animateInWithBaseAnimation:(id)a0 currentTime:(double)a1;
- (id)initWithHost:(id)a0 style:(id)a1 presentationProperties:(id)a2;
- (void)setPlaybackInformation:(id)a0;
- (id)primaryIconView;
- (void)_buildViewsForCaptionBarIfNeeded;
- (struct CGSize { double x0; double x1; })_layoutCaptionBarForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;

@end
