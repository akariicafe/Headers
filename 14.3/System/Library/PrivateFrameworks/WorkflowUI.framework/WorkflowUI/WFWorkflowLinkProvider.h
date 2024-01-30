@class NSString, NSURL, WFWorkflow;
@protocol WFUserInterfaceHost;

@interface WFWorkflowLinkProvider : UIActivityItemProvider

@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) NSString *workflowID;
@property (readonly, nonatomic) NSURL *realmURL;
@property (readonly, nonatomic) id<WFUserInterfaceHost> userInterface;
@property (copy, nonatomic) NSString *exclusiveActivityType;
@property (retain, nonatomic) NSURL *workflowURL;

- (id)activityViewController:(id)a0 thumbnailImageForActivityType:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)item;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)initWithPlaceholderItem:(id)a0 workflow:(id)a1 userInterface:(id)a2;

@end
