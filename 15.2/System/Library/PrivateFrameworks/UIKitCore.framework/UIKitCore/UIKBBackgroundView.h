@class NSString, UITextInputTraits, UIKBRenderConfig, UIKBTree, NSObject, UIKBScreenTraits;

@interface UIKBBackgroundView : UIKBSplitImageView <UIKBCacheableView> {
    UIKBTree *_keyplane;
    UITextInputTraits *_inputTraits;
    int _visualStyle;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _splitLeftRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _splitLeftCacheRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _splitRightRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _splitRightCacheRect;
    unsigned long long _topCorners;
    BOOL _isSplit;
    BOOL _centerFilled;
    BOOL _hasCandidateKeys;
}

@property (retain, nonatomic) NSObject *geometryCacheKey;
@property (retain, nonatomic) UIKBScreenTraits *screenTraits;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
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
- (void)displayLayer:(id)a0;
- (BOOL)_canDrawContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshStyleForKeyplane:(id)a0 inputTraits:(id)a1;
- (void)dealloc;

@end
