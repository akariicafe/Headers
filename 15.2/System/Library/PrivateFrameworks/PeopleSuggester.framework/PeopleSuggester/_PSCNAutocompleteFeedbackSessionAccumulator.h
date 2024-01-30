@class _PSCNAutocompleteFeedbackActionStatistics, NSMutableArray, _CDInteraction;

@interface _PSCNAutocompleteFeedbackSessionAccumulator : NSObject

@property (readonly, nonatomic) _CDInteraction *interaction;
@property (readonly, nonatomic) NSMutableArray *vendedSuggestionEvents;
@property (readonly, nonatomic) NSMutableArray *metricsForImpressions;
@property (readonly, nonatomic) NSMutableArray *metricsForSubmodelImpressions;
@property (readonly, nonatomic) _PSCNAutocompleteFeedbackActionStatistics *metricsForAction;

+ (id)parseSubmodel:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)updateWithTappedSuggestion:(id)a0;
- (void)updateWithVendedSuggestions:(id)a0 reportTime:(id)a1;
- (void)updateWithInteraction:(id)a0;
- (void)updateWithFeedback:(id)a0;

@end
