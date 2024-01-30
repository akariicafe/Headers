@class TSUImage;

@interface TSDButtonKnob : TSDKnob

@property (retain, nonatomic) TSUImage *image;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (void)dealloc;
- (id)knobImage;
- (id)initWithImage:(id)a0 tag:(unsigned long long)a1 onRep:(id)a2;
- (id)initWithType:(int)a0 position:(struct CGPoint { double x0; double x1; })a1 radius:(double)a2 tag:(unsigned long long)a3 onRep:(id)a4;
- (BOOL)isHitByUnscaledPoint:(struct CGPoint { double x0; double x1; })a0 andRep:(id)a1 returningDistance:(double *)a2;
- (void)p_updateLayerImage;

@end
