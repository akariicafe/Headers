@class NSArray, NSString, PXTitleSubtitleLabelSpec;

@interface PXTitleSubtitleCALayerPromise : PXCALayerPromise <PXMutableTitleSubtitleCALayerPromise, CALayerDelegate>

@property (readonly, nonatomic) double _textScaleFactor;
@property (nonatomic) BOOL diagnosticsEnabled;
@property (readonly, copy, nonatomic) NSArray *diagnosticsRenderedLines;
@property (readonly, copy, nonatomic) NSString *titleText;
@property (readonly, copy, nonatomic) NSString *subtitleText;
@property (readonly, nonatomic) PXTitleSubtitleLabelSpec *spec;
@property (readonly, nonatomic) long long typesettingMode;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layerContentBounds;
@property (readonly, nonatomic) double layerLastBaseline;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) double contentsScale;
@property (nonatomic) BOOL rendersAsynchronously;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (void)setTypesettingMode:(long long)a0;
- (void)drawLayerContentInContext:(struct CGContext { } *)a0;
- (void)setTitleText:(id)a0;
- (id)_linesToRenderWithContext:(struct CGContext { } *)a0;
- (id)_stringByReplacingNonbreakableWhitespaceToAllowLineWrapping:(id)a0 maxWidth:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setSubtitleText:(id)a0;
- (void)setSpec:(id)a0;
- (id)_attributedStringForLabelWithText:(id)a0 spec:(id)a1;
- (id)createCustomLayer;

@end
