@class NSArray, TPSTipStatusController, ATXProactiveSuggestionClientModel;

@interface TPSProactiveSuggestion : NSObject {
    ATXProactiveSuggestionClientModel *_clientModel;
    TPSTipStatusController *_tipStatusController;
}

@property (retain, nonatomic) NSArray *eligibleTips;

- (id)suggestions;
- (id)initWithTipStatusController:(id)a0;
- (void).cxx_destruct;
- (void)invalidateSuggestions;
- (id)suggestionFromTip:(id)a0;
- (void)sendSuggestions:(id)a0;
- (long long)frequencyControlledConfidenceRatingForTip:(id)a0 withScore:(float)a1;
- (float)scoreForTip:(id)a0;
- (void)sendSuggestions;

@end
