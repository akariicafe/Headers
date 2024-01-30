@class PVEffect;

@interface MotionGeneratorClip : KonaClip

@property (retain, nonatomic) PVEffect *generatorEffect;

- (int)maxDuration;
- (void).cxx_destruct;
- (BOOL)hasVisualCharacteristic;
- (BOOL)isFreezeFrame;
- (int)clipType;
- (BOOL)hasAudioCharacteristic;
- (id)plistRepresentationFromProject:(id)a0;
- (void)setContentsFromPlist:(id)a0 inProject:(id)a1;
- (void)validateEffectRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 inProject:(id)a1;

@end
