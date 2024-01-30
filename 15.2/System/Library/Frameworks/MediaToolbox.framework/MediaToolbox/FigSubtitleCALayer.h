@class NSString;

@interface FigSubtitleCALayer : FigSubtitleBackdropCALayer <CALayerDelegate> {
    struct OpaqueFigSubtitleCALayerInternal { struct OpaqueFigPlayer *x0; id x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGSize { double x0; double x1; } x3; unsigned char x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct FigGeometryMargins { struct FigGeometryDimension { double x0; unsigned int x1; unsigned int x2; } x0; struct FigGeometryDimension { double x0; unsigned int x1; unsigned int x2; } x1; struct FigGeometryDimension { double x0; unsigned int x1; unsigned int x2; } x2; struct FigGeometryDimension { double x0; unsigned int x1; unsigned int x2; } x3; } x6; unsigned char x7; BOOL x8; unsigned char x9; unsigned char x10; id x11; unsigned int x12; struct __CFString *x13; struct OpaqueFigCaptionRendererSession *x14; struct OpaqueFigSubtitleRenderer *x15; struct __CFDictionary *x16; unsigned char x17; struct __CFDictionary *x18; struct __CFArray *x19; struct __CFArray *x20; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x21; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x22; } *layerInternal;
}

@property (nonatomic, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;
@property (copy, nonatomic) NSString *captionRenderingStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultActionForKey:(id)a0;

- (id)actionForKey:(id)a0;
- (void)setViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clear;
- (void)removeAnimationsForKey:(id)a0;
- (id)initWithLayer:(id)a0;
- (void)setPlayer:(struct OpaqueFigPlayer { } *)a0;
- (void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)a0;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)setVideoRelativeToViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleNeedsLayoutNotification;
- (void)_addBoundsAnimation:(id)a0 forKey:(id)a1;
- (void)setCaptionsAvoidanceMargins:(struct FigGeometryMargins { struct FigGeometryDimension { double x0; unsigned int x1; unsigned int x2; } x0; struct FigGeometryDimension { double x0; unsigned int x1; unsigned int x2; } x1; struct FigGeometryDimension { double x0; unsigned int x1; unsigned int x2; } x2; struct FigGeometryDimension { double x0; unsigned int x1; unsigned int x2; } x3; })a0;
- (id)init;
- (void)setSubtitleGravityNonObscuring:(unsigned char)a0;
- (void)dealloc;
- (void)_addPositionAnimation:(id)a0 forKey:(id)a1;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)addAnimations:(id)a0 forKey:(id)a1;
- (void)setVideosize:(struct CGSize { double x0; double x1; })a0;

@end
