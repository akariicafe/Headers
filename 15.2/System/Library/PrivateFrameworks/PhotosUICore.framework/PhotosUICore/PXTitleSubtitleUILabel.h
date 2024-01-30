@class PXTitleSubtitleLabelSpec, NSArray, NSString, CALayer, PXTitleSubtitleCALayerPromise;

@interface PXTitleSubtitleUILabel : UIView <PXChangeObserver> {
    BOOL _needsUpdateLayerPromise;
}

@property (retain, nonatomic, setter=_setLayerPromise:) PXTitleSubtitleCALayerPromise *_layerPromise;
@property (retain, nonatomic, setter=_setContentLayer:) CALayer *_contentLayer;
@property (nonatomic) BOOL diagnosticsEnabled;
@property (readonly, nonatomic) NSArray *diagnosticsRenderedLines;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) PXTitleSubtitleLabelSpec *spec;
@property (nonatomic) long long typesettingMode;
@property (nonatomic) BOOL rendersTextAsynchronously;
@property (nonatomic) BOOL shouldRasterizeTextLayer;
@property (readonly, nonatomic) double lastBaseline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateContentLayer;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithCoder:(id)a0;
- (void)_PXTitleSubtitleUILabelCommonInitialization;
- (void)_handleChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_invalidateLayerPromise;
- (void)_updateLayerPromiseIfNeeded;

@end
