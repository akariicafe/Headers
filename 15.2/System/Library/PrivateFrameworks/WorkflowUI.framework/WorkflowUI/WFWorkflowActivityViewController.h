@class NSString, WFWorkflow, WFFileRepresentation, WFSignedShortcutFileProvider, WFWorkflowLinkProvider;

@interface WFWorkflowActivityViewController : UIActivityViewController <UIActivityViewControllerObjectManipulationDelegate>

@property (retain, nonatomic) WFFileRepresentation *workflowFile;
@property (nonatomic) long long selectedMode;
@property (nonatomic) long long selectedDestination;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) WFWorkflowLinkProvider *linkProvider;
@property (retain, nonatomic) WFSignedShortcutFileProvider *signedShortcutFileProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_customizationAvailableForActivityViewController:(id)a0;
- (id)_customizationGroupsForActivityViewController:(id)a0;
- (void).cxx_destruct;
- (void)_customizationsDidChange;
- (id)initWithWorkflow:(id)a0 applicationActivities:(id)a1;
- (id)generateSharingModeGroup;
- (id)generateSharingDestinationGroup;

@end
