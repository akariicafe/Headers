@class NSString, PGMeaningfulEventNumberTrait, PGMeaningfulEventSetTrait, PGMeaningfulEventLocationMobilityTrait, NSDictionary, PGMeaningfulEventSceneCollectionTrait, PGMeaningfulEventPartOfDayTrait, PGMeaningfulEventLocationSetTrait;

@interface PGMeaningfulEventRequiredCriteria : PGMeaningfulEventCriteria

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *meaningNodeLabel;
@property (readonly, nonatomic) double minimumScore;
@property (nonatomic) BOOL mustBeInteresting;
@property (retain, nonatomic) PGMeaningfulEventSceneCollectionTrait *scenesTrait;
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
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSDictionary *additionalInfo;

- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithIdentifier:(id)a0 minimumScore:(double)a1;

@end
