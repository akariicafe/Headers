@class UIWindowScene, NSMutableDictionary, UIVisualEffectView, NSString, UIView;
@protocol CKMacToolbarDelegate, CKMacToolbarItemProvider;

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
@property (weak, nonatomic) id<CKMacToolbarDelegate> delegate;
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

+ (id)defaultSecondaryItemIdentifiers;
+ (id)primaryItemIdentifiersFullWindow;
+ (id)primaryItemIdentifiersStandaloneWindow;

- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (long long)_providerTypeForItemIdentifier:(id)a0;
- (id)_cachedVirtualViewForProviderType:(long long)a0;
- (double)_getPreferredHeightForProviderType:(long long)a0 withDefaultHeight:(double)a1;
- (id)_providerForType:(long long)a0;
- (long long)_providerTypeForPointInsideVirtualView:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_setVirtualView:(id)a0 forProviderType:(long long)a1;
- (BOOL)_shouldDisAllowTouchesToPassForProviderType:(long long)a0;
- (void)_sizeMetricsDidChange;
- (void)_updateBackgroundViewsRefreshingViewHeights:(BOOL)a0;
- (BOOL)_updateFrameWithPreferredHeightsForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateVirtualViewForProviderType:(long long)a0;
- (id)_virtualBackgroundViewForProviderType:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForItemWithIdentifier:(id)a0;
- (id)initWithScene:(id)a0 connectingToSession:(id)a1 inStandaloneWindow:(BOOL)a2;
- (BOOL)macToolbarView:(id)a0 shouldAllowTouchesForPoint:(struct CGPoint { double x0; double x1; })a1 andEvent:(id)a2;
- (void)reloadToolbarItems;
- (void)removeItemProvider:(id)a0;
- (void)removeItemProviders;
- (void)removeToolbarItems;
- (void)removeVirtualViewForProvider:(id)a0;
- (BOOL)reparentToolbarItemsForProvider:(id)a0;
- (void)updateVirtualViewForProvider:(id)a0;
- (void)updateWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
