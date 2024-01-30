@class _UISlotView, UILabel, UIVisualEffect, UIAction, UIVisualEffectView, UIColor, SLDHighlightPillEmptySlotContent, NSSet, SLHighlight, UIPointerInteraction, SLDServiceProxy, NSString, NSArray, UISSlotStyle, UIImageView;
@protocol SLHighlightPillViewDelegate;

@interface SLHighlightPillView : UIControl <SLDServiceProxyDelegate, UIPointerInteractionDelegate, SLHighlightPillViewCrossPlatform>

@property (nonatomic) BOOL remoteContentIsLoaded;
@property (retain, nonatomic) SLHighlight *highlight;
@property (retain, nonatomic) _UISlotView *slotView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIVisualEffectView *chevronImageView;
@property (retain, nonatomic) UIVisualEffect *chevronEffect;
@property (retain, nonatomic) UIImageView *lastChevronImageView;
@property (retain, nonatomic) UILabel *noAttributionsDebugLabel;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (retain, nonatomic) NSArray *attributionIdentifiers;
@property (retain, nonatomic) SLDHighlightPillEmptySlotContent *placeholderSlotContent;
@property (retain, nonatomic) SLDServiceProxy *pillProxy;
@property (retain, nonatomic) UISSlotStyle *lastRenderedSlotStyle;
@property (nonatomic) unsigned long long variant;
@property (retain, nonatomic) NSSet *excludedContextMenuIdentifiers;
@property (retain, nonatomic) UIAction *replyAction;
@property (retain, nonatomic) UIAction *hideAction;
@property (retain, nonatomic) NSArray *chevronConstraints;
@property (weak, nonatomic) id<SLHighlightPillViewDelegate> delegate;
@property (nonatomic) BOOL remoteRenderingEnabled;
@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL shouldDrawBackgroundBlur;
@property (retain, nonatomic) NSString *blurEffectGroupName;
@property (retain, nonatomic) UIColor *preferredBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openMessagesForMessageGUID:(id)a0;

- (void)layoutSubviews;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)_attributionIdentifiers;
- (void)serviceProxyDidConnect:(id)a0;
- (void)serviceProxyDidDisconnect:(id)a0;
- (id)contextMenuItems;
- (void)excludeContextMenuItemsWithIdentifiers:(id)a0;
- (BOOL)shouldShowContextMenu;
- (void)_setupBlurView;
- (id)initWithHighlight:(id)a0 maxWidth:(double)a1 variant:(unsigned long long)a2 shouldDrawBlur:(BOOL)a3;
- (double)expectedHeightForMaxWidth:(double)a0;
- (id /* block */)_contentProviderForCurrentConfiguration;
- (BOOL)_shouldDisplayDebugPillLabel;
- (void)_setupDebugPillLabel;
- (void)_pillTapped:(id)a0 forEvent:(id)a1;
- (id)_finalSlotStyleForStyle:(id)a0;
- (void)_configureChevronForSlotStyle:(id)a0;
- (id)_uiActionItems;
- (BOOL)shouldShowReplyContextMenu;
- (void)_replyMenuItemSelected;
- (void)_hideMenuItemSelected;
- (id)_targetedPreviewForInteraction:(id)a0;

@end
