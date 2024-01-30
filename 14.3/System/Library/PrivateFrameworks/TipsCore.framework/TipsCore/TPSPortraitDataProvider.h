@class PPTopicStore;

@interface TPSPortraitDataProvider : NSObject {
    PPTopicStore *_store;
}

- (id)init;
- (void).cxx_destruct;
- (id)_initWithStore:(id)a0;
- (BOOL)matchesTopics:(id)a0 confidenceThreshold:(double)a1;

@end
