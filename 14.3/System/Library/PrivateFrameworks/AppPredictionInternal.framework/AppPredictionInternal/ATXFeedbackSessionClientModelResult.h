@class NSArray, ATXFeedbackSession, ATXClientModelCacheUpdate, ATXPredictionContext;

@interface ATXFeedbackSessionClientModelResult : NSObject

@property (retain, nonatomic) NSArray *engagedSuggestions;
@property (retain, nonatomic) NSArray *rejectedSuggestions;
@property (retain, nonatomic) NSArray *shownSuggestions;
@property (retain, nonatomic) ATXClientModelCacheUpdate *cacheUpdate;
@property (retain, nonatomic) ATXFeedbackSession *feedbackSession;
@property (retain, nonatomic) ATXPredictionContext *context;

- (id)init;
- (void).cxx_destruct;
- (unsigned char)consumerSubType;
- (unsigned long long)hash;
- (id)initWithEngagedSuggestions:(id)a0 rejectedSuggestions:(id)a1 shownSuggestions:(id)a2 cacheUpdate:(id)a3 feedbackSession:(id)a4 context:(id)a5;
- (BOOL)isEqual:(id)a0;
- (id)clientModelId;
- (BOOL)isEqualToATXFeedbackSessionClientModelResult:(id)a0;

@end
