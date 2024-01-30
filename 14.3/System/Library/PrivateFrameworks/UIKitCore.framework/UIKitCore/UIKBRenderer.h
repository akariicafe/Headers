@class UIColor, NSString, NSData, UIImage;

@interface UIKBRenderer : NSObject {
    struct CGContext { } *_cachingContext;
    id /* block */ _cachingContextCompletion;
    long long _forceColorFormat;
    UIColor *_singleColor;
    int _colorCount;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _layerPaddedFrame;
@property (nonatomic) double _layerRoundRectRadius;
@property (readonly, nonatomic) struct CGContext { } *context;
@property (readonly, nonatomic) NSData *contextData;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) BOOL opaque;
@property (readonly, nonatomic) long long renderFlags;
@property (readonly, nonatomic) UIImage *renderedImage;
@property (readonly, nonatomic) long long contentColorFormat;
@property (readonly, nonatomic) UIColor *singleColor;
@property (retain, nonatomic) NSString *cacheKey;
@property (nonatomic) BOOL colorDetectMode;
@property (nonatomic) BOOL disableInternalCaching;
@property (readonly, nonatomic) long long assetIdiom;

+ (id)rendererWithContext:(struct CGContext { } *)a0 withSize:(struct CGSize { double x0; double x1; })a1 withScale:(double)a2 opaque:(BOOL)a3 renderFlags:(long long)a4 assetIdiom:(long long)a5;
+ (struct CGContext { } *)imageContextWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 colorFormat:(long long)a2 opaque:(BOOL)a3 invert:(BOOL)a4;
+ (void)clearInternalCaches;

- (void)addPathForSplitGeometry:(id)a0;
- (struct CGPath { } *)_thinShiftGlyphPath;
- (void)forceColorFormat:(long long)a0;
- (void)_completeCacheImageWithTraitsIfNecessary:(id)a0;
- (void)ensureContext;
- (void)drawPath:(struct CGPath { } *)a0 weight:(double)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 color:(struct CGColor { } *)a3 fill:(BOOL)a4;
- (void)addPathForTraits:(id)a0 displayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)pathForRenderGeometry:(id)a0;
- (void)addRoundRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 radius:(double)a1 corners:(unsigned long long)a2;
- (void)dealloc;
- (id)pathForFlickGeometry:(id)a0;
- (void)addPathForFlickGeometry:(id)a0;
- (unsigned long long)renderKeyStringContents:(id)a0 withTraits:(id)a1 status:(unsigned long long)a2;
- (id)pathForFlickPopupGeometries:(id)a0;
- (void)addPathForRenderGeometry:(id)a0;
- (BOOL)_drawSingleSymbol:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withStyle:(id)a2;
- (void)renderNullEffect:(id)a0 withTraits:(id)a1;
- (void)renderDivotEffect:(id)a0 withTraits:(id)a1;
- (void)renderBackgroundTraits:(id)a0 allowCaching:(BOOL)a1;
- (void)_addDetectedColor:(struct CGColor { } *)a0;
- (id)initWithContext:(struct CGContext { } *)a0 withSize:(struct CGSize { double x0; double x1; })a1 withScale:(double)a2 opaque:(BOOL)a3 renderFlags:(long long)a4 assetIdiom:(long long)a5;
- (unsigned long long)renderKeyImageContents:(id)a0 withTraits:(id)a1 status:(unsigned long long)a2;
- (id)description;
- (void)renderKeyContents:(id)a0 withTraits:(id)a1;
- (void)detectColorsForGradient:(id)a0;
- (void)detectColorsForEffect:(id)a0;
- (void)_renderVariantsFromKeyContents:(id)a0 withTraits:(id)a1;
- (id)pathForFlickWidth:(double)a0 height:(double)a1 handleLength:(double)a2 keyMiddle:(struct CGPoint { double x0; double x1; })a3 angle:(double)a4;
- (BOOL)_drawKeyString:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withStyle:(id)a2;
- (void)_drawKeyImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withStyle:(id)a2 force1xImages:(BOOL)a3 flipHorizontally:(BOOL)a4;
- (void)detectColorsForNamedColor:(id)a0;
- (BOOL)loadCachedImageForHashString:(id)a0;
- (id)pathForConcaveCornerWithGeometry:(id)a0;
- (void)renderEdgeEffect:(id)a0 withTraits:(id)a1;
- (struct CGPath { } *)_deleteGlyphPaths;
- (void)renderBackgroundTraits:(id)a0;
- (id)pathForSplitGeometry:(id)a0;
- (void)_drawLinearGradient:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)renderShadowEffect:(id)a0 withTraits:(id)a1;
- (void)addPathForFlickPopupGeometries:(id)a0;
- (BOOL)renderKeyPathContents:(id)a0 withTraits:(id)a1;
- (void)drawShiftPath:(BOOL)a0 weight:(double)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 color:(struct CGColor { } *)a3;
- (struct CGPath { } *)_thickShiftGlyphPath;

@end
