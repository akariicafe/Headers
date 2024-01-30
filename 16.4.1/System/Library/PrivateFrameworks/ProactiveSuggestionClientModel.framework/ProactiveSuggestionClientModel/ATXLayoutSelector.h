@class NSString;
@protocol ATXUniversalBlendingLayerHyperParametersProtocol, ATXUniversalSuggestionDeduplicatorProtocol;

@interface ATXLayoutSelector : NSObject <ATXLayoutSelectorProtocol> {
    id<ATXUniversalSuggestionDeduplicatorProtocol> _deduplicator;
    id<ATXUniversalBlendingLayerHyperParametersProtocol> _hyperParameters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)validLayoutsForConsumerSubType:(unsigned char)a0 rankedSuggestions:(id)a1;
- (id)init;
- (id)initWithSuggestionDeduplicator:(id)a0 hyperParameters:(id)a1;
- (id)selectedLayoutForConsumerSubType:(unsigned char)a0 rankedSuggestions:(id)a1;
- (void).cxx_destruct;

@end
