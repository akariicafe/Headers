@class PGCurationPartOfDayTrait, PGCurationContentOrAestheticScoreTrait, PGCurationCropScoreTrait, PGGraph, NSString, PGCurationSetTrait, PGCurationIndexSetTrait;

@interface PGCurationCriteria : NSObject

@property (readonly, nonatomic) PGGraph *graph;
@property (nonatomic) double minimumAssetsRatio;
@property (readonly, nonatomic) unsigned long long client;
@property (nonatomic) unsigned long long faceFilter;
@property (nonatomic) BOOL filterUtilityAssets;
@property (retain, nonatomic) PGCurationIndexSetTrait *scenesTrait;
@property (retain, nonatomic) PGCurationIndexSetTrait *compulsoryScenesTrait;
@property (retain, nonatomic) PGCurationSetTrait *peopleTrait;
@property (retain, nonatomic) PGCurationPartOfDayTrait *partOfDayTrait;
@property (retain, nonatomic) PGCurationContentOrAestheticScoreTrait *contentOrAestheticScoreTrait;
@property (retain, nonatomic) PGCurationCropScoreTrait *cropScoreTrait;
@property (readonly) NSString *niceDescription;

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 minimumAssetsRatio:(double)a1 client:(unsigned long long)a2;
- (BOOL)isPassingForAsset:(id)a0 score:(double *)a1;
- (BOOL)passesForItem:(id)a0 score:(double *)a1 reasonString:(id *)a2;
- (double)_scoreForSceneClassifications:(id)a0 withScenesTrait:(id)a1 traitFailed:(BOOL *)a2;
- (id)peopleTraitString;

@end
