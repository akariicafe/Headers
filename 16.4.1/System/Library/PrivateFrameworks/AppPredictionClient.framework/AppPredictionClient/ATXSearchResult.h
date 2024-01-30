@class ATXScoredPrediction, ATXProactiveSuggestion, ATXResponse;

@interface ATXSearchResult : SFSearchResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXScoredPrediction *scoredBundleId;
@property (readonly, nonatomic) ATXResponse *response;
@property (readonly, nonatomic) ATXProactiveSuggestion *proactiveSuggestion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithScoredBundleId:(id)a0 response:(id)a1 proactiveSuggestion:(id)a2;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
