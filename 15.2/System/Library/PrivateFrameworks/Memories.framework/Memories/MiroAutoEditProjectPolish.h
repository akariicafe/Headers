@class MiroAutoEditLogger, Project, MiroAutoEditTransitionController, PHAsset, MiroAutoEditMultiUpController, NSDictionary, MiroAutoEditController, MiroPickList, NSMutableArray, MiroBlueprint;

@interface MiroAutoEditProjectPolish : NSObject

@property (retain, nonatomic) Project *project;
@property (retain, nonatomic) MiroBlueprint *blueprint;
@property (retain, nonatomic) NSDictionary *memoryFeaturesPersonInAsset;
@property (nonatomic) BOOL titleIsSupported;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (nonatomic) BOOL memoryTypeDisablesCropping;
@property (nonatomic) unsigned long long memoryCategory;
@property (nonatomic) unsigned long long memorySubcategory;
@property (nonatomic) BOOL memoryFeaturesPeople;
@property (retain, nonatomic) NSDictionary *featuredPersonsInMemoryAsFaceRanges;
@property (weak, nonatomic) MiroPickList *picklist;
@property (retain, nonatomic) NSDictionary *freezeRanges;
@property (retain, nonatomic) NSMutableArray *layoutClips;
@property (retain, nonatomic) MiroAutoEditTransitionController *transitionsController;
@property (retain, nonatomic) MiroAutoEditMultiUpController *multiController;
@property (nonatomic) MiroAutoEditController *editController;
@property (retain, nonatomic) MiroAutoEditLogger *logger;
@property (retain, nonatomic) NSMutableArray *conversionNeeded;

- (void)cleanup;
- (void).cxx_destruct;
- (id)polishProject;
- (BOOL)multiUpSupportedForAspect:(int)a0;
- (void)applyTitleToFirstClip;
- (void)applyTransitions;
- (void)applyIrisEffect;
- (void)batchConvertCompoundClipsToKenBurnsClips;
- (void)adjustVideoPositioningBasedOnMetadata;
- (void)createLayoutClips;
- (id)applyAudioPolish;
- (void)clearAllStandardClipEffects;
- (void)applyMultiUpTreatments;
- (void)createTransitionControllerAndPrepare;
- (void)applyClipPolish;
- (BOOL)clipIsViableZoomToPersonCandidate:(id)a0;
- (void)applyAutomaticThemeTitleToClip:(id)a0 forPoster:(BOOL)a1;
- (BOOL)isPortraitSquareVideo:(id)a0;
- (float)sideScaleOffsetForScaleFactor:(float)a0;
- (id)videoFramingRangesFor:(id)a0;
- (void)setVideoScaleFactorYPostitionFor:(id)a0 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setVideoScaleFactorXPostitionFor:(id)a0 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)convertSpecialClipTypeToKenBurnsClip:(id)a0;
- (unsigned long long)allowedBurstStylesFromBlueprint:(id)a0;
- (void)_updateSpeedRampsForClip:(id)a0 beginningRampDurationSeconds:(double)a1 endingRampDurationSeconds:(double)a2;
- (BOOL)memoryFeaturesPersonInAsset:(id)a0;
- (id)_everyTitleDEBUG;
- (void)removeIrisStylesFromFirstThreeClips;
- (void)applyBurstEffect;
- (void)adjustSlowMotionSpeedRamps;
- (BOOL)extremeCropAllowed;

@end
