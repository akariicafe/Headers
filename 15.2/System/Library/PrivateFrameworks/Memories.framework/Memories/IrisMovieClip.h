@class PVEffect, KenBurnsInfo;

@interface IrisMovieClip : MovieClip

@property (nonatomic, getter=isFront) BOOL front;
@property (retain, nonatomic) KenBurnsInfo *kenBurnsInfo;
@property (retain, nonatomic) PVEffect *kenBurnsEffect;

+ (id)irisMovieClipWithURL:(id)a0 asset:(id)a1 front:(BOOL)a2;

- (int)maxDuration;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform:(struct CGSize { double x0; double x1; })a0 fillDest:(BOOL)a1;
- (void)validateEffectRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 inProject:(id)a1;

@end
