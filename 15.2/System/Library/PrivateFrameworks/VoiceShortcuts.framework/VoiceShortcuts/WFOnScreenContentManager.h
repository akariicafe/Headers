@interface WFOnScreenContentManager : NSObject

- (void)getOnScreenContentWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)getOnScreenContentWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)getContentForLayoutElement:(id)a0 serviceOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)visibleApplicationsFromLayout:(id)a0;
- (id)currentDisplayLayout;
- (void)getNodeForGlobalUserActivityWithCompletionHandler:(id /* block */)a0;

@end
