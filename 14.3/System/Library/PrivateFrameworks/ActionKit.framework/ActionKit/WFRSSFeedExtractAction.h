@interface WFRSSFeedExtractAction : WFAction

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)configureRuntimeResourcesWithCompletionHandler:(id /* block */)a0;
- (void)addRSSFeedItemsFromHTML:(id)a0 baseURL:(id)a1 encoding:(id)a2;

@end
