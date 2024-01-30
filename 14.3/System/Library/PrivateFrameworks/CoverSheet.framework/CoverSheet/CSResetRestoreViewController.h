@protocol CSResetRestoreStatusProviding;

@interface CSResetRestoreViewController : CSModalViewControllerBase {
    id<CSResetRestoreStatusProviding> _statusProvider;
}

- (long long)presentationPriority;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithStatusProvider:(id)a0;
- (id)_currentTextForResetOrRestoreState;

@end
