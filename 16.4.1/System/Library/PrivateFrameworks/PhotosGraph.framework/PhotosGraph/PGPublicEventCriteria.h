@class NSString, NSArray;

@interface PGPublicEventCriteria : NSObject

@property (retain, nonatomic) NSString *eventCategory;
@property (nonatomic) double minimumTimeAttendance;
@property (nonatomic) double maximumDistance;
@property (nonatomic) BOOL allowsExpandingTimeAttendance;
@property (nonatomic) long long minimumAttendance;
@property (nonatomic) BOOL shouldCheckForTemporalEventMatches;
@property (nonatomic) double temporalEventDistanceThreshold;
@property (nonatomic) BOOL promoteToHighConfidenceBasedOnCategory;
@property (retain, nonatomic) NSArray *disambiguationCriteria;
@property (retain, nonatomic) NSArray *highConfidenceCriteria;
@property (retain, nonatomic) NSArray *prohibitedCriteria;
@property (readonly, nonatomic) BOOL hasMinimumAttendance;

- (void).cxx_destruct;
- (BOOL)_hasSufficientTimeOverlapForEvent:(id)a0 matchingOptions:(id)a1;
- (BOOL)_isMatchingMeaningDisambiguationForEvent:(id)a0 matchingOptions:(id)a1 withHighConfidence:(BOOL *)a2;
- (BOOL)_isMatchingTemporalClusterEventForEvent:(id)a0 matchingOptions:(id)a1;
- (id)_localizedEventNameTerms:(id)a0;
- (id)_localizedSubcategoryTerms:(id)a0;
- (BOOL)_promoteToHighConfidenceBasedOnEvent:(id)a0;
- (BOOL)isMatchingEvent:(id)a0 matchingOptions:(id)a1 withHighConfidence:(BOOL *)a2 matchingDistance:(double *)a3;

@end
