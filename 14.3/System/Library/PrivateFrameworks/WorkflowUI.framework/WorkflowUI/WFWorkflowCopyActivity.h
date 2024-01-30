@class NSURL;

@interface WFWorkflowCopyActivity : UIActivity

@property (readonly, nonatomic) NSURL *excludedURL;
@property (retain, nonatomic) NSURL *URL;

- (id)activityType;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)performActivity;
- (id)initWithExcludedURL:(id)a0;

@end
