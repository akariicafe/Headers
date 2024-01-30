@class WFFileRepresentation;

@interface WFRenameFileAction : WFAction

@property (retain, nonatomic) WFFileRepresentation *parentDirectory;

- (void).cxx_destruct;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)renameFile:(id)a0 name:(id)a1;
- (void)finishRunningWithFile:(id)a0 error:(id)a1;

@end
