@class RTRoutineManager, ATSConfig, ActionRetriever;

@interface ATSSuggester : NSObject

@property (retain, nonatomic) ActionRetriever *actionRetriever;
@property (retain, nonatomic) RTRoutineManager *rtRoutineManager;
@property (retain, nonatomic) ATSConfig *atsConfig;

- (id)suggestions;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfigFilePath:(id)a0;
- (id)suggestionsWithParameters:(id)a0 databasePath:(id)a1;
- (id)suggestionsWithLimit:(unsigned long long)a0 minimumAbsoluteSupport:(unsigned long long)a1 minimumSupport:(double)a2 minimumConfidence:(double)a3 minimumLift:(double)a4 minimumConviction:(double)a5 minimumRulePowerFactor:(double)a6 minimumUniqueDaysLastWeek:(unsigned long long)a7 minimumUniqueDaysTotal:(unsigned long long)a8 databasePath:(id)a9;
- (id)suggestionsWithLimit:(unsigned long long)a0 minimumAbsoluteSupport:(unsigned long long)a1;
- (void)provideSuggestionFeedback:(id)a0;

@end
