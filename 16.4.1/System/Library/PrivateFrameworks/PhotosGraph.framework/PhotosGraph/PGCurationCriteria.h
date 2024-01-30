@class PGCurationPartOfDayTrait, PGCurationContentOrAestheticScoreTrait, PGCurationCropScoreTrait, PGCurationSDFoodTrait, PGCurationSetTrait, PGCurationSceneTrait;

@interface PGCurationCriteria : NSObject

@property (nonatomic) double minimumAssetsRatio;
@property (readonly, nonatomic) unsigned long long client;
@property (nonatomic) unsigned long long faceFilter;
@property (nonatomic) BOOL filterUtilityAssets;
@property (retain, nonatomic) PGCurationSceneTrait *scenesTrait;
@property (retain, nonatomic) PGCurationSceneTrait *compulsoryScenesTrait;
@property (retain, nonatomic) PGCurationSetTrait *peopleTrait;
@property (retain, nonatomic) PGCurationSetTrait *socialGroupTrait;
@property (retain, nonatomic) PGCurationPartOfDayTrait *partOfDayTrait;
@property (retain, nonatomic) PGCurationContentOrAestheticScoreTrait *contentOrAestheticScoreTrait;
@property (retain, nonatomic) PGCurationCropScoreTrait *cropScoreTrait;
@property (retain, nonatomic) PGCurationSDFoodTrait *sdFoodTrait;

- (void).cxx_destruct;
- (BOOL)_passesForItem:(id)a0 score:(double *)a1 graph:(id)a2 reasonString:(id *)a3;
- (double)_scoreForSceneClassifications:(id)a0 withSDFoodTrait:(id)a1 curationModel:(id)a2 traitFailed:(BOOL *)a3;
- (double)_scoreForSceneClassifications:(id)a0 withScenesTrait:(id)a1 curationModel:(id)a2 traitFailed:(BOOL *)a3;
- (id)initWithMinimumAssetsRatio:(double)a0 client:(unsigned long long)a1;
- (BOOL)isPassingForAsset:(id)a0 score:(double *)a1;
- (id)niceDescriptionWithGraph:(id)a0;
- (BOOL)passesForItem:(id)a0 score:(double *)a1;
- (BOOL)passesForItem:(id)a0 score:(double *)a1 graph:(id)a2 reasonString:(id *)a3;
- (id)passingAssetsInAssets:(id)a0;
- (id)peopleTraitStringWithGraph:(id)a0;

@end
