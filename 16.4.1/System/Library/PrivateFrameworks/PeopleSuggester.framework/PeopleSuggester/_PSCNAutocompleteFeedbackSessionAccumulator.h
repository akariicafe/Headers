@class _PSCNAutocompleteFeedbackActionStatistics, NSMutableArray, _CDInteraction;

@interface _PSCNAutocompleteFeedbackSessionAccumulator : NSObject

@property (readonly, nonatomic) _CDInteraction *interaction;
@property (readonly, nonatomic) NSMutableArray *vendedSuggestionEvents;
@property (readonly, nonatomic) NSMutableArray *metricsForImpressions;
@property (readonly, nonatomic) NSMutableArray *metricsForSubmodelImpressions;
@property (readonly, nonatomic) _PSCNAutocompleteFeedbackActionStatistics *metricsForAction;

+ (id)parseSubmodel:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)updateWithFeedback:(id)a0;
- (void)updateWithInteraction:(id)a0;
- (void)updateWithTappedSuggestion:(id)a0;
- (void)updateWithVendedSuggestions:(id)a0 reportTime:(id)a1;

@end
