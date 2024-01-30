@class NSString, FigCaptionLayerPrivate;

@interface FigCaptionLayer : FigBaseCALayer <CALayerDelegate> {
    FigCaptionLayerPrivate *_priv;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSublayers;
- (void)setFontName:(const char *)a0;
- (id)init;
- (void)dealloc;
- (void)setCaptionsAvoidanceMargins:(struct FigGeometryMargins { struct FigGeometryDimension { double x0; unsigned int x1; unsigned int x2; } x0; struct FigGeometryDimension { double x0; unsigned int x1; unsigned int x2; } x1; struct FigGeometryDimension { double x0; unsigned int x1; unsigned int x2; } x2; struct FigGeometryDimension { double x0; unsigned int x1; unsigned int x2; } x3; })a0;
- (void)setVideoRelativeToViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)resetCaptions;
- (void)updateDisplay:(struct OpaqueFigCFCaptionRenderer { } *)a0;
- (void)processCaptionCommand:(unsigned int)a0 data:(id)a1;

@end
