@class NSString, UIKBRenderFactory, UIKBScreenTraits, UIKBTree, NSMutableDictionary, UIKBRenderConfig, UIKeyboardMenuView;

@interface UIKBKeyView : UIView <UIKBCacheableView> {
    struct __CFBoolean { } *m_allowsCaching;
    NSMutableDictionary *_keyLayers;
    int _renderedKeyState;
    struct CGColor { } *_activeBackgroundColor;
    id _activeCompositingFilter;
    BOOL _singleRerender;
    double _cachedBackgroundOpacity;
}

@property (class, readonly) BOOL wantsScreenTraits;

@property (nonatomic) BOOL renderAsMask;
@property (readonly) long long cachedRenderFlags;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } displayInsets;
@property (retain, nonatomic) NSString *cachedTraitsHashString;
@property (nonatomic) unsigned long long cachedAnchorCorner;
@property (nonatomic) unsigned long long cachedShiftState;
@property (nonatomic) long long cachedSelector;
@property (nonatomic) BOOL cachedControlKeyRenderingPreference;
@property (readonly, nonatomic) UIKBTree *keyplane;
@property (readonly, nonatomic) UIKBTree *key;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } drawFrame;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (retain, nonatomic) UIKBRenderFactory *factory;
@property (nonatomic) UIKeyboardMenuView *popupMenu;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } variantFrame;
@property (readonly, nonatomic) UIKBKeyView *contentsKeyView;
@property (readonly, nonatomic) BOOL hasRendered;
@property (nonatomic) double endingTransitionDuration;
@property (retain, nonatomic) UIKBScreenTraits *screenTraits;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) BOOL cacheDeferable;
@property (readonly, nonatomic) double cachedWidth;
@property (readonly, nonatomic) BOOL keepNonPersistent;
@property (readonly, nonatomic) long long assetIdiom;
@property (readonly, nonatomic) long long cacheDeferPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawContentsOfRenderers:(id)a0;
- (id)cacheKeysForRenderFlags:(id)a0;
- (void)prepareForDisplay;
- (void)displayLayer:(id)a0;
- (void)dimKeys:(id)a0;
- (void)configureBackdropView:(id)a0 forRenderConfig:(id)a1;
- (void)updateForKeyplane:(id)a0 key:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)_canDrawContent;
- (unsigned long long)focusableVariantCount;
- (id)layerForRenderFlags:(long long)a0;
- (BOOL)_viewShouldBeOpaque;
- (id)renderFlagsForTraits:(id)a0;
- (BOOL)requiresSublayers;
- (BOOL)allowBackgroundCachingForRenderFlags:(long long)a0;
- (BOOL)_shouldUpdateLayers;
- (id)subTreeHitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)_populateLayer:(id)a0 withContents:(id)a1;
- (id)_generateBackdropMaskImage;
- (void)_applyAppearanceInvocations;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2 screenTraits:(id)a3;
- (long long)didInputSubTree:(id)a0;
- (void)willDisplayModalActionView:(id)a0 withSubTreeKeyView:(id)a1 completion:(id /* block */)a2;
- (long long)imageOrientationForLayer:(id)a0;
- (void)changeBackgroundToEnabled;
- (void)changeBackgroundToActiveIfNecessary;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2;
- (int)textEffectsVisibilityLevel;
- (void)hideKeyCap:(BOOL)a0;
- (void)removeFromSuperview;
- (void)dealloc;

@end
