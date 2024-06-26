@class NSArray, NSString, NSMutableDictionary, NSDictionary, NSMutableArray, SCNOrderedDictionary;

@interface SCNMorpher : NSObject <SCNAnimatable, NSSecureCoding> {
    struct __C3DMorph { } *_morpher;
    unsigned char _isPresentationInstance : 1;
    long long _calculationMode;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSArray *_targets;
    NSMutableArray *_weights;
    NSArray *_topLevelAndInBetweenTargets;
    NSArray *_inBetweenCounts;
    NSArray *_inBetweenInfluenceWeights;
    NSDictionary *_targetNameToIndexes;
    NSString *_name;
    BOOL _unifyNormal;
    BOOL _useSparseTargets;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *targets;
@property (retain, nonatomic) NSArray *weights;
@property (nonatomic) long long calculationMode;
@property BOOL unifiesNormals;
@property (readonly) NSArray *animationKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)morpher;
+ (id)morpherWithMorphRef:(struct __C3DMorph { } *)a0;
+ (id)weightIndexStringForIndex:(long long)a0;
+ (Class)SCNUID_classForElementOfArray:(id)a0;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)setName:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (id)scene;
- (id)copy;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)removeAllAnimations;
- (void)addAnimation:(id)a0;
- (id)name;
- (id)animationForKey:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)removeAnimationForKey:(id)a0;
- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (long long)_weightIndexForTargetNamed:(id)a0;
- (void)setWeight:(double)a0 forTargetAtIndex:(unsigned long long)a1;
- (id)targetsAndInBetween;
- (id)inBetweenTargetsForTargetAtIndex:(unsigned long long)a0;
- (id)inBetweenWeightsForTargetAtIndex:(unsigned long long)a0;
- (double)weightForTargetAtIndex:(unsigned long long)a0;
- (void)setShouldClearCPUDataAfterUpload:(BOOL)a0;
- (void)setTargets:(id)a0 withInBetweenTargetCounts:(id)a1 inBetweenWeights:(id)a2;
- (id)animationPlayerForKey:(id)a0;
- (void)removeAnimationForKey:(id)a0 blendOutDuration:(double)a1;
- (void)setWeightIncrementalThreshold:(float)a0;
- (void)removeAllBindings;
- (void)bindAnimatablePath:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (double)weightForTargetNamed:(id)a0;
- (void)setWeight:(double)a0 forTargetNamed:(id)a1;
- (const void *)__CFObject;
- (struct __C3DScene { } *)sceneRef;
- (void)addAnimationPlayer:(id)a0 forKey:(id)a1;
- (id)_scnAnimationForKey:(id)a0;
- (struct __C3DAnimationManager { } *)animationManager;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1 pausedByNode:(BOOL)a2;
- (void)removeAnimationForKey:(id)a0 fadeOutDuration:(double)a1;
- (void)pauseAnimationForKey:(id)a0;
- (void)resumeAnimationForKey:(id)a0;
- (void)setSpeed:(double)a0 forAnimationKey:(id)a1;
- (BOOL)isAnimationForKeyPaused:(id)a0;
- (BOOL)__removeAnimation:(id)a0 forKey:(id)a1;
- (void)_syncObjCAnimations;
- (void)_copyAnimationsFrom:(id)a0;
- (id)_scnBindings;
- (void)unbindAnimatablePath:(id)a0;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (BOOL)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (void)_syncObjCModel;
- (void)_syncEntityObjCModel;
- (struct __C3DMorph { } *)morphRef;
- (id)initWithMorphRef:(struct __C3DMorph { } *)a0;
- (void)clearInBetweens;
- (id)initPresentationMorpherWithMorphRef:(struct __C3DMorph { } *)a0;
- (id)presentationMorpher;
- (void)_customEncodingOfSCNMorpher:(id)a0;
- (void)_customDecodingOfSCNMorpher:(id)a0;
- (void)_didDecodeSCNMorpher:(id)a0;
- (id)channelTargetCounts;
- (id)channelTargetWeights;
- (void)setChannelTargetCounts:(id)a0;
- (void)setChannelTargetWeights:(id)a0;
- (void)_updateTargetsAndInBetween:(id)a0;
- (BOOL)shouldMorphNormals;
- (void)setShouldMorphNormals:(BOOL)a0;
- (BOOL)wantsCPUMorphing;
- (BOOL)shouldClearCPUDataAfterUpload;
- (float)weightIncrementalThreshold;
- (void)setWantsCPUMorphing:(BOOL)a0;
- (void)convertToAdditiveWithBaseGeometry:(id)a0;
- (BOOL)_isUsingSparseTargets;
- (void)convertToSparseWithBaseGeometry:(id)a0;

@end
