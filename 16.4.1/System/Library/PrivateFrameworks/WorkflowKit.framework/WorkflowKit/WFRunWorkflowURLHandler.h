@interface WFRunWorkflowURLHandler : NSObject

+ (void)registerOpenWorkflowHandler:(id /* block */)a0;
+ (void)registerRunWorkflowHandler:(id /* block */)a0;
+ (id)workflowWithInputParameters:(id)a0 error:(id *)a1;
+ (id)workflowWithName:(id)a0 identifier:(id)a1 error:(id *)a2;

@end
