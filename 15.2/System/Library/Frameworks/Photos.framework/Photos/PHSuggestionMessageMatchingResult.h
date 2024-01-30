@class NSMutableDictionary, PHSuggestionMessageContext, PHSuggestion;

@interface PHSuggestionMessageMatchingResult : NSObject

@property (retain, nonatomic) PHSuggestion *suggestion;
@property (retain, nonatomic) PHSuggestionMessageContext *messageContext;
@property (retain, nonatomic) NSMutableDictionary *scoreByCMMSuggestionMatchingType;

- (void).cxx_destruct;
- (id)initWithSuggestion:(id)a0 messageContext:(id)a1;
- (void)registerMatchingType:(long long)a0 weight:(double)a1;
- (double)scoreForSuggestionMatchingType:(long long)a0;

@end
