@class KenBurnsClip, NSString;

@interface CompoundClip : KenBurnsClip <CompoundClipInformation>

@property (retain, nonatomic) KenBurnsClip *kenBurnsClip;
@property (nonatomic) double minimumPhotoDuration;
@property (nonatomic) double idealPhotoDuration;
@property (nonatomic) double maximumPhotoDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)containedClips;
- (id)initWithKenBurnsClip:(id)a0;
- (void)turnOffKenBurnsForClips:(id)a0;
- (id)addTransitionsWithName:(id)a0 transitionDuration:(int)a1 transitionEffectProperties:(id)a2 betweenClips:(id)a3;
- (void)takePropertiesFromKenBurnsClip:(id)a0;
- (BOOL)expandsEditList;
- (id)addTransitionsWithName:(id)a0 transitionDuration:(int)a1 betweenClips:(id)a2;

@end
