@class NSMutableDictionary;

@interface PPSocialHighlightFractionalEngagementProvider : NSObject <PPSocialHighlightFeatureProvider> {
    NSMutableDictionary *_engagementsByKey;
    NSMutableDictionary *_offeredByKey;
    id /* block */ _groupByBlock;
    id /* block */ _keyBlock;
}

- (void).cxx_destruct;
- (id)applyFeedback:(id)a0;
- (id)valueForHighlight:(id)a0;
- (id)initWithFeedbackGroupByBlock:(id /* block */)a0 highlightKeyBlock:(id /* block */)a1 highlights:(id)a2;

@end
