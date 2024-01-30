@class HMETrieNode, NSMapTable, NSObject;
@protocol HMETopicRouterDelegate, OS_os_log;

@interface HMETopicRouter : NSObject {
    NSObject<OS_os_log> *_logger;
}

@property (readonly, nonatomic) HMETrieNode *rootNode;
@property (readonly, nonatomic) NSMapTable *registrations;
@property (readonly, weak) id<HMETopicRouterDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (id)initWithDelegate:(id)a0 logCategory:(const char *)a1;
- (void)changeRegistrationsForConsumer:(id)a0 topicFilterAdditions:(id)a1 topicFilterRemovals:(id)a2;
- (id)dumpStateDescription;
- (void)registerConsumer:(id)a0 topicFilters:(id)a1;
- (id)consumersForTopic:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterConsumer:(id)a0;
- (void)unregisterConsumer:(id)a0 topicFilters:(id)a1;
- (id)minimalSpanningTopicFilters;
- (id)allRegisteredTopicFilters;
- (id)initWithDelegate:(id)a0 logger:(id)a1;

@end
