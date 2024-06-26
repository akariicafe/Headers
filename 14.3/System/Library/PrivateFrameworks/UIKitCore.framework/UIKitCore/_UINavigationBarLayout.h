@class _UINavigationBarLargeTitleViewLayout, UILabel, _UIBarBackground, UISearchBar, _UINavigationBarModernPromptView, _UINavigationBarPalette, _UINavigationBarContentViewLayout, _UINavigationBarLargeTitleView, UIView, _UIBarBackgroundLayout, NSString, _UIBarInsertLayoutData, _UINavigationBarContentView, NSMutableArray, NSArray, _UINavigationControllerRefreshControlHost;

@interface _UINavigationBarLayout : NSObject <NSCopying, _UINavigationBarTransitionContextParticipant> {
    _UIBarInsertLayoutData *_promptLayoutData;
    _UIBarInsertLayoutData *_contentLayoutData;
    _UIBarInsertLayoutData *_canvasViewLayoutData;
    _UIBarInsertLayoutData *_largeTitleLayoutData;
    _UIBarInsertLayoutData *_refreshControlLayoutData;
    _UIBarInsertLayoutData *_searchBarLayoutData;
    _UIBarInsertLayoutData *_scopeBarLayoutData;
    _UIBarInsertLayoutData *_bottomPaletteLayoutData;
    NSMutableArray *_priorityOrderedLayout;
    NSMutableArray *_stackingOrderedLayout;
    NSArray *_restingHeights;
}

@property (retain, nonatomic) _UINavigationBarModernPromptView *promptView;
@property (retain, nonatomic) _UINavigationBarContentView *contentView;
@property (retain, nonatomic) UIView *animationContentClippingView;
@property (retain, nonatomic) _UINavigationBarLargeTitleView *largeTitleView;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } largeTitleViewInsets;
@property (retain, nonatomic) _UINavigationBarContentViewLayout *contentViewLayout;
@property (retain, nonatomic) _UINavigationBarLargeTitleViewLayout *largeTitleViewLayout;
@property (retain, nonatomic) _UIBarBackground *backgroundView;
@property (retain, nonatomic) _UIBarBackgroundLayout *compactBackgroundViewLayout;
@property (retain, nonatomic) _UIBarBackgroundLayout *standardBackgroundViewLayout;
@property (nonatomic) double backgroundExtension;
@property (nonatomic) BOOL backgroundCoversContentOnly;
@property (nonatomic) double requestedBackgroundViewAlpha;
@property (nonatomic) BOOL clientWantsBackgroundHidden;
@property (nonatomic) BOOL useManualScrollEdgeAppearance;
@property (nonatomic) double manualScrollEdgeAppearanceProgress;
@property (retain, nonatomic) _UINavigationControllerRefreshControlHost *refreshControlHost;
@property (retain, nonatomic) UILabel *weeTitleLabel;
@property (retain, nonatomic) UIView *canvasView;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (nonatomic) BOOL clientWantsToPreserveSearchBarAcrossTransitions;
@property (nonatomic) BOOL hidesSearchBarWhenScrolling;
@property (nonatomic) long long representedSearchLayoutState;
@property (retain, nonatomic) _UINavigationBarPalette *bottomPalette;
@property (readonly, nonatomic) double largeTitleExposure;
@property (readonly, nonatomic) double chromelessTransitionProgress;
@property (readonly, nonatomic) double computedBackgroundViewAlpha;
@property (nonatomic) long long apiVersion;
@property (nonatomic) struct CGSize { double width; double height; } layoutSize;
@property (readonly, copy, nonatomic) NSArray *restingHeights;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } layoutHeights;
@property (readonly, nonatomic, getter=isVariableHeight) BOOL variableHeight;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } promptViewLayoutFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentViewLayoutFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } refreshControlLayoutFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } largeTitleViewLayoutFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } backgroundViewLayoutFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } weeTitleLabelLayoutFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } canvasViewLayoutFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } searchBarLayoutFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bottomPaletteLayoutFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_refreshControlLayoutFrameWithContentOrCanvasMaxY:(double)a0;
- (void)installViewsInNavigationBar:(id)a0;
- (void)removeViewsNotInLayout:(id)a0;
- (id)init;
- (void)recordFromStateForTransition:(id)a0;
- (void).cxx_destruct;
- (id)layoutForMeasuringWidth:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_updateLargeTitleViewLayoutItem;
- (void)_addLayoutItem:(id)a0;
- (void)layoutViews;
- (void)removeAllViews;
- (void)recordToStateForTransition:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundViewLayoutFrameForcingExpandedHeight:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_searchBarLayoutFrameWithLargeTitleMaxY:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentViewLayoutFrameWithPromptMaxY:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_largeTitleViewLayoutFrameWithContentOrCanvasOrRefreshControlMaxY:(double)a0;
- (void)_updateLayoutParametersForWidth:(double)a0;
- (void)_resolveContentAndCanvasLayouts;
- (void)_updateLayoutOutputs;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_bottomPaletteLayoutFrameWithSearchBarMaxY:(double)a0;
- (void)ensureBackButtonTruncationOccursWithContext:(id)a0;
- (id)initWithLayout:(id)a0;
- (void)_reprioritizeLayoutItem:(id)a0 toPriority:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundViewLayoutFrameWithRelevantMaxY:(double)a0;
- (void)prepareToRecordToState:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_canvasViewLayoutFrameWithPromptMaxY:(double)a0;
- (void)_updateRefreshControlLayoutData;
- (void)interleaveViewsWithLayout:(id)a0 inNavigationBar:(id)a1;
- (void)_removeLayoutItem:(id)a0;
- (void)finalizeStateFromTransition:(id)a0;

@end
