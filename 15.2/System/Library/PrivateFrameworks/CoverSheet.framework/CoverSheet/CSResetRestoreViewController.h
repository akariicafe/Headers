@protocol CSResetRestoreStatusProviding;

@interface CSResetRestoreViewController : CSModalViewControllerBase {
    id<CSResetRestoreStatusProviding> _statusProvider;
}

- (void)viewDidLoad;
- (long long)presentationPriority;
- (void).cxx_destruct;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (id)initWithStatusProvider:(id)a0;
- (id)_currentTextForResetOrRestoreState;

@end
