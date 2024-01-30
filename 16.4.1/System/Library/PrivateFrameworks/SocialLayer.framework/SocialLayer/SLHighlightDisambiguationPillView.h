@class UIVisualEffectView, UIPointerInteraction, _UISlotView, NSString, UIButton, SLAttribution, SLDServiceProxy, UISSlotStyle, SLDHighlightDisambiguationPillEmptySlotContent, NSLayoutConstraint, NSObject;
@protocol OS_dispatch_queue;

@interface SLHighlightDisambiguationPillView : UIView <SLDServiceProxyDelegate, UIPointerInteractionDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteRenderingQueue;
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

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)dealloc;
- (void)serviceProxyDidDisconnect:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)serviceProxyDidConnect:(id)a0;
- (void).cxx_destruct;
- (void)_loadDisambiguationPillSlotView;
- (void)_chevronButtonTapped:(id)a0;
- (id /* block */)_contentProviderForCurrentConfiguration;
- (id)_layoutConstraintsForIndividualContact;
- (void)_loadBlurView;
- (id)_loadButtonWithImageName:(id)a0;
- (void)_loadTranscriptButton;
- (void)_macroPillTapped;
- (void)_presentTranscript;
- (void)_transcriptButtonTapped:(id)a0;
- (id)initWithAttribution:(id)a0;

@end
