@interface WFDownloadURLAction : WFAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (BOOL)isProgressIndeterminate;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)configureHTTPBodyForRequest:(id)a0 withMethod:(id)a1 completionHandler:(id /* block */)a2;
- (void)getContentsOfURLItem:(id)a0 expectedByteCountHandler:(id /* block */)a1 writtenByteCountHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
