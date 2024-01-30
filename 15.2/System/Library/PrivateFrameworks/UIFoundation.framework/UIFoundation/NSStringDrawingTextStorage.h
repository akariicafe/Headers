@class NSString, CUIStyleEffectConfiguration, CUICatalog, NSTextContainer, NSConcreteNotifyingMutableAttributedString, NSLayoutManager;

@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate> {
    NSConcreteNotifyingMutableAttributedString *_contents;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    double _baselineDelta;
    struct { unsigned char _typesetterBehavior : 4; unsigned char _needToFlushCache : 1; unsigned char _baselineMode : 1; unsigned char _forceWordWrapping : 1; unsigned char _usesSimpleTextEffects : 1; unsigned char _applicationFrameworkContext : 3; unsigned char _wrappedByCluster : 1; unsigned int _reserved : 20; } _sdflags;
}

@property (retain, nonatomic) CUICatalog *cuiCatalog;
@property (retain, nonatomic) CUIStyleEffectConfiguration *cuiStyleEffects;
@property (nonatomic, getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:) BOOL usesSimpleTextEffects;
@property double defaultTighteningFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)performLayoutOperation:(id /* block */)a0;
+ (BOOL)_hasCustomSettings;
+ (id)stringDrawingTextStorage;
+ (void)_setHasCustomSettings:(BOOL)a0;

- (id)layoutManager;
- (void)fontSetChanged;
- (void)drawTextContainer:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 graphicsContext:(struct CGContext { } *)a3 baselineMode:(BOOL)a4 scrollable:(BOOL)a5 padding:(double)a6;
- (id)textContainer;
- (void)drawTextContainer:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 graphicsContext:(struct CGContext { } *)a2 baselineMode:(BOOL)a3 scrollable:(BOOL)a4 padding:(double)a5;
- (id)string;
- (unsigned long long)length;
- (double)_baselineDelta;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (BOOL)_shouldSetOriginalFontAttribute;
- (void)processEditing;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)addAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)_setBaselineMode:(BOOL)a0;
- (void)_setBaselineDelta:(double)a0;
- (id)textContainerForAttributedString:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1 lineFragmentPadding:(double)a2;
- (BOOL)_baselineMode;
- (void)_setApplicationFrameworkContext:(long long)a0;
- (BOOL)_wrappedByCluster;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (BOOL)_isStringDrawingTextStorage;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (long long)typesetterBehavior;
- (id)init;
- (long long)_applicationFrameworkContext;
- (struct CGPoint { double x0; double x1; })defaultTextContainerOriginForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setGraphicsContext:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })usedRectForTextContainer:(id)a0;
- (id)textContainerForAttributedString:(id)a0;
- (void)dealloc;
- (void)_setWrappedByCluster:(BOOL)a0;
- (BOOL)_forceWordWrapping;
- (void)_setForceWordWrapping:(BOOL)a0;

@end
