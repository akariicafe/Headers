@interface WFGetFolderContentsAction : WFAction

+ (id)contentsOfDirectory:(id)a0 includingSubfolders:(BOOL)a1 error:(id *)a2;

- (id)contentDestinationWithError:(id *)a0;
- (void)runAsynchronouslyWithInput:(id)a0;

@end
