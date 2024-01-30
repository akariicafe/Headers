@class NSMutableDictionary, NSDictionary, MiroAutoEditKenBurnsController, Project, NSMutableArray, MiroBlueprint;

@interface MiroAutoEditTransitionController : NSObject

@property (retain, nonatomic) Project *project;
@property (retain, nonatomic) MiroBlueprint *activeBlueprint;
@property (retain, nonatomic) NSMutableArray *layoutClips;
@property (nonatomic) unsigned long long memoryCategory;
@property (nonatomic) unsigned long long memorySubcategory;
@property (retain, nonatomic) MiroAutoEditKenBurnsController *kbController;
@property (retain, nonatomic) NSMutableArray *kenBurnsPanZoomPatterns;
@property (retain, nonatomic) NSMutableArray *transitions;
@property (retain, nonatomic) NSMutableDictionary *groupingTransitions;
@property (retain, nonatomic) NSMutableArray *specialTransitions;
@property (retain, nonatomic) NSMutableArray *multiTransitions;
@property (nonatomic) int numberOfPotentialTransitionPoints;
@property (nonatomic) BOOL memoryTypeDisablesCropping;
@property (nonatomic) BOOL memoryFeaturesPeople;
@property (retain, nonatomic) NSDictionary *memoryFeaturesPersonInAsset;
@property (retain, nonatomic) NSDictionary *featuredPersonsInMemoryAsFaceRanges;

- (void).cxx_destruct;
- (void)establishPanAndZoomPatterns;
- (int)numberOfTransitionClipsInLayoutClips;
- (int)numberOfMultiTransitionsNeeded;
- (id)prepareTransitionsFromBlueprint:(id)a0 forNumberOfEditPoints:(int)a1 numberOfMultiTransitions:(int)a2;
- (void)assignTransitionsToLayoutClips;
- (void)applyTransitionToLayoutClip:(id)a0;
- (id)nextKBPanAndZoomSetForNumberOfEdits:(int)a0 following:(id)a1 forAspect:(id)a2;
- (unsigned long long)kenBurnsPaceForBlueprint;
- (void)applyDeterminedKenBurnsTreatments:(id)a0 forAspect:(id)a1;
- (void)applyPanoStyleToClip:(id)a0;
- (void)applyKenBurnsForBurstClip:(id)a0;
- (BOOL)transitionDictatesKenBurnsMotion:(id)a0;
- (void)applyKenBurnsOrEffectForKenBurnsClip:(id)a0;
- (void)assignRemainingKenBurnsAnyClipTreatments;
- (id)convertMultiTransitionDictionary:(id)a0 basedOnMultiLayout:(int)a1;
- (BOOL)transitionCandidate:(id)a0 validForLayoutClip:(id)a1;
- (void)assignRequiredCutsAndMultiTransitionsIn:(id)a0;
- (void)assignFirstAppropriateTransitionTo:(id)a0;
- (void)updateNumberOfTransitionsToInclude:(int)a0;
- (BOOL)findAndAssignConsecutiveClipsIn:(id)a0 supportingTransitionGroup:(id)a1;
- (void)shuffleTransitionsInArray:(id)a0;
- (id)transitionForLayoutClip:(id)a0;
- (id)transitionFromTransitions:(id)a0 leadingClipType:(int)a1 followingClipType:(int)a2 includesPano:(BOOL)a3;
- (BOOL)attemptToTransitionFromClip:(id)a0 toClip:(id)a1 withSettingsFromLayoutClip:(id)a2;
- (id)transitionDictionaryForMultiFromBlueprint:(id)a0;
- (unsigned long long)kenBurnsPreferredMovementForClip:(id)a0;
- (BOOL)clipHasMediaLimitations:(id)a0;
- (BOOL)clipShouldTrimToSelection:(id)a0;
- (id)clipBeforeClip:(id)a0;
- (int)maxTransitionDurationFromClip:(id)a0 toClip:(id)a1 transitionName:(id)a2;
- (void)applyMultiUpTransitionTreatmentToLayoutClip:(id)a0;
- (void)prepareTransitionsForBlueprint;
- (void)applyTransitions;
- (void)applyClipEffectsBasedOnTransitions;
- (unsigned long long)safeInsertIndexForTransition:(id)a0 inTransitions:(id)a1;
- (void)adjustChosenTransitionsToAdhereToContentRules:(id)a0;
- (BOOL)transitionAcceptableBetween:(id)a0 secondClip:(id)a1;
- (id)_everyTransitionDEBUG;

@end
