@class WFSharedShortcut, WFCloudKitTask;

@interface WFStopSharingWorkflowActivity : UIActivity

@property (retain, nonatomic) WFSharedShortcut *shortcut;
@property (retain, nonatomic) WFCloudKitTask *unshareTask;

- (id)activityType;
- (id)activityViewController;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
