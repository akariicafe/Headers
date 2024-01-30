@class PGMeaningfulEventLocationSetTrait, PGMeaningfulEventPartOfDayTrait, PGMeaningfulEventLocationMobilityTrait, PGMeaningfulEventNumberTrait, PGMeaningfulEventSceneSetTrait, PGMeaningfulEventSetTrait;

@interface PGMeaningfulEventCriteria : NSObject

@property (retain, nonatomic) PGMeaningfulEventSceneSetTrait *scenesTrait;
@property (retain, nonatomic) PGMeaningfulEventSetTrait *roisTrait;
@property (retain, nonatomic) PGMeaningfulEventSetTrait *poisTrait;
@property (retain, nonatomic) PGMeaningfulEventLocationSetTrait *locationsTrait;
@property (retain, nonatomic) PGMeaningfulEventSetTrait *datesTrait;
@property (retain, nonatomic) PGMeaningfulEventSetTrait *peopleTrait;
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *numberOfPeopleTrait;
@property (retain, nonatomic) PGMeaningfulEventSetTrait *socialGroupsTrait;
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *minimumDurationTrait;
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *maximumDurationTrait;
@property (retain, nonatomic) PGMeaningfulEventPartOfDayTrait *significantPartsOfDayTrait;
@property (retain, nonatomic) PGMeaningfulEventPartOfDayTrait *allPartsOfDayTrait;
@property (retain, nonatomic) PGMeaningfulEventLocationMobilityTrait *locationMobilityTrait;
@property (retain, nonatomic) PGMeaningfulEventSetTrait *publicEventCategoriesTrait;
@property (nonatomic, getter=isDebug) BOOL debug;

- (id)init;
- (void).cxx_destruct;
- (id)_debugDescriptionWithMomentNode:(id)a0;

@end
