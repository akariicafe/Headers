@class ATXBiomeProactiveSuggestionUIFeedbackResultStream;

@interface ATXUIFeedbackMetricsComputer : NSObject {
    ATXBiomeProactiveSuggestionUIFeedbackResultStream *_stream;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithUIFeedbackResultStream:(id)a0;
- (id)_computeResultForClientModel:(id)a0 query:(id)a1 publisher:(id)a2 resultSpecification:(id)a3;
- (id)_computeResultForConsumerSubType:(unsigned char)a0 query:(id)a1 publisher:(id)a2 resultSpecification:(id)a3;
- (void)_updateNonTrendPlotSectionsInResult:(id)a0 withFeedbackResult:(id)a1;
- (void)_updateResultSection:(id)a0 withSuggestions:(id)a1 clientModelId:(id)a2 consumerSubType:(unsigned char)a3;
- (id)computeResultForQuery:(id)a0 resultSpecification:(id)a1;

@end
