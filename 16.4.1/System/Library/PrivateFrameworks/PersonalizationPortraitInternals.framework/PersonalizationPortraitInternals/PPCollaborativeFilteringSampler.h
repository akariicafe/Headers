@class _PASCFBurstTrie;

@interface PPCollaborativeFilteringSampler : NSObject {
    _PASCFBurstTrie *_samplingWeightTrie;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned int)_probabilityForItemString:(id)a0 clientIdentifier:(id)a1;
- (id)_weightedSampleFeedbackItems:(id)a0;
- (BOOL)constructAndSendMessageForSamplingRate:(double)a0 shouldContinueBlock:(id /* block */)a1 error:(id *)a2;
- (id)initWithSamplingWeightTrie:(id)a0;

@end
