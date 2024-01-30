@interface MovieClip : KonaClip

+ (id)movieClipWithURL:(id)a0;
+ (id)movieClipWithURL:(id)a0 avAsset:(id)a1;
+ (BOOL)audioEnabledByDefault;

- (float)speed;
- (double)aspectRatio;
- (BOOL)hasVisualCharacteristic;
- (BOOL)isFreezeFrame;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform:(struct CGSize { double x0; double x1; })a0 fillDest:(BOOL)a1;
- (int)clipType;
- (BOOL)hasAudioCharacteristic;
- (int)rawSourceDuration;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform:(struct CGSize { double x0; double x1; })a0 fillDest:(BOOL)a1 applyAnamorphic:(BOOL)a2;
- (void)clearFreezeFrame;
- (void)initializeFromURL:(id)a0 asset:(id)a1;

@end
