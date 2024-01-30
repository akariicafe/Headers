@class NSArray, ATXProactiveSuggestionUIFeedbackSession;

@interface ATXProactiveSuggestionUIFeedbackResult : ATXProactiveSuggestionFeedbackResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXProactiveSuggestionUIFeedbackSession *session;
@property (readonly, nonatomic) long long engagementType;
@property (readonly, nonatomic) NSArray *shownSuggestions;
@property (readonly, nonatomic) NSArray *engagedSuggestions;
@property (readonly, nonatomic) NSArray *rejectedSuggestions;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (long long)uiEngagementTypeFromShownSuggestions:(id)a0 engagedSuggestions:(id)a1 rejectedSuggestions:(id)a2;
- (id)initWithEngagementType:(long long)a0 shownSuggestions:(id)a1 engagedSuggestions:(id)a2 rejectedSuggestions:(id)a3 session:(id)a4 consumerSubType:(unsigned char)a5 clientCacheUpdate:(id)a6 uiCacheUpdate:(id)a7 context:(id)a8;
- (BOOL)isEqualToATXProactiveSuggestionUIFeedbackResult:(id)a0;
- (id)suggestionExecutableObjectListFromSuggestions:(id)a0;
- (id)initWithShownSuggestions:(id)a0 engagedSuggestions:(id)a1 rejectedSuggestions:(id)a2 session:(id)a3 consumerSubType:(unsigned char)a4 clientCacheUpdate:(id)a5 uiCacheUpdate:(id)a6 context:(id)a7;

@end
