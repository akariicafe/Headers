@class UIPointerInteraction, NSString, _UISlotView, UIButton, SLAttribution, SLDServiceProxy, UISSlotStyle, SLDHighlightDisambiguationPillEmptySlotContent, NSLayoutConstraint, UIVisualEffectView;

@interface SLHighlightDisambiguationPillView : UIView <SLDServiceProxyDelegate, UIPointerInteractionDelegate>

@property (nonatomic, getter=isRTL) BOOL RTL;
@property (retain, nonatomic) _UISlotView *pillSlotView;
@property (nonatomic) unsigned long long pillVariant;
@property (retain, nonatomic) SLDServiceProxy *pillProxy;
@property (nonatomic) BOOL remoteContentIsLoaded;
@property (retain, nonatomic) SLDHighlightDisambiguationPillEmptySlotContent *placeholderSlotContent;
@property (retain, nonatomic) UISSlotStyle *lastRenderedSlotStyle;
@property (nonatomic) double pillMaxWidth;
@property (retain, nonatomic) UIButton *transcriptButton;
@property (retain, nonatomic) NSLayoutConstraint *transcriptButtonConstraint;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIVisualEffectView *buttonEffectView;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (retain, nonatomic) SLAttribution *attribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)dealloc;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)serviceProxyDidConnect:(id)a0;
- (void)serviceProxyDidDisconnect:(id)a0;
- (id)initWithAttribution:(id)a0;
- (id /* block */)_contentProviderForCurrentConfiguration;
- (void)_macroPillTapped;
- (void)_loadDisambiguationPillSlotView;
- (void)_loadTranscriptButton;
- (id)_layoutConstraintsForIndividualContact;
- (void)_loadBlurView;
- (void)_transcriptButtonTapped:(id)a0;
- (id)_loadButtonWithImageName:(id)a0;
- (void)_presentTranscript;
- (void)_chevronButtonTapped:(id)a0;

@end
