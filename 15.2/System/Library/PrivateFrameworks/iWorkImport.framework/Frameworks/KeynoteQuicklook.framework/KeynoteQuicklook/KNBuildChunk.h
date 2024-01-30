@class NSUUID, NSArray, NSString, KNBuild, KNBuildChunkIdentifier, NSSet, TSPLazyReference, KNSlide;

@interface KNBuildChunk : TSPObject <KNInspectableAnimation, NSCopying, TSKModel> {
    NSUUID *_buildId;
    BOOL _automatic;
    unsigned long long _referent;
    unsigned long long _cachedIndexOnSlide;
    unsigned long long _cachedActiveIndexOnSlide;
    unsigned long long _cachedIndexInBuild;
    TSPLazyReference *_buildReference;
    BOOL _needsAutomaticFromBuildAttributes;
    BOOL _needsReferentFromBuildAttributes;
    BOOL _needsDelayFromBuildAttributes;
    BOOL _needsDurationFromBuildAttributes;
}

@property (readonly, nonatomic) NSUUID *i_buildId;
@property (readonly, nonatomic) KNBuild *i_buildFromReference;
@property (readonly, nonatomic) KNSlide *slide;
@property (readonly, nonatomic) KNBuildChunkIdentifier *chunkIdentifier;
@property (readonly, nonatomic) KNBuild *build;
@property (readonly, nonatomic) unsigned long long indexInBuild;
@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic, getter=isAutomatic) BOOL automatic;
@property (nonatomic) unsigned long long referent;
@property (readonly, nonatomic) unsigned long long indexOnSlide;
@property (readonly, nonatomic) unsigned long long deliveryGroupIndex;
@property (readonly, nonatomic) BOOL isFirstInBuild;
@property (readonly, nonatomic) BOOL isFirstOnSlide;
@property (readonly, nonatomic) BOOL isFirstInDeliveryGroup;
@property (readonly, nonatomic) KNBuildChunk *nextChunkOnSlide;
@property (readonly, nonatomic) KNBuildChunk *previousChunkOnSlide;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) unsigned long long activeIndexOnSlide;
@property (readonly, nonatomic) KNBuildChunk *previousActiveChunkWithReferentRelativeToEnd;
@property (readonly, nonatomic, getter=isAutomaticWithPreviousChunk) BOOL automaticWithPreviousChunk;
@property (readonly, nonatomic, getter=isAutomaticWithPreviousChunkOnSameDrawable) BOOL automaticWithPreviousChunkOnSameDrawable;
@property (readonly, nonatomic) unsigned long long eventTrigger;
@property (readonly, nonatomic) NSArray *availableEventTriggers;
@property (readonly, nonatomic) BOOL hasComplement;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSSet *inspectableAttributes;
@property (readonly, nonatomic) BOOL canEditAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)i_repairChunkToBuildReferencesFromUUIDsForChunks:(id)a0 builds:(id)a1 context:(id)a2;
+ (BOOL)needsObjectUUID;
+ (void)i_validateBuildReferencesForChunks:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)didInitFromSOS;
- (void)i_invalidateCaches;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)i_clearChunkIdentifier;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)i_setChunkIdentifier:(id)a0;
- (void)i_didLoadBuild:(id)a0;
- (void)i_setBuildPointer:(id)a0 forUnarchive:(BOOL)a1;
- (void)i_setBuildId:(id)a0;
- (void)i_updateChunkUUIDReferencesToBuild:(id)a0;
- (id)initWithBuild:(id)a0;
- (id)initWithBuild:(id)a0 copyingAttributesFromChunk:(id)a1;
- (id)p_stringRepresentationWithNotAvailableForIndex:(unsigned long long)a0;
- (id)initWithBuild:(id)a0 referent:(unsigned long long)a1 copyingRemainingAttributesFromChunk:(id)a2;
- (BOOL)isComplementOfBuildChunk:(id)a0;
- (id)p_stringForReferent:(unsigned long long)a0;
- (id)localizedNameForEventTrigger:(unsigned long long)a0 includeLineBreaks:(BOOL)a1;
- (void)p_setDelayFromBuildAttributes:(id)a0 withReferent:(unsigned long long)a1 automatic:(BOOL)a2;
- (void)p_setDurationFromBuildAttributes:(id)a0;

@end
