@class NSString, ATXInfoSuggestion;

@interface ATXTimelineRelevanceAbuseControlOutcome : NSObject

@property (readonly, nonatomic) ATXInfoSuggestion *suggestion;
@property (readonly, nonatomic) NSString *suggestionId;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) long long abuseControlOutcome;

+ (id)outcomeWithSuggestion:(id)a0 timestamp:(double)a1 abuseControlOutcome:(long long)a2;
+ (id)outcomeWithSuggestionId:(id)a0 timestamp:(double)a1 abuseControlOutcome:(long long)a2;
+ (id)descriptionForOutcome:(long long)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSuggestion:(id)a0 timestamp:(double)a1 abuseControlOutcome:(long long)a2;
- (id)initWithSuggestion:(id)a0 suggestionId:(id)a1 timestamp:(double)a2 abuseControlOutcome:(long long)a3;

@end
