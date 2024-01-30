@interface EKUIReadonlyEventViewController : EKEventViewController

- (BOOL)shouldAutorotate;
- (id)initWithEvent:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)wantsManagement;
- (void)willCommitPreview;

@end
