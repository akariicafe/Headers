@class PGMeaningfulEventSceneCollectionTrait, PGMeaningfulEventLocationCollectionTrait, PGMeaningfulEventPartOfDayTrait, PGGraph, PGMeaningfulEventCollectionTrait, PGMeaningfulEventNumberTrait, PGMeaningfulEventLocationMobilityTrait;

@interface PGMeaningfulEventCriteria : NSObject

@property (readonly, nonatomic) PGGraph *graph;
@property (retain, nonatomic) PGMeaningfulEventSceneCollectionTrait *scenesTrait;
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *roisTrait;
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *poisTrait;
@property (retain, nonatomic) PGMeaningfulEventLocationCollectionTrait *locationsTrait;
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *datesTrait;
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *peopleTrait;
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *numberOfPeopleTrait;
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *socialGroupsTrait;
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *minimumDurationTrait;
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *maximumDurationTrait;
@property (retain, nonatomic) PGMeaningfulEventPartOfDayTrait *significantPartsOfDayTrait;
@property (retain, nonatomic) PGMeaningfulEventPartOfDayTrait *allPartsOfDayTrait;
@property (retain, nonatomic) PGMeaningfulEventLocationMobilityTrait *locationMobilityTrait;
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *publicEventCategoriesTrait;
@property (nonatomic, getter=isDebug) BOOL debug;

- (id)initWithGraph:(id)a0;
- (void).cxx_destruct;
- (id)_debugDescriptionWithMomentNode:(id)a0;

@end
