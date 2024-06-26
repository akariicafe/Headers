@class UIKBCacheToken, NSMutableDictionary, UIKBRenderFactory, UIKBScreenTraits, UIView, NSString, UIKBRenderingContext, UIKBTree, UIKBRenderConfig, UIKBKeyViewAnimator, UIKeyboardEmojiKeyDisplayController, UIKBKeyView, UIKBSplitImageView;
@protocol UIKBKeyplaneViewDelegate;

@interface UIKBKeyplaneView : UIKBSplitImageView <UIKBCacheableView> {
    UIKBKeyView *_candidateGapView;
    NSMutableDictionary *_subviewIndex;
    NSMutableDictionary *_activeViewIndex;
    NSMutableDictionary *_renderedKeyViews;
    NSMutableDictionary *_delayedDeactivationKeys;
    BOOL _shouldDrawRect;
    UIKBSplitImageView *_keyBorders;
    UIKBSplitImageView *_keyBackgrounds;
    UIKBSplitImageView *_keyCaps;
}

@property (nonatomic) id<UIKBKeyplaneViewDelegate> delegate;
@property (retain, nonatomic) UIKBTree *keyplane;
@property (retain, nonatomic) UIKBTree *defaultKeyplane;
@property (retain, nonatomic) UIKBCacheToken *cacheToken;
@property (retain, nonatomic) UIKBCacheToken *defaultKeyplaneCacheToken;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (retain, nonatomic) UIKBRenderingContext *renderingContext;
@property (retain, nonatomic) UIKBRenderFactory *factory;
@property (retain, nonatomic) UIKBKeyViewAnimator *keyViewAnimator;
@property (retain, nonatomic) UIKeyboardEmojiKeyDisplayController *emojiKeyManager;
@property (retain, nonatomic) UIKBScreenTraits *overrideScreenTraits;
@property (nonatomic) BOOL suppressDrawing;
@property (readonly, nonatomic) UIView *keyplaneMaskView;
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

- (int)stateForKey:(id)a0;
- (void)setState:(int)a0 forKey:(id)a1;
- (BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
- (void)prepareForDisplay;
- (id)cacheKeysForRenderFlags:(id)a0;
- (void)drawContentsOfRenderers:(id)a0;
- (void)deactivateKey:(id)a0 previousState:(int)a1;
- (void)hideKeyCaps:(BOOL)a0;
- (void)_generateRenderingContextIfNeeded;
- (id)viewForKey:(id)a0;
- (BOOL)validForKeyplane:(id)a0 withVisualStyle:(int)a1;
- (void)deactivateKeys;
- (void)willMoveToWindow:(id)a0;
- (void)_updateKeyplaneMaskView;
- (void)dealloc;
- (BOOL)_canDrawContent;
- (void)removeFromSuperview;
- (id)containingViewForKey:(id)a0 withState:(int)a1 wantsActiveOut:(BOOL *)a2;
- (void)retestSelectedVariantIndexForKey:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)purgeKeyViews;
- (BOOL)shouldAnimateOutKeyView:(id)a0;
- (id)_existingVariantsKeyViewForKey:(id)a0;
- (void)cancelDelayedDeactivation;
- (BOOL)_shouldAllowKey:(id)a0;
- (id)viewForKey:(id)a0 state:(int)a1;
- (void)updateFrameForKey:(id)a0;
- (BOOL)useDefaultKeyplaneCacheTokenForRenderFlags:(long long)a0;
- (void)addKeyToDelayedDeactivationSet:(id)a0;
- (void)displayLayer:(id)a0;
- (BOOL)isPasscodeStyle;
- (id)cacheIdentifierForKey:(id)a0 withState:(int)a1;
- (void)deactivateAdaptiveKey:(id)a0;
- (void)setContentScaleFactor:(double)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1;
- (void)layoutSubviews;
- (void)purgeSubviews;
- (void)removeKeyFromDelayedDeactivationSet:(id)a0;
- (void)activateKeys;
- (void)_generateFactoryIfNeeded;
- (id)activeKeyViews;
- (void)dimKeys:(id)a0;
- (void)retestForTouchUpSelectedVariantIndexForKey:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)purgeFactory;
- (BOOL)shouldAnimateInKeyView:(id)a0;
- (void)purgeLayerContents;
- (void)purgeActiveKeyViews;
- (unsigned long long)cornerMaskForKey:(id)a0 recursive:(BOOL)a1;
- (id)cacheIdentifierForKey:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_safeFrameForKeyViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContainer:(id)a1 forKey:(id)a2;

@end
