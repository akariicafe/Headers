@class NSString, NSArray;
@protocol NSObject, ATXModeEntityProtocol, ATXJSONSerializableProtocol;

@interface ATXModeEntityScoringFeatures : NSObject <ATXJSONSerializableProtocol>

@property (retain, nonatomic) NSString *modeDescription;
@property (nonatomic) double posteriorProbability;
@property (nonatomic) double classConditionalProbability;
@property (nonatomic) unsigned long long uniqueOccurrencesInMode;
@property (nonatomic) unsigned long long modeOccurrences;
@property (nonatomic) unsigned long long localOccurrences;
@property (nonatomic) unsigned long long globalOccurrences;
@property (nonatomic) double modePopularity;
@property (nonatomic) double globalPopularity;
@property (nonatomic) double ratioModeAndGlobalPopularity;
@property (nonatomic) unsigned long long localOccurrencesAcrossAllEntities;
@property (retain, nonatomic) NSArray *modeLaunchesHistogramForLast28Days;
@property (retain, nonatomic) NSArray *globalLaunchesHistogramForLast28Days;
@property (retain, nonatomic) id<ATXModeEntityProtocol> entity;
@property (retain, nonatomic) NSString *entityDescription;
@property (retain, nonatomic) id<NSObject, ATXJSONSerializableProtocol> entitySpecificFeatures;

- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)entityOccurredGloballyOverLastNDays:(unsigned long long)a0;
- (BOOL)entityOccurredInModeOverLastNDays:(unsigned long long)a0;
- (BOOL)entityOccurredOverLastNDays:(unsigned long long)a0 withHistogram:(id)a1;

@end
