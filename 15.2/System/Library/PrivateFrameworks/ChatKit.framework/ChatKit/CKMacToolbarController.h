@class UIWindowScene, NSMutableDictionary, UIVisualEffectView, NSString, UIView;
@protocol CKMacToolbarItemProvider;

@interface CKMacToolbarController : UIViewController <CKMacToolbarViewDelegate>

@property (readonly, weak, nonatomic) UIWindowScene *windowScene;
@property (nonatomic) BOOL isInStandaloneWindow;
@property (retain, nonatomic) NSMutableDictionary *toolbarItemCache;
@property (readonly, nonatomic) UIVisualEffectView *primaryVirtualBackgroundView;
@property (readonly, nonatomic) UIVisualEffectView *secondaryVirtualBackgroundView;
@property (nonatomic) double preferredPrimaryHeight;
@property (nonatomic) double preferredSecondaryHeight;
@property (weak, nonatomic) UIView *primaryProvidedVirtualView;
@property (weak, nonatomic) UIView *secondaryProvidedVirtualView;
@property (readonly, weak, nonatomic) NSString *sceneSessionIdentifier;
@property (retain, nonatomic) id<CKMacToolbarItemProvider> primaryItemProvider;
@property (retain, nonatomic) id<CKMacToolbarItemProvider> secondaryItemProvider;
@property (nonatomic) double splitViewDividerXPosition;
@property (nonatomic) BOOL shouldDrawPrimaryBlur;
@property (nonatomic) BOOL shouldDrawSecondaryBlur;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)primaryItemIdentifiersFullWindow;
+ (id)primaryItemIdentifiersStandaloneWindow;
+ (id)defaultSecondaryItemIdentifiers;

- (void)updateWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadToolbarItems;
- (void)updateVirtualViewForProvider:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)_updateVirtualViewForProviderType:(long long)a0;
- (void)_updateBackgroundViewsRefreshingViewHeights:(BOOL)a0;
- (id)_providerForType:(long long)a0;
- (BOOL)_updateFrameWithPreferredHeightsForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_sizeMetricsDidChange;
- (double)_getPreferredHeightForProviderType:(long long)a0 withDefaultHeight:(double)a1;
- (BOOL)reparentToolbarItemsForProvider:(id)a0;
- (id)_cachedVirtualViewForProviderType:(long long)a0;
- (void)_setVirtualView:(id)a0 forProviderType:(long long)a1;
- (id)_virtualBackgroundViewForProviderType:(long long)a0;
- (long long)_providerTypeForPointInsideVirtualView:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)removeToolbarItems;
- (BOOL)_shouldDisAllowTouchesToPassForProviderType:(long long)a0;
- (BOOL)macToolbarView:(id)a0 shouldAllowTouchesForPoint:(struct CGPoint { double x0; double x1; })a1 andEvent:(id)a2;
- (void)removeVirtualViewForProvider:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForItemWithIdentifier:(id)a0;
- (long long)_providerTypeForItemIdentifier:(id)a0;
- (void)loadView;
- (void)removeItemProviders;
- (void)removeItemProvider:(id)a0;
- (void).cxx_destruct;
- (id)initWithScene:(id)a0 connectingToSession:(id)a1 inStandaloneWindow:(BOOL)a2;
- (BOOL)__im_ff_isExpanseEnabled;

@end
