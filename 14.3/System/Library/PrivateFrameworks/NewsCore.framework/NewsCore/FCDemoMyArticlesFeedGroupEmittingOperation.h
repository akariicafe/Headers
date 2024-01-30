@interface FCDemoMyArticlesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

- (void)performOperation;
- (id)_demoGroupConfigsPromise;
- (id)_tagsPromiseWithGroupConfigs:(id)a0;
- (id)_headlinesPromiseWithGroupConfigs:(id)a0;
- (id)feedGroupsWithGroupConfigs:(id)a0 tagsByID:(id)a1 headlinesByID:(id)a2;
- (id)_feedGroupForGroupConfig:(id)a0 tagsByID:(id)a1 headlinesByID:(id)a2;

@end
