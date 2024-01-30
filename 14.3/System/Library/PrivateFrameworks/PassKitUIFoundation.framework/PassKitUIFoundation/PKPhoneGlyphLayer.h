@class CALayer, NSString, CAFilter;

@interface PKPhoneGlyphLayer : PKMicaLayer {
    CALayer *_QRCodeLayer;
    CAFilter *_QRCodeColorFilter;
    CALayer *_highlightLayer;
    struct CGPoint { double x; double y; } _highlightOffscreenPosition;
    struct CGPoint { double x; double y; } _highlightOnscreenPosition;
    NSString *_phoneWiggleAnimationKey;
    struct CGColor { } *_primaryColor;
}

@property (nonatomic) BOOL showQRCode;

- (void)layoutSublayers;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setPrimaryColor:(struct CGColor { } *)a0 animated:(BOOL)a1;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 package:(id)a1;
- (void)_restartPhoneWiggleIfNecessary;
- (void)_applyEffectivePrimaryColorToQRCodeAnimated:(BOOL)a0;
- (void)_startPhoneWiggle;
- (void)_endPhoneWiggle;

@end
