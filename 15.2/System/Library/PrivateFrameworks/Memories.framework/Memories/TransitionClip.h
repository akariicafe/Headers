@class NSString, NSDictionary;

@interface TransitionClip : KonaClip

@property (retain, nonatomic) NSString *transitionName;
@property (nonatomic) int transitionDirection;
@property (readonly, nonatomic) int overlapType;
@property (nonatomic) int type;
@property (nonatomic) BOOL forcedNoOverlap;
@property (nonatomic) int audioEnabledType;
@property (nonatomic) float effectRangeBias;
@property (copy, nonatomic) NSDictionary *transitionEffectSettings;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } effectRange;

+ (int)overlapTypeForName:(id)a0;

- (BOOL)audioEnabled;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)clipType;
- (int)transitionEatLeft;
- (int)transitionEatRight;
- (int)biasedDuration;
- (id)plistRepresentationFromProject:(id)a0;
- (void)setContentsFromPlist:(id)a0 inProject:(id)a1;
- (BOOL)overlapIsCurrentlyForced;
- (void)setTransitionEatLeft:(int)a0;
- (void)setTransitionEatRight:(int)a0;
- (int)biasedStartOffset;
- (id)transitionIDFromName:(id)a0;

@end
