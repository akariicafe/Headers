@class NSString;

@interface WFSocialAction : WFShareExtensionAction

@property (readonly, nonatomic) NSString *postPrefix;

+ (id)userInterfaceProtocol;

- (void)runAsynchronouslyWithInput:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)showUIWithArchivedItems:(id)a0 isContentManaged:(BOOL)a1 extensionBundleIdentifier:(id)a2;
- (BOOL)convertsAnimatedImagesToVideo;
- (void)convertAnimatedImagesToVideoWithInput:(id)a0 completionHandler:(id /* block */)a1;

@end
