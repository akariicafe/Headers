@class FBSDisplayLayoutMonitor;

@interface WFTakeScreenshotAction : WFAction

@property (retain, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMonitor;

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (void)takeScreenshot;
- (void)cancel;
- (void).cxx_destruct;
- (id)contentDestinationWithError:(id *)a0;
- (id)parameterSummary;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)notifyVisibleScenesOfScreenshot:(id /* block */)a0;
- (id)screenshotDisplay:(id)a0 error:(id *)a1;

@end
