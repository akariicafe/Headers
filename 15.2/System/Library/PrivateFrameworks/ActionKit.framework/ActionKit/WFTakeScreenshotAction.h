@class FBSDisplayLayoutMonitor;

@interface WFTakeScreenshotAction : WFAction

@property (retain, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMonitor;

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (void)takeScreenshot;
- (void).cxx_destruct;
- (void)cancel;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)parameterSummary;
- (id)screenshotDisplay:(id)a0 error:(id *)a1;
- (void)notifyVisibleScenesOfScreenshot:(id /* block */)a0;

@end
