@class PPTextToTopicTransform, CKContextClient;

@interface PPTopicDissector : NSObject {
    CKContextClient *_contextClient;
    PPTextToTopicTransform *_transform;
}

+ (id)sharedInstance;

- (id)extractionsFromContextKitWithText:(id)a0 isPlainText:(BOOL)a1 bundleId:(id)a2 language:(id)a3 weight:(double)a4;
- (id)topicsInText:(id)a0 isPlainText:(BOOL)a1 source:(id)a2 cloudSync:(BOOL)a3 language:(id)a4 topicAlgorithms:(id)a5 namedEntityAlgorithms:(id)a6 weight:(double)a7;
- (id)initWithContextClient:(id)a0;
- (void)_collectResultsFromContextKitWithText:(id)a0 isPlainText:(BOOL)a1 bundleId:(id)a2 language:(id)a3 useContextKitTopics:(BOOL)a4 useContextKitNamedEntities:(BOOL)a5 addTopic:(id /* block */)a6 addNamedEntity:(id /* block */)a7 weight:(double)a8;
- (id)init;
- (void).cxx_destruct;
- (void)_collectHighLevelTopicsWithText:(id)a0 bundleId:(id)a1 addTopic:(id /* block */)a2 weight:(double)a3;

@end
