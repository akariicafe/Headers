@interface WFExpandURLAction : WFAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)configureRuntimeResourcesWithCompletionHandler:(id /* block */)a0;

@end
