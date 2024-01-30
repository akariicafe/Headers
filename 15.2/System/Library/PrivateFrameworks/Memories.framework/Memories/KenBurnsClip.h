@class NSString, PVEffect, KenBurnsInfo;

@interface KenBurnsClip : KonaClip <KonaClipMiroAutoEditAdditions>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PVEffect *kbGeneratorEffect;
@property (retain, nonatomic) KenBurnsInfo *kbInfo;
@property (readonly, nonatomic) PVEffect *kbEffect;
@property (nonatomic) unsigned long long animationStyle;
@property (nonatomic) BOOL originalIsHEIF;

+ (id)kenBurnsClipWithURL:(id)a0;
+ (id)kenBurnsClipWithAssetRepresentation:(id)a0;
+ (id)kenBurnsClipWithMovie:(id)a0;
+ (id)kenBurnsClipWithPath:(id)a0;

- (BOOL)isPortrait;
- (BOOL)isTall;
- (BOOL)isSquare;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (double)aspectRatio;
- (BOOL)isLandscape;
- (BOOL)isPano;
- (BOOL)hasVisualCharacteristic;
- (BOOL)hasPhotoCharacteristic;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform:(struct CGSize { double x0; double x1; })a0 fillDest:(BOOL)a1;
- (int)clipType;
- (double)autoEditShortestDurationWithBlueprint:(id)a0;
- (double)autoEditShortestIdealDurationWithBlueprint:(id)a0;
- (double)autoEditLongestDurationWithBlueprint:(id)a0;
- (double)panoDurationMultiplier;
- (id)animationEffectID;
- (id)plistRepresentationFromProject:(id)a0;
- (void)setContentsFromPlist:(id)a0 inProject:(id)a1;
- (void)validateEffectRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 inProject:(id)a1;
- (double)mediaAspectRatio;

@end
