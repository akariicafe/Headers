@class _PASLazyPurgeableResult;

@interface PPUniversalSearchSpotlightIndexScorer : NSObject {
    _PASLazyPurgeableResult *_cachedPortraitTopicScores;
}

- (double)computeSpotlightIndexTopicSubscoreFromPortraitExtractions:(id)a0;
- (id)initWithLocalTopicStore:(id)a0;
- (double)computeSpotlightIndexTopicScoreComponentFromDocumentTopicVector:(id)a0;
- (void).cxx_destruct;
- (id)topicAlgorithmWeights;
- (double)computeSpotlightIndexScoreFromPortraitExtractions:(id)a0;

@end
