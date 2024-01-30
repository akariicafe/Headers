@class KNAnimationPluginMenu, NSString, NSArray, TSDBezierPathSource, KNTransitionAttributes, NSSet, TSUColor, KNAnimationInfo;

@interface KNTransition : TSPContainedObject <KNInspectableAnimation, TSKModel> {
    KNTransitionAttributes *_attributes;
}

@property (readonly, nonatomic) NSString *effect;
@property (readonly, nonatomic) BOOL isMagicMove;
@property (copy, nonatomic) KNTransitionAttributes *attributes;
@property (readonly, nonatomic) KNAnimationInfo *animationInfo;
@property (readonly, nonatomic) NSArray *localizedEventTriggerNames;
@property (readonly, nonatomic) KNAnimationPluginMenu *directionMenu;
@property (readonly, nonatomic) unsigned long long directionType;
@property (readonly, nonatomic) BOOL supportsDirection;
@property (readonly, nonatomic) BOOL supportsDuration;
@property (readonly, nonatomic) BOOL supportsBounce;
@property (readonly, nonatomic) BOOL supportsColor;
@property (readonly, nonatomic) BOOL supportsTwist;
@property (readonly, nonatomic) BOOL supportsTravelDistance;
@property (readonly, nonatomic) BOOL supportsCustomEffectTimingCurve1;
@property (readonly, nonatomic) BOOL supportsCustomEffectTimingCurve2;
@property (readonly, nonatomic) BOOL supportsCustomEffectTimingCurve3;
@property (readonly, nonatomic) BOOL hasAutomaticTrigger;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) BOOL documentIsRTL;
@property (readonly, nonatomic) TSUColor *color;
@property (readonly, nonatomic) float customTwist;
@property (readonly, nonatomic) long long customMosaicSize;
@property (readonly, nonatomic) long long customMosaicType;
@property (readonly, nonatomic) BOOL customBounce;
@property (readonly, nonatomic) BOOL customMotionBlur;
@property (readonly, nonatomic) float customTravelDistance;
@property (readonly, nonatomic) long long customTimingCurve;
@property (readonly, nonatomic) long long randomNumberSeed;
@property (readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve1;
@property (readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve2;
@property (readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve3;
@property (readonly, nonatomic) NSString *customEffectTimingCurveThemeName1;
@property (readonly, nonatomic) NSString *customEffectTimingCurveThemeName2;
@property (readonly, nonatomic) NSString *customEffectTimingCurveThemeName3;
@property (readonly, nonatomic) BOOL customMagicMoveFadeUnmatchedObjects;
@property (readonly, nonatomic) long long customTextDelivery;
@property (readonly, nonatomic) BOOL isAutomaticTransition;
@property (readonly, nonatomic) NSSet *inspectableAttributes;
@property (readonly, nonatomic) BOOL canEditAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)directionTypeForEffect:(id)a0;
+ (id)bindingMap;
+ (BOOL)hasDirectionOptionForEffect:(id)a0;
+ (id)bindingKeyPathForAttributeKey:(id)a0;
+ (id)attributeKeyForBindingKeyPath:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOwner:(id)a0;
- (id)initWithArchive:(const struct TransitionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct TransitionAttributesArchive *x4; } *)a0 unarchiver:(id)a1 owner:(id)a2;
- (unsigned long long)p_keynoteVersionFromUnarchiver:(id)a0;
- (void)saveToArchive:(struct TransitionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct TransitionAttributesArchive *x4; } *)a0 archiver:(id)a1;
- (id)initWithOwner:(id)a0 attributes:(id)a1;
- (BOOL)supportsTimingCurves;
- (BOOL)supportsRandomNumberSeedInspection;
- (BOOL)p_supportsCustomEffectTimingCurveForLayoutStyles:(id)a0;

@end
