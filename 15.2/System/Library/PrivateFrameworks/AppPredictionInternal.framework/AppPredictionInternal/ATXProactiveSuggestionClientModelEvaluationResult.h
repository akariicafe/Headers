@class NSSet, NSMutableDictionary;

@interface ATXProactiveSuggestionClientModelEvaluationResult : NSObject {
    NSSet *_dockedApps;
}

@property (readonly, nonatomic) unsigned long long sessionType;
@property (readonly, nonatomic) long long executableType;
@property (readonly, nonatomic) BOOL removeDockedApps;
@property (nonatomic) unsigned long long engagedInTop1;
@property (nonatomic) unsigned long long engagedInTop2;
@property (nonatomic) unsigned long long engagedInTop4;
@property (nonatomic) unsigned long long engagedInTop8;
@property (nonatomic) unsigned long long numberOfSessionsWithPredictions;
@property (nonatomic) unsigned long long numberOfSessions;
@property (retain, nonatomic) NSMutableDictionary *engagedInTop4PerCandidate;
@property (retain, nonatomic) NSMutableDictionary *engagedInTop8PerCandidate;
@property (retain, nonatomic) NSMutableDictionary *shownInTop8PerCandidate;
@property (retain, nonatomic) NSMutableDictionary *engagedPerCandidate;
@property (nonatomic) float reciprocalRank;

+ (long long)rankOfEngagedSuggestion:(id)a0 inSuggestions:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)filteredSuggestions:(id)a0 removeDockedApps:(BOOL)a1;
- (id)initWithSessionType:(unsigned long long)a0 executableType:(long long)a1 removeDockedApps:(BOOL)a2;
- (void)updateCountsForSessionsWithShownSuggestions:(id)a0 engagedSuggestions:(id)a1 rejectedSuggestions:(id)a2;

@end
