@class PPTopicTransform, _PASCFBurstTrie;

@interface PPTextToTopicTransformGuardedData : NSObject {
    _PASCFBurstTrie *_vocabularyTrie;
    PPTopicTransform *_topicTransform;
}

- (void).cxx_destruct;

@end
